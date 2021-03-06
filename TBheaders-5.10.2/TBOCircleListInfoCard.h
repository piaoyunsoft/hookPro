//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOBaseCard.h"

#import "ITBOCellHeight-Protocol.h"

@class NSMutableArray, NSString;
@protocol TBOCommunity;

@interface TBOCircleListInfoCard : TBOBaseCard <ITBOCellHeight>
{
    NSMutableArray<TBOCommunity> *_circles;	// 32 = 0x20
}

@property(retain, nonatomic) NSMutableArray<TBOCommunity> *circles; // @synthesize circles=_circles;
- (void).cxx_destruct;
- (double)cellHeightForModel:(id)arg1 owner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

