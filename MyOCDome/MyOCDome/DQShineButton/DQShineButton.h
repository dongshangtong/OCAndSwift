//
//  DQShineButton.h
//  ShinTest
//
//  Created by dongshangtong on 2017/10/18.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import <UIKit/UIKit.h>
@class DQShineLayer;
@class DQShineClickLayer;
@class DQShineParams;
@interface DQShineButton : UIControl

@property (nonatomic ,strong) UIColor *color;

@property (nonatomic ,strong) UIColor *fillColor;

@property (nonatomic ,strong) UIColor *image;

@property (nonatomic ,strong) DQShineParams *shineParams;

@property (nonatomic ,strong)DQShineClickLayer *clickLayer;

@property (nonatomic ,strong)DQShineLayer *shineLayer;

- (instancetype)initWithFrame:(CGRect)frame andparams:(DQShineParams *)shineParams;

@end
