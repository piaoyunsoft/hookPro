//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface GroupRegPositionCell : UITableViewCell
{
    UILabel *title;
    UILabel *discription;
    UIImageView *arrow;
}

@property(readonly, nonatomic) UIImageView *arrow; // @synthesize arrow;
@property(readonly, nonatomic) UILabel *discription; // @synthesize discription;
@property(readonly, nonatomic) UILabel *title; // @synthesize title;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
