//
//  DQShineClickLayer.h
//  ShinTest
//
//  Created by dongshangtong on 2017/10/18.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

@interface DQShineClickLayer : CALayer

@property (nonatomic ,strong)CAShapeLayer *shapeLayer;

@property (nonatomic ,strong)UIColor   *fillColor;

@property (nonatomic ,strong)UIColor *color;

@property (nonatomic ,strong)UIImage *image;

@property (nonatomic ,assign)double animDuration;

@property (nonatomic ,assign)BOOL clicked;

@property (nonatomic,strong)CALayer  *maskLayer;


-(void)startAnim;

@end
