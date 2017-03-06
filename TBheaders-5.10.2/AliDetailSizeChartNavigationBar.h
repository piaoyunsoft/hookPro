//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface AliDetailSizeChartNavigationBar : UIView
{
    int _state;	// 8 = 0x8
    NSString *_closeIconFont;	// 16 = 0x10
    CDUnknownBlockType _goBackBlock;	// 24 = 0x18
    CDUnknownBlockType _cancelEditingBlock;	// 32 = 0x20
    CDUnknownBlockType _startEditingBlock;	// 40 = 0x28
    CDUnknownBlockType _saveSizeBlock;	// 48 = 0x30
    UIButton *_leftButton;	// 56 = 0x38
    UIButton *_rightButton;	// 64 = 0x40
    UILabel *_centerLabel;	// 72 = 0x48
}

@property(retain, nonatomic) UILabel *centerLabel; // @synthesize centerLabel=_centerLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType saveSizeBlock; // @synthesize saveSizeBlock=_saveSizeBlock;
@property(copy, nonatomic) CDUnknownBlockType startEditingBlock; // @synthesize startEditingBlock=_startEditingBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelEditingBlock; // @synthesize cancelEditingBlock=_cancelEditingBlock;
@property(copy, nonatomic) CDUnknownBlockType goBackBlock; // @synthesize goBackBlock=_goBackBlock;
- (void).cxx_destruct;
- (void)saveSizeEvent;
- (void)goBackEvent;
- (void)cancelEditingEvent;
- (void)startEditingEvent;
@property(retain, nonatomic) NSString *closeIconFont; // @synthesize closeIconFont=_closeIconFont;
- (void)setRightButtonInNormalState;
- (void)setRightButtonInEditingOrUpdatingState;
- (void)setLeftButtonInNormalState;
- (void)setLeftButtonInEditingOrUpdatingState;
- (void)setWhenStateIsNotReady;
- (void)setWhenStateIsUpdating;
- (void)setWhenStateIsEditChanged;
- (void)setWhenStateIsEditing;
- (void)setWhenStateIsNormal;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
