//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WCPayPaidDetailAwardResult : NSObject
{
    unsigned int _retCode;
    NSString *_activityIconUrl;
    NSString *_activityMainTitle;
    NSString *_activitySubTitle;
    NSString *_activityBtnTitle;
    NSString *_activityUrl;
}

@property(retain, nonatomic) NSString *activityUrl; // @synthesize activityUrl=_activityUrl;
@property(retain, nonatomic) NSString *activityBtnTitle; // @synthesize activityBtnTitle=_activityBtnTitle;
@property(retain, nonatomic) NSString *activitySubTitle; // @synthesize activitySubTitle=_activitySubTitle;
@property(retain, nonatomic) NSString *activityMainTitle; // @synthesize activityMainTitle=_activityMainTitle;
@property(retain, nonatomic) NSString *activityIconUrl; // @synthesize activityIconUrl=_activityIconUrl;
@property(nonatomic) unsigned int retCode; // @synthesize retCode=_retCode;
- (void).cxx_destruct;
- (id)init;

@end

