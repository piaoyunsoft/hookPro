//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

@class UIButton, UIView;

@interface TBOrderContactCell : TBOrderBasicCell
{
    CDUnknownBlockType _click;	// 8 = 0x8
    UIButton *_talkWW;	// 16 = 0x10
    UIButton *_talkPhone;	// 24 = 0x18
    UIView *_line;	// 32 = 0x20
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *talkPhone; // @synthesize talkPhone=_talkPhone;
@property(retain, nonatomic) UIButton *talkWW; // @synthesize talkWW=_talkWW;
@property(copy, nonatomic) CDUnknownBlockType click; // @synthesize click=_click;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)layoutSubviews;
- (void)talkPhoneClick;
- (void)talkWWClick;
- (void)viewLayout;

@end
