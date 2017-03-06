//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString;

@interface JDIMOnwerInfo : NSObject
{
    _Bool _isPlaySound;
    _Bool _isVibrate;
    _Bool _isGetUserInfoSucc;
    NSString *_pin;
    NSString *_aid;
    NSString *_aesPin;
    NSString *_trackerPin;
    NSString *_apnsToken;
    NSString *_nickName;
    NSNumber *_sex;
    NSString *_avatar;
    double _baseTick;
    NSDate *_baseTime;
}

+ (id)sharedJDIMOnwerInfo;
@property(retain, nonatomic) NSDate *baseTime; // @synthesize baseTime=_baseTime;
@property(nonatomic) double baseTick; // @synthesize baseTick=_baseTick;
@property(nonatomic) _Bool isGetUserInfoSucc; // @synthesize isGetUserInfoSucc=_isGetUserInfoSucc;
@property(nonatomic) _Bool isVibrate; // @synthesize isVibrate=_isVibrate;
@property(nonatomic) _Bool isPlaySound; // @synthesize isPlaySound=_isPlaySound;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSNumber *sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(copy, nonatomic) NSString *apnsToken; // @synthesize apnsToken=_apnsToken;
@property(copy, nonatomic) NSString *trackerPin; // @synthesize trackerPin=_trackerPin;
@property(copy, nonatomic) NSString *aesPin; // @synthesize aesPin=_aesPin;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (id)getCurrentDate;
- (id)getCurrentTimeString;
- (void)saveAuthedInfo:(id)arg1 withBaseStamp:(id)arg2;
- (void)initOwnerInfo:(id)arg1 withApnsToken:(id)arg2;
- (void)resetInfo;

@end
