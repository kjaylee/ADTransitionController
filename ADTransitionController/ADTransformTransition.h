//
//  ADTransformTransition.h
//  Transition
//
//  Created by Patrick Nollet on 08/03/11.
//  Copyright 2011 Applidium. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ADTransition.h"

@interface ADTransformTransition : ADTransition {
    CATransform3D _inLayerTransform;
    CATransform3D _outLayerTransform;
    CAAnimation * _Nullable   _animation;
}

@property (readonly) CAAnimation * _Nullable animation;
@property (readonly) CATransform3D inLayerTransform;
@property (readonly) CATransform3D outLayerTransform;

- (_Nullable id)initWithAnimation:(CAAnimation * _Nullable)animation inLayerTransform:(CATransform3D)inTransform outLayerTransform:(CATransform3D)outTransform;
- (_Nullable id)initWithDuration:(CFTimeInterval)duration;
- (_Nullable id)initWithDuration:(CFTimeInterval)duration sourceRect:(CGRect)sourceRect;
@end
