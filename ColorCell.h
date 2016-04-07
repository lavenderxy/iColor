//
//  ColorCell.h
//  iColor
//
//  Created by weiqi on 11/28/15.
//  Copyright (c) 2015 iColor. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ColorItem.h"
#import "GlobalVars.h"

@protocol updateColorDelegate <NSObject>;

@optional
-(void)updateColor: (NSInteger) indexRow newColor: (ColorItem*) newColor;

@end

@interface ColorCell : UITableViewCell

@property(nonatomic,strong) id<updateColorDelegate> delegate;

@property ColorItem* mycolor;
@property NSInteger rValue;
@property NSInteger gValue;
@property NSInteger bValue;

@property UIButton *saveButton;
@property UIButton *okButton;

@property UISlider *redSlider;
@property UISlider *greenSlider;
@property UISlider *blueSlider;

@property UILabel *rLabel;
@property UILabel *gLabel;
@property UILabel *bLabel;

@property UILabel *rIndicator;
@property UILabel *gIndicator;
@property UILabel *bIndicator;

@property UIFont *myFont;


-(id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier color:(ColorItem *)color WithW:(CGFloat)width andH:(CGFloat)height;

-(void) createButtonSliderWithW:(CGFloat)width andH:(CGFloat)height;
-(void)clickSaveButton;
-(void)clickOkButton;
-(void)collapseCell;
-(void)expandCell;
@end
