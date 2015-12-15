//
// HP Inc.
// All rights reserved.
//
// This file, its contents, concepts, methods, behavior, and operation
// (collectively the "Software") are protected by trade secret, patent,
// and copyright laws. The use of the Software is governed by a license
// agreement. Disclosure of the Software to third parties, in any form,
// in whole or in part, is expressly prohibited except as authorized by
// the license agreement.
//

#import "MPLayoutAlgorithm.h"

@interface MPLayoutAlgorithmFit : MPLayoutAlgorithm

typedef enum {
    MPLayoutAlgorithmFitTop,
    MPLayoutAlgorithmFitMiddle,
    MPLayoutAlgorithmFitBottom
} MPLayoutAlgorithmFitVerticalPosition;

typedef enum {
    MPLayoutAlgorithmFitLeft,
    MPLayoutAlgorithmFitCenter,
    MPLayoutAlgorithmFitRight
} MPLayoutAlgorithmFitHorizontalPosition;

@property (assign, nonatomic, readonly) MPLayoutAlgorithmFitHorizontalPosition horizontalPosition;
@property (assign, nonatomic, readonly) MPLayoutAlgorithmFitVerticalPosition verticalPosition;

- (id)initWithHorizontalPosition:(MPLayoutAlgorithmFitHorizontalPosition)horizontalPosition andVerticalPosition:(MPLayoutAlgorithmFitVerticalPosition)verticalPosition;

@end
