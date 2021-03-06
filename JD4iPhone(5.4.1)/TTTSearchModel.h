//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol.h"

@class NSString, TTTJumpModel;

@interface TTTSearchModel : TTTBaseModel <TTTJumpProtocol>
{
    _Bool _globalBuy;
    NSString *_searchContext;
    NSString *_trueContext;
    NSString *_iconUrl;
    NSString *_searchScope;
    NSString *_wareAttrs;
    NSString *_cid;
    TTTJumpModel *_jump;
}

@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *wareAttrs; // @synthesize wareAttrs=_wareAttrs;
@property(copy, nonatomic) NSString *searchScope; // @synthesize searchScope=_searchScope;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) _Bool globalBuy; // @synthesize globalBuy=_globalBuy;
@property(copy, nonatomic) NSString *trueContext; // @synthesize trueContext=_trueContext;
@property(copy, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
- (void).cxx_destruct;
- (id)sencondJumpObject;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

