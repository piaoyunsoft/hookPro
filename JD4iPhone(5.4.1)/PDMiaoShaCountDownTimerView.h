//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PDViewProtocol.h"

@class NSString, NSTimer, NewProductModel, UILabel;

@interface PDMiaoShaCountDownTimerView : UIView <PDViewProtocol>
{
    NSTimer *_timer;
    long long _referenceInterval;
    UIView *_countDownView;
    UILabel *_countDownTitleLabel;
    UILabel *_hourLabel;
    UILabel *_colonLabel1;
    UILabel *_minuteLabel;
    UILabel *_colonLabel2;
    UILabel *_secondLabel;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *colonLabel2; // @synthesize colonLabel2=_colonLabel2;
@property(retain, nonatomic) UILabel *minuteLabel; // @synthesize minuteLabel=_minuteLabel;
@property(retain, nonatomic) UILabel *colonLabel1; // @synthesize colonLabel1=_colonLabel1;
@property(retain, nonatomic) UILabel *hourLabel; // @synthesize hourLabel=_hourLabel;
@property(retain, nonatomic) UILabel *countDownTitleLabel; // @synthesize countDownTitleLabel=_countDownTitleLabel;
@property(retain, nonatomic) UIView *countDownView; // @synthesize countDownView=_countDownView;
@property(nonatomic) long long referenceInterval; // @synthesize referenceInterval=_referenceInterval;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void).cxx_destruct;
- (double)getTimerLabelHeight;
- (void)tick:(id)arg1;
- (void)stopTimer;
- (void)restartTimer;
- (void)updateWithTime:(double)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

