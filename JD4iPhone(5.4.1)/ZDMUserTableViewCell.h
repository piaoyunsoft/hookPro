//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class JDImageView, UIButton, UILabel, UIView, ZDMUserViewModel;

@interface ZDMUserTableViewCell : UITableViewCell
{
    id <ZDMUserTableViewCellDelegate> _delegate;
    JDImageView *_userAvatarImageView;
    UILabel *_userNameLabel;
    UIView *_vipMarkView;
    UILabel *_userIntroductionLabel;
    UIButton *_followButton;
    ZDMUserViewModel *_userViewModel;
}

@property(retain, nonatomic) ZDMUserViewModel *userViewModel; // @synthesize userViewModel=_userViewModel;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *userIntroductionLabel; // @synthesize userIntroductionLabel=_userIntroductionLabel;
@property(retain, nonatomic) UIView *vipMarkView; // @synthesize vipMarkView=_vipMarkView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) JDImageView *userAvatarImageView; // @synthesize userAvatarImageView=_userAvatarImageView;
@property(nonatomic) __weak id <ZDMUserTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)followButtonClicked:(id)arg1;
- (void)awakeFromNib;

@end
