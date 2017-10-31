//
//  DQShineLayer.h
//  ShinTest
//
//  Created by dongshangtong on 2017/10/18.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#include <UIKit/UIKit.h>
@class DQShineParams;

typedef void(^shineLayerEndAnim)(void);

@interface DQShineLayer : CALayer<CAAnimationDelegate>

@property (nonatomic ,strong)CAShapeLayer *shapeLayer;
@property (nonatomic ,strong)UIColor   *fillColor;
@property (nonatomic ,strong)CADisplayLink *displaylink;
@property (nonatomic ,strong)DQShineParams *shineParams;

@property (nonatomic ,assign)double animDuration;

@property (nonatomic ,copy)shineLayerEndAnim endAnim;

-(void)startAnim;
@end
