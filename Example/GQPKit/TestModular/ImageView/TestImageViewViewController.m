//
//  TestImageViewViewController.m
//  SKYKit
//
//  Created by sky on 2019/10/25.
//  Copyright © 2019 SKY. All rights reserved.
//

#import "TestImageViewViewController.h"
#import <GQPKit.h>

@interface TestImageViewViewController ()
/// 测试imageView
@property(nonatomic, strong) UIImageView *imageView;
@end

@implementation TestImageViewViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self.imageView];
//    self.imageView.frame = CGRectMake(100, 100, 200, 200);
    self.imageView.backgroundColor = [UIColor redColor];
}

//SKYLazyImageView(imageView)

//SKYLazyImageViewWithOperation(imageView, {
//    _imageView.frame = CGRectMake(100, 100, 200, 200);
//})

//SKYLazyImageViewWithImage(imageView, [UIImage imageNamed:@"wxTimeline"])

//SKYLazyImageViewWithImageAndOperation(imageView, [UIImage imageNamed:@"wxTimeline"], {
//    _imageView.frame = CGRectMake(100, 100, 50, 50);
//})

//SKYLazyImageViewWithFrameAndImage(imageView, CGRectMake(100, 100, 100, 50), [UIImage imageNamed:@"wxTimeline"])

SKYLazyImageViewWithFrameAndImageAndOperation(imageView, CGRectMake(100, 100, 100, 50), [UIImage imageNamed:@"wxTimeline"],{
    _imageView.alpha = 0.3;
})
@end
