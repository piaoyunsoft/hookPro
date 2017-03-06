//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "IOnlineClientMgrExt.h"
#import "MFBanner.h"

@class NSString, UIImageView, UILabel;

@interface MFWebMMBtn : UIButton <IOnlineClientMgrExt, MFBanner>
{
    UIImageView *_iconImgView;
    UIImageView *_muteView;
    UILabel *_title;
}

- (void).cxx_destruct;
- (void)onOnlineInfoUpdated;
- (void)updateMuteIcon;
- (void)updateDeviceIcon;
- (void)updateWithOnlineStatus;
- (id)getDeviceImg;
- (id)GetOnlineSummaryWordingForKey:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
