//
//  TestViewViewController.m
//  SKYKit
//
//  Created by sky on 2019/10/25.
//  Copyright © 2019 SKY. All rights reserved.
//

#import "TestViewViewController.h"
#import <GQPKit.h>

@interface TestViewViewController ()
/// 测试用的view
@property(nonatomic, strong) UIView *testView;
@end

@implementation TestViewViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self.testView];
}

#pragma mark - 懒加载
//GQPLazyView(testView)

GQPLazyViewWithOperation(testView, {
    _testView.frame = CGRectMake(100, 100, 200, 200);
    _testView.backgroundColor = [UIColor redColor];
})

//SKYLazyViewWithFrame(testView, CGRectZero)

//SKYLazyViewWithFrameAndColor(testView, CGRectZero, [UIColor redColor])

//SKYLazyViewWithFrameAndColorAndOperation(testView, CGRectMake(100, 100, 200, 200), [UIColor redColor],{
//    _testView.hidden = NO;
//})
@end
