//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DetailBgContentItem.h"

#import "PDViewProtocol.h"

@class NSArray, NSString, NewProductModel;

@interface PDPromotionView : DetailBgContentItem <PDViewProtocol>
{
    NSArray *_duplicateRemovalArray;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSArray *duplicateRemovalArray; // @synthesize duplicateRemovalArray=_duplicateRemovalArray;
- (void).cxx_destruct;
- (id)duplicateRemoval:(id)arg1;
- (id)serviceIconWithTitle:(id)arg1;
- (void)updatePromotion;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

