//
//  DQShineAngleLayer.h
//  ShinTest
//
//  Created by dongshangtong on 2017/10/18.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
@class DQShineParams ;
@interface DQShineAngleLayer : CALayer<CAAnimationDelegate>

@property (nonatomic ,strong) DQShineParams * shineparams;

@property (nonatomic ,strong)NSMutableArray *shineLayers;

@property (nonatomic ,strong)NSMutableArray *smallShineLayers;

@property (nonatomic ,strong)CADisplayLink *displaylink;

- (instancetype)initWith:(CGRect )frame withParams:(DQShineParams *)shineparams;

-(void)startAnim;
@end
