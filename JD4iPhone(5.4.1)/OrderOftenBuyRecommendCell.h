//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrderOftenBuyBaseCell.h"

#import "OrderOftenBuyVCTableViewDelegate.h"

@class NSString, OrderOftenBuyRecommendItemView;

@interface OrderOftenBuyRecommendCell : OrderOftenBuyBaseCell <OrderOftenBuyVCTableViewDelegate>
{
    OrderOftenBuyRecommendItemView *_leftView;
    OrderOftenBuyRecommendItemView *_rightView;
}

@property(retain, nonatomic) OrderOftenBuyRecommendItemView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) OrderOftenBuyRecommendItemView *leftView; // @synthesize leftView=_leftView;
- (void).cxx_destruct;
- (void)setCellDelegate:(id)arg1;
- (id)cellDelegate;
- (void)fillData:(id)arg1;
- (void)setupUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

