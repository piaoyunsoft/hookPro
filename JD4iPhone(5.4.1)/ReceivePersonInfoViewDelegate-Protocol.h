//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIButton, UITextField, UITextView;

@protocol ReceivePersonInfoViewDelegate <NSObject>
- (void)receivePersonInfoViewBtnTaped:(UIButton *)arg1;
- (void)receivePersonInfoTextViewBeginEdit:(UITextView *)arg1;
- (void)receivePersonInfoTextFieldBeginEdit:(UITextField *)arg1;
- (void)receivePersonInfoUpDateTextViewHeight:(UITextView *)arg1;
@end
