//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBCouponProtocol-Protocol.h"
#import "TBJSONFormatProtocol-Protocol.h"

@class NSArray, NSString, TBCouponCalendarAlarmModel;

@interface TBCouponDetailItemModel : NSObject <TBJSONFormatProtocol, TBCouponProtocol>
{
    _Bool _canDelete;	// 8 = 0x8
    NSString *_couponId;	// 16 = 0x10
    NSString *_supplierId;	// 24 = 0x18
    long long _couponType;	// 32 = 0x20
    NSString *_gmtCreated;	// 40 = 0x28
    long long _status;	// 48 = 0x30
    double _endTime;	// 56 = 0x38
    long long _outInstanceType;	// 64 = 0x40
    NSString *_recPos;	// 72 = 0x48
    TBCouponCalendarAlarmModel *_calendarAlarm;	// 80 = 0x50
    NSArray *_moduleList;	// 88 = 0x58
    NSArray *_actionList;	// 96 = 0x60
}

@property(retain, nonatomic) NSArray *actionList; // @synthesize actionList=_actionList;
@property(retain, nonatomic) NSArray *moduleList; // @synthesize moduleList=_moduleList;
@property(retain, nonatomic) TBCouponCalendarAlarmModel *calendarAlarm; // @synthesize calendarAlarm=_calendarAlarm;
@property(nonatomic) _Bool canDelete; // @synthesize canDelete=_canDelete;
@property(copy, nonatomic) NSString *recPos; // @synthesize recPos=_recPos;
@property(nonatomic) long long outInstanceType; // @synthesize outInstanceType=_outInstanceType;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *gmtCreated; // @synthesize gmtCreated=_gmtCreated;
@property(nonatomic) long long couponType; // @synthesize couponType=_couponType;
@property(copy, nonatomic) NSString *supplierId; // @synthesize supplierId=_supplierId;
@property(copy, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
- (void).cxx_destruct;
- (void)fixStatus;
- (id)jsonFormObject;
- (_Bool)parseFromJSON:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

