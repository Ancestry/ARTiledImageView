//
//  ARTile.m
//  ARTiledImageView
//
//  Created by Daniel Doubrovkine on 4/1/14.
//  Copyright (c) 2014 Artsy. All rights reserved.
//

#import "ARTile.h"

@implementation ARTile

- (instancetype)initWithUrl:(NSURL *)url rect:(CGRect)rect
{
    self = [super init];
    if (self == nil) return nil;

    _tileURL = url;
    _tileRect = rect;

    return self;
}


@end

