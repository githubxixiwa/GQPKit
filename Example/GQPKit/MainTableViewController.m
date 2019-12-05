//
//  MailTableViewController.m
//  SKYKit
//
//  Created by sky on 2019/12/4.
//  Copyright © 2019 SKY. All rights reserved.
//

#import "MainTableViewController.h"
#import <GQPKit.h>

#import "TestViewViewController.h"
#import "TestLabelViewController.h"
#import "TestImageViewViewController.h"
#import "TestButtonViewController.h"

@interface MainTableViewController ()

@end
NSString static *notiKey = @"log";
@implementation MainTableViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"GQPKit";
    self.tableView.rowHeight = 30;
    [self.tableView registerClass:[UITableViewCell class] forCellReuseIdentifier:@"cellID"];
    self.tableView.tableFooterView = [UIView new];
    GQKNotifyAdd(notiKey, @selector(log));
}

- (void)viewWillAppear:(BOOL)animated {
    [super viewWillAppear:animated];
    GQKNotifyPost(notiKey, nil);
}

#pragma mark - private
- (void)log {
    NSLog(@"------- viewWillAppearLog --------");
}

#pragma mark - Table view data source
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return 4;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"cellID" forIndexPath:indexPath];
    switch (indexPath.row) {
        case 0:
            cell.textLabel.text = @"Button";
            break;
        case 1:
            cell.textLabel.text = @"ImageView";
            break;
        case 2:
            cell.textLabel.text = @"View";
            break;
        case 3:
            cell.textLabel.text = @"Label";
            break;
            
        default:
            break;
    }
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    UIViewController *vc = nil;
    switch (indexPath.row) {
        case 0:
            vc = [[TestButtonViewController alloc] init];
            break;
        case 1:
            vc = [[TestImageViewViewController alloc] init];
            break;
        case 2:
            vc = [[TestViewViewController alloc] init];
            break;
        case 3:
            vc = [[TestLabelViewController alloc] init];
            break;
            
        default:
            break;
    }
    if (vc) {
        [self.navigationController pushViewController:vc animated:YES];
    }
}

@end
