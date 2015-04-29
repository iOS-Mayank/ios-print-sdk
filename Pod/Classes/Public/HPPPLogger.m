//
// Hewlett-Packard Company
// All rights reserved.
//
// This file, its contents, concepts, methods, behavior, and operation
// (collectively the "Software") are protected by trade secret, patent,
// and copyright laws. The use of the Software is governed by a license
// agreement. Disclosure of the Software to third parties, in any form,
// in whole or in part, is expressly prohibited except as authorized by
// the license agreement.
//

#import <DDASLLogger.h>
#import <DDTTYLogger.h>

@interface HPPPLogger()

@end

@implementation HPPPLogger

+ (id)sharedInstance
{
    static HPPPLogger *sharedInstance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        sharedInstance = [[HPPPLogger alloc] init];
    });
    
    return sharedInstance;
}

- (void)configureLogging
{
    // Which log level(s) should be included in the logs?
    [DDLog addLogger:[DDASLLogger sharedInstance] withLogLevel:LOG_LEVEL_VERBOSE];
    [DDLog addLogger:[DDTTYLogger sharedInstance] withLogLevel:LOG_LEVEL_VERBOSE];
}

- (int)loggingContext
{
    return HPPP_LOG_CONTEXT;
}

@end