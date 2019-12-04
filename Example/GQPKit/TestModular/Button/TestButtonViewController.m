//
//  TestButtonViewController.m
//  SKYKit
//
//  Created by sky on 2019/10/25.
//  Copyright © 2019 SKY. All rights reserved.
//

#import "TestButtonViewController.h"
#import "SKYKit.h"

@interface TestButtonViewController ()
/// 测试的button
@property(nonatomic, strong) UIButton *button;
@end

@implementation TestButtonViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
    [self.view addSubview:self.button];
    self.button.frame = CGRectMake(100, 100, 200, 200);
//    self.button.backgroundColor = [UIColor redColor];
}

//SKYLazyButton(button)

/*
SKYLazyButtonWithOperation(button, {
//    [_button setImage:[UIImage imageNamed:@"wxTimeline"] forState:UIControlStateNormal];

//    SKYButtonSetImage(_button, [UIImage imageNamed:@"wxTimeline"]);
    SKYButtonSetHighlightedImage(_button, [UIImage imageNamed:@"wxTimeline"])
//    SKYButtonSetImageWithState(_button, [UIImage imageNamed:@"wxTimeline"], UIControlStateNormal);

//    SKYButtonSizeToFit(_button);
    
    SKYViewSetFrame(_button, CGRectMake(0, 0, 500, 50))
    SKYViewSetCenter(_button, CGPointMake(100, 100))
    SKYViewSetBackgroundColor(_button, [UIColor redColor])
    
//    SKYButtonSetTitleWithState(_button, @"sdfsdfs", UIControlStateNormal)
    SKYButtonSetTitle(_button, @"sdlfsd")
//    SKYButtonSetHighlightedTitle(_button, @"sfdfwdf")
    
//    SKYButtonSetTextColorWithState(_button, [UIColor blueColor], UIControlStateNormal)
//    SKYButtonSetTextColor(_button, [UIColor blueColor])
//    SKYButtonSetHighlightedTextColor(_button, [UIColor orangeColor])
    
    SKYButtonSetTextFont(_button, [UIFont systemFontOfSize:40])
    
    SKYButtonAddTarget(_button, buttonAction:)
    
})
 */

- (void)buttonAction {
    NSLog(@"点击了无参数action");
}

- (void)buttonAction:(UIButton *)button {
    NSLog(@"点击了有参数action");
}


//SKYLazyButtonWithTitle(button, @"sdfsdfsdf", [UIColor blueColor], [UIFont systemFontOfSize:40])

//SKYLazyButtonWithTitleAndSelector(button, @"sdfsdfsd\nsdfsf", [UIColor blueColor], [UIFont systemFontOfSize:40], buttonAction)

//SKYLazyButtonWithTitleAndOperation(button, @"sdfsdfsdf", [UIColor blueColor], [UIFont systemFontOfSize:40], {
//    SKYViewSetCenter(_button, CGPointMake(100, 100));
//})

//SKYLazyButtonWithTitleAndSelectorAndOperation(button, @"sdfsdfsdf", [UIColor blueColor], [UIFont systemFontOfSize:40], buttonAction, {
//    SKYViewSetCenter(_button, CGPointMake(100, 100));
//})


//SKYLazyButtonWithImageAndTitle(button, [UIImage imageNamed:@"wxTimeline"], @"sdfsdfsdf", [UIColor blueColor], [UIFont systemFontOfSize:40])

//SKYLazyButtonWithImageAndTitleAndOperation(button, [UIImage imageNamed:@"wxTimeline"], @"sdfsdfsdf", [UIColor blueColor], [UIFont systemFontOfSize:40], {
//    SKYViewSetCenter(_button, CGPointMake(100, 100))
//})


//SKYLazyButtonWithFrame(button, CGRectMake(100, 100, 200, 200))

//SKYLazyButtonWithFrameAndOperation(button, CGRectMake(100, 100, 200, 200), {
//    [_button setImage:[UIImage imageNamed:@"wxTimeline"] forState:UIControlStateNormal];
//})


//SKYLazyButtonWithImage(button, [UIImage imageNamed:@"wxTimeline"])

//SKYLazyButtonWithImageAndOperation(button, [UIImage imageNamed:@"wxTimeline"], {
//    self.button.alpha = 0.5;
//})


//SKYLazyButtonWithFrameAndImage(button, CGRectMake(100, 100, 200, 200), [UIImage imageNamed:@"wxTimeline"])

//SKYLazyButtonWithFrameAndImageAndOperation(button
//                                           , CGRectMake(100, 100, 200, 200)
//                                           , [UIImage imageNamed:@"wxTimeline"],
//{
//    self.button.alpha = 0.5;
//})

@end
