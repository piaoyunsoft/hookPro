//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel, UIView;

@interface RecommendDateCell : UITableViewCell
{
    UIView *upTimeView;
    UIView *middleTimeView;
    UIView *downTimeView;
    UILabel *upDateLabel;
    UILabel *middleDateLabel;
    UILabel *downDateLabel;
}

@property(retain, nonatomic) UILabel *downDateLabel; // @synthesize downDateLabel;
@property(retain, nonatomic) UILabel *middleDateLabel; // @synthesize middleDateLabel;
@property(retain, nonatomic) UILabel *upDateLabel; // @synthesize upDateLabel;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setWithModel:(int)arg1;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
