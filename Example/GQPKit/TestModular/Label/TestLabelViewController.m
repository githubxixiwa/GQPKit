//
//  TestLabelViewController.m
//  SKYKit
//
//  Created by sky on 2019/10/25.
//  Copyright © 2019 SKY. All rights reserved.
//

#import "TestLabelViewController.h"
#import "SKYKit.h"

@interface TestLabelViewController ()
/// 测试用的Label
@property(nonatomic, strong) UILabel *label;
@end

@implementation TestLabelViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self.label];
    self.label.backgroundColor = [UIColor redColor];
//    self.label.frame = CGRectMake(100, 100, 200, 200);
    
}

#pragma mark - 懒加载
//SKYLazyLabel(label)

//SKYLazyLabelWithOperation(label, {
//    self.label.backgroundColor = [UIColor redColor];
//    self.label.frame = CGRectMake(100, 100, 200, 200);
//})

//SKYLazyLabelWithText(label, @"hahaha")

//SKYLazyLabelWithTextAndOperation(label, @"hahaha",{
//    _label.center = CGPointMake(100, 100);
//})

//SKYLazyLabelWithFrame(label, CGRectMake(100, 100, 200, 200))

//SKYLazyLabelWithFrameAndOperation(label, CGRectMake(100, 100, 200, 200),{
//    _label.text = @"测试的时";
//})

//SKYLazyLabelWithTextAndInfo(label, @"sdfsldf", [UIFont systemFontOfSize:18], [UIColor blueColor])

//SKYLazyLabelWithTextAndInfoAndOperation(label, @"sdfsldf", [UIFont systemFontOfSize:18], [UIColor blueColor], {
//    _label.center = CGPointMake(100, 100);
//})

@end
