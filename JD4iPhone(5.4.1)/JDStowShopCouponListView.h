//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class JDStowShopMoreView, NSMutableArray, NSString, UIScrollView;

@interface JDStowShopCouponListView : UIView <UIScrollViewDelegate>
{
    UIScrollView *m_ScrollView;
    JDStowShopMoreView *m_moreView;
    NSMutableArray *discountArray;
    _Bool isMoving;
    CDUnknownBlockType moreBlock;
    CDUnknownBlockType operationBlock;
}

@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock;
@property(copy, nonatomic) CDUnknownBlockType moreBlock; // @synthesize moreBlock;
- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)ticketTap:(id)arg1;
- (void)moreTap:(id)arg1;
- (void)setCouponsArray:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
