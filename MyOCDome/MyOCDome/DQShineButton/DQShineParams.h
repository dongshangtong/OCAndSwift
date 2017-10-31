//
//  DQShineParams.h
//  ShinTest
//
//  Created by dongshangtong on 2017/10/18.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum : NSUInteger {
    DQShineImageHeart,
    DQShineImageLike,
    DQShineImageSmile,
    DQShineImageStar,
    DQShineImageCustom,
} DQShineImage;

@interface DQShineParams : NSObject

@property (nonatomic ,assign)BOOL allowRandomColor;

@property (nonatomic ,assign)double animDuration;

@property (nonatomic ,strong)UIColor *bigShineColor;

@property (nonatomic ,assign)BOOL enableFlashing;

@property (nonatomic ,assign)NSInteger shineCount;

@property (nonatomic ,assign)float shineTurnAngle;

@property (nonatomic ,assign)float shineDistanceMultiple;

@property (nonatomic ,assign)float smallShineOffsetAngle;

@property (nonatomic ,strong)UIColor *smallShineColor;

@property (nonatomic ,assign)float shineSize;

@property (nonatomic ,strong)NSArray *colorRandom;

@property (nonatomic ,assign)DQShineImage  shineType;

@property (nonatomic ,strong)UIImage *shineImage;

@property (nonatomic ,assign)BOOL isIOS10;
@end
