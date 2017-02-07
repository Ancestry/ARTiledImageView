//
//  ARTile.h
//  ARTiledImageView
//
//  Created by Daniel Doubrovkine on 4/1/14.
//  Copyright (c) 2014 Artsy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/// Class to represent a tiles positioning and image

@interface ARTile : NSObject

/// Where does the tile sit on the frame
@property (nonatomic, assign) CGRect tileRect;

/// URL of the tile
@property (nonatomic, retain) NSURL* tileURL;

/// Preferred initializer
- (instancetype)initWithUrl:(NSURL *)url rect:(CGRect)rect;

@end
