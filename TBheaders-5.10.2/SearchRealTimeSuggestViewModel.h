//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString, NSTimer;
@protocol SuggestViewModelDelegate;

@interface SearchRealTimeSuggestViewModel : NSObject
{
    NSMutableArray *__suggestRequestStack;	// 8 = 0x8
    NSTimer *__suggestSendTimer;	// 16 = 0x10
    id <SuggestViewModelDelegate> _delegate;	// 24 = 0x18
    NSString *_searchType;	// 32 = 0x20
    NSMutableArray *_suggestQueryData;	// 40 = 0x28
    NSString *_query;	// 48 = 0x30
    unsigned long long _status;	// 56 = 0x38
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSMutableArray *suggestQueryData; // @synthesize suggestQueryData=_suggestQueryData;
@property(copy, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
@property(nonatomic) __weak id <SuggestViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)requestphaseEnd;
- (void)requestphaseStar;
- (void)suggestResponseFailed:(id)arg1;
- (void)suggestResponseSuccess:(id)arg1;
- (id)formatSuggestListData;
- (void)formatTextTypeSuggestQueryData:(id)arg1;
- (void)invalidateSuggestRequest;
- (void)sendSuggestRequest;
- (void)realtimeSuggestGet:(id)arg1 withSuggestStatus:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

