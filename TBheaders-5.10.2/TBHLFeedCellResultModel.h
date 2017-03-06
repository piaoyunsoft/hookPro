//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;
@protocol TBHLFeedCellModel;

@interface TBHLFeedCellResultModel : TBJSONModel
{
    _Bool _rollback;	// 8 = 0x8
    NSString *_timeStamp;	// 16 = 0x10
    NSArray<TBHLFeedCellModel> *_feedList;	// 24 = 0x18
    NSArray<TBHLFeedCellModel> *_result;	// 32 = 0x20
    NSString *_dataTip;	// 40 = 0x28
    NSString *_refreshBgColor;	// 48 = 0x30
    long long _showMoreSecond;	// 56 = 0x38
}

+ (id)modelKeyMapper;
@property(nonatomic) _Bool rollback; // @synthesize rollback=_rollback;
@property(nonatomic) long long showMoreSecond; // @synthesize showMoreSecond=_showMoreSecond;
@property(copy, nonatomic) NSString *refreshBgColor; // @synthesize refreshBgColor=_refreshBgColor;
@property(copy, nonatomic) NSString *dataTip; // @synthesize dataTip=_dataTip;
@property(retain, nonatomic) NSArray<TBHLFeedCellModel> *result; // @synthesize result=_result;
@property(retain, nonatomic) NSArray<TBHLFeedCellModel> *feedList; // @synthesize feedList=_feedList;
@property(copy, nonatomic) NSString *timeStamp; // @synthesize timeStamp=_timeStamp;
- (void).cxx_destruct;

@end
