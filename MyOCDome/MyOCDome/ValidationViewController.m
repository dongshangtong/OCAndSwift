//
//  ValidationViewController.m
//  MyOCDome
//
//  Created by dongshangtong on 2017/10/31.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import "ValidationViewController.h"
#include "DQValidationView.h"
@interface ValidationViewController ()

@end

@implementation ValidationViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    DQValidationView * vali = [[DQValidationView alloc]initWithFrame:CGRectMake(100, 150, 100, 40) andCharCount:4 andLineCount:8];
    vali.validationCodeBlock = ^(NSString *code) {
        
        NSLog(@"验证码是:%@",code);
        
    };
    [self.view addSubview:vali];
    
}



@end
