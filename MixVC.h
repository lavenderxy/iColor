//
//  MixVC.h
//  iColor
//
//  Created by Xinyu Yan on 15/11/13.
//  Copyright (c) 2015年 iColor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ColorItem.h"
#import "ColorCell.h"
#import "GlobalVars.h"

@interface MixVC : UIViewController<UITableViewDelegate,UITableViewDataSource>{
    NSUInteger numLine;
    ColorItem *colorTop;
    ColorItem *colorBot;
    ColorItem *colorChange;
    UIView *tempView;
    UIButton *cancelButton;
    UIButton *okButton;
}
@property (strong, nonatomic) IBOutlet UIBarButtonItem *sidebarButton;
@property (nonatomic, strong) NSMutableArray *color;
@property (nonatomic, strong) UITableView *tableView;

@end
