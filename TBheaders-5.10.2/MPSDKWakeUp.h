//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface MPSDKWakeUp : NSObject
{
    _Bool _isRegisterConfigCenter;	// 8 = 0x8
    int _mClentCheckFlag;	// 12 = 0xc
    NSString *_mWakeUpUrl;	// 16 = 0x10
    NSString *_mWakeUpParm;	// 24 = 0x18
    NSString *_mGoTaobaoAppUrl;	// 32 = 0x20
    NSString *_mCallBackScheme;	// 40 = 0x28
    NSString *_mCallBackAppName;	// 48 = 0x30
    NSString *_mCheckMd5Str;	// 56 = 0x38
    NSString *_mAppName;	// 64 = 0x40
    NSString *_mRefpid;	// 72 = 0x48
    NSString *_mServerRefpid;	// 80 = 0x50
    NSString *_mAntiStr;	// 88 = 0x58
    double _mServiceTime;	// 96 = 0x60
    NSString *_mClickId;	// 104 = 0x68
    double _mExpiredTime;	// 112 = 0x70
    double _mWakeUpTime;	// 120 = 0x78
    NSString *_mPvId;	// 128 = 0x80
    NSString *_mAParm;	// 136 = 0x88
    NSString *_mEParm;	// 144 = 0x90
    NSString *_mPageId;	// 152 = 0x98
    NSString *_mUtdid;	// 160 = 0xa0
    NSString *_mAlitrackId;	// 168 = 0xa8
    NSDictionary *_mConfigUrl;	// 176 = 0xb0
    NSString *_mConfigSHA1;	// 184 = 0xb8
}

+ (id)shared;
@property(nonatomic) _Bool isRegisterConfigCenter; // @synthesize isRegisterConfigCenter=_isRegisterConfigCenter;
@property(retain, nonatomic) NSString *mConfigSHA1; // @synthesize mConfigSHA1=_mConfigSHA1;
@property(retain, nonatomic) NSDictionary *mConfigUrl; // @synthesize mConfigUrl=_mConfigUrl;
@property(retain, nonatomic) NSString *mAlitrackId; // @synthesize mAlitrackId=_mAlitrackId;
@property(nonatomic) int mClentCheckFlag; // @synthesize mClentCheckFlag=_mClentCheckFlag;
@property(retain, nonatomic) NSString *mUtdid; // @synthesize mUtdid=_mUtdid;
@property(retain, nonatomic) NSString *mPageId; // @synthesize mPageId=_mPageId;
@property(retain, nonatomic) NSString *mEParm; // @synthesize mEParm=_mEParm;
@property(retain, nonatomic) NSString *mAParm; // @synthesize mAParm=_mAParm;
@property(retain, nonatomic) NSString *mPvId; // @synthesize mPvId=_mPvId;
@property(nonatomic) double mWakeUpTime; // @synthesize mWakeUpTime=_mWakeUpTime;
@property(nonatomic) double mExpiredTime; // @synthesize mExpiredTime=_mExpiredTime;
@property(retain, nonatomic) NSString *mClickId; // @synthesize mClickId=_mClickId;
@property(nonatomic) double mServiceTime; // @synthesize mServiceTime=_mServiceTime;
@property(retain, nonatomic) NSString *mAntiStr; // @synthesize mAntiStr=_mAntiStr;
@property(retain, nonatomic) NSString *mServerRefpid; // @synthesize mServerRefpid=_mServerRefpid;
@property(retain, nonatomic) NSString *mRefpid; // @synthesize mRefpid=_mRefpid;
@property(retain, nonatomic) NSString *mAppName; // @synthesize mAppName=_mAppName;
@property(retain, nonatomic) NSString *mCheckMd5Str; // @synthesize mCheckMd5Str=_mCheckMd5Str;
@property(retain, nonatomic) NSString *mCallBackAppName; // @synthesize mCallBackAppName=_mCallBackAppName;
@property(retain, nonatomic) NSString *mCallBackScheme; // @synthesize mCallBackScheme=_mCallBackScheme;
@property(retain, nonatomic) NSString *mGoTaobaoAppUrl; // @synthesize mGoTaobaoAppUrl=_mGoTaobaoAppUrl;
@property(retain, nonatomic) NSString *mWakeUpParm; // @synthesize mWakeUpParm=_mWakeUpParm;
@property(retain, nonatomic) NSString *mWakeUpUrl; // @synthesize mWakeUpUrl=_mWakeUpUrl;
- (void).cxx_destruct;
- (void)setServiceData:(id)arg1 time:(double)arg2 antiStr:(id)arg3;
- (id)getRefpid;
- (void)antiCheating;
- (void)parseEurl:(id)arg1;
- (void)wakeUpLogs;
- (id)checkWakeUpByUrl:(id)arg1 appName:(id)arg2;
- (double)getMtopTime;
- (void)setConfig:(id)arg1;
- (void)antiCheatingData:(id)arg1;
- (void)clearData;
- (void)initDefaultConfigData:(id)arg1;
- (void)initData;
- (int)parseUrlConfig:(id)arg1;
- (id)checkConfigFile;
- (void)updateConfig:(id)arg1;
- (id)readFromPlistFile:(id)arg1;
- (_Bool)writeToPlistFile:(id)arg1 dict:(id)arg2;
- (void)registerConfigCenter:(id)arg1;
- (void)dealloc;
- (id)initWakeUp;

@end

