//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MocRequestModelDelegate-Protocol.h"

@class MocRequestModel, NSString, TBJSONModel;
@protocol MocBasicServiceDelegate;

@interface MocBasicService : NSObject <MocRequestModelDelegate>
{
    id <MocBasicServiceDelegate> _delegate;	// 8 = 0x8
    Class _itemClass;	// 16 = 0x10
    NSString *_apiName;	// 24 = 0x18
    NSString *_version;	// 32 = 0x20
    TBJSONModel *_item;	// 40 = 0x28
    MocRequestModel *_requestModel;	// 48 = 0x30
}

@property(retain, nonatomic) MocRequestModel *requestModel; // @synthesize requestModel=_requestModel;
@property(readonly, nonatomic) TBJSONModel *item; // @synthesize item=_item;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) Class itemClass; // @synthesize itemClass=_itemClass;
@property(nonatomic) id <MocBasicServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)modelDidSuccessLoad:(id)arg1;
- (void)modelDidFailLoad:(id)arg1;
- (void)modelDidStartLoad;
- (void)loadItemWithAPIName:(id)arg1 version:(id)arg2 params:(id)arg3;
- (id)initWithItemClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
