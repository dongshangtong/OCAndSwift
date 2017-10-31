//
//  DQValidationView.h
//  MyOCDome
//
//  Created by dongshangtong on 2017/10/31.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^ChangValidationCodeBlock)(NSString *code) ;

@interface DQValidationView : UIView


@property (nonatomic ,copy)ChangValidationCodeBlock validationCodeBlock;
-(instancetype)initWithFrame:(CGRect)frame  andCharCount:(NSInteger)charCount andLineCount:(NSInteger)lineCount;

@end
