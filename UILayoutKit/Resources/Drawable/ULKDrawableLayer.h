//
//  ULKDrawableLayer.h
//  UILayoutKit
//
//  Created by Tom Quist on 30.12.12.
//  Copyright (c) 2012 Tom Quist. All rights reserved.
//
//  Modified by towik on 19.07.16.
//  Copyright (c) 2016 towik. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import "ULKDrawable.h"

@interface ULKDrawableLayer : CALayer <ULKDrawableDelegate>

@property (nonatomic, strong) ULKDrawable *drawable;

@end
