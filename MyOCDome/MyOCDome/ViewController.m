//
//  ViewController.m
//  MyOCDome
//
//  Created by dongshangtong on 2017/10/30.
//  Copyright © 2017年 dongshangtong. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()<UITableViewDataSource,UITableViewDelegate>

@property (strong,nonatomic)UITableView *tableView;
@property (strong,nonatomic)NSMutableArray *dataSource;

@end

@implementation ViewController



- (void)viewDidLoad {
    [super viewDidLoad];
    [self createDate];
    [self createUI];
    
}

-(void)createUI{
    
    UITableView * tableView = [[UITableView alloc]initWithFrame:self.view.bounds style:UITableViewStylePlain];
    _tableView = tableView ;
    _tableView.delegate = self;
    _tableView.dataSource = self;
    
    [self.view addSubview:tableView];
    
    [_tableView  registerClass:[UITableViewCell class] forCellReuseIdentifier:@"cellID"];

    
}

-(void)createDate{
    
        _dataSource = [NSMutableArray array];
    
    NSDictionary *dic1 = @{@"name":@"点击发光的按钮",@"Controller":@"ShineButtonViewController"};
    
    [_dataSource addObject:dic1];
    
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    
    return  self.dataSource.count;
}


-(UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath{

    
    UITableViewCell *cell =  [tableView dequeueReusableCellWithIdentifier:@"cellID" forIndexPath:indexPath];
    
    cell.textLabel.text = self.dataSource[indexPath.row][@"name"];
    
    return cell;
}


-  (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    NSString *controllerName = self.dataSource[indexPath.row][@"Controller"];
    UIViewController *vc = [[NSClassFromString(controllerName) alloc]init];
    [self.navigationController pushViewController:vc animated:YES];
    
    
}
    

@end
