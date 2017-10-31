//
//  ShineButtonViewController.m
//  MyOCDome
//
//  Created by dongshangtong on 2017/10/30.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import "ShineButtonViewController.h"
#import "DQShineParams.h"
#import "DQShineButton.h"
@interface ShineButtonViewController ()

@end

@implementation ShineButtonViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    
    
    DQShineParams * params = [[DQShineParams alloc]init];
    
    params.bigShineColor =  [UIColor colorWithRed:153/255.0 green:152/255.0 blue:83/255.0 alpha:1.0];
    
    params.smallShineColor =  [UIColor colorWithRed:102/255.0 green:102/255.0 blue:102/255.0 alpha:1.0];
    
    DQShineButton *btn = [[DQShineButton alloc]initWithFrame:CGRectMake(100, 100, 60, 60) andparams:params];
    
    btn.fillColor = [UIColor colorWithRed:153/255.0 green:152/255.0 blue:83/255.0 alpha:1.0];
    btn.color = [UIColor colorWithRed:170/255.0 green:170/255.0 blue:170/255.0 alpha:1.0];
    [btn addTarget:self action:@selector(action) forControlEvents:UIControlEventTouchUpInside];
    
    [self.view addSubview:btn];
    
    
    
    
}

-(void)action{
    
    NSLog(@"KKKKKKKKKKK");
}



@end
