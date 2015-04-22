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

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface HPPPPrintLaterManager : NSObject

/*!
 * @property printLaterUserNotificationCategory
 * @description UIUserNotificationCategory to register in the clients for push notifications of the print later. The clients must do the registration because it may happen that the client have other notification categories to register, and all the registration must be do at the same time, otherwise the new category will override the previous one.
 */
@property (strong, nonatomic) UIUserNotificationCategory *printLaterUserNotificationCategory;

@property (assign, nonatomic) BOOL userNotificationsPermissionSet;
@property (assign, nonatomic) BOOL currentLocationPermissionSet;

+ (HPPPPrintLaterManager *)sharedInstance;
- (void)initLocationManager;
- (CLLocationCoordinate2D)retrieveCurrentLocation;
- (void)handleNotification:(UILocalNotification *)notification action:(NSString *)action;
- (void)handleNotification:(UILocalNotification *)notification;
- (void)initUserNotifications;

@end