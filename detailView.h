//
//  detailView.h
//  CollectionViewTest
//
//  Created by YuhanHao on 15/11/28.
//  Copyright (c) 2015年 iColor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

#import "ColorItem.h"

@interface detailView : UIView

@property UIButton *backButton;
@property UILabel *redLabel;
@property UILabel *greenLabel;
@property UILabel *blueLabel;
@property UILabel *redValue;
@property UILabel *greenValue;
@property UILabel *blueValue;
@property UILabel *alphaLabel;
@property UILabel *alphaValue;




- (void) setContent:(ColorItem *)thisColor;

@end
