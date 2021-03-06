//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "JDiCarouselDataSource.h"
#import "JDiCarouselDelegate.h"
#import "TTTBaseViewProtocol.h"

@class JDiCarousel, NSString, TTTFloorModel, UILabel;

@interface TTTShopHorizontalView : TTTBaseView <JDiCarouselDataSource, JDiCarouselDelegate, TTTBaseViewProtocol>
{
    JDiCarousel *_slideView;
    UILabel *_pageLabel;
    TTTFloorModel *_floorModel;
    long long _itemsType;
}

@property(nonatomic) long long itemsType; // @synthesize itemsType=_itemsType;
@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) JDiCarousel *slideView; // @synthesize slideView=_slideView;
- (void).cxx_destruct;
- (struct CGRect)pageLabelFrame;
- (id)fetchShopModel:(long long)arg1;
- (long long)fetchFactIndex:(long long)arg1;
- (struct CATransform3D)JDiCarousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (void)JDiCarouselCurrentItemIndexDidChange:(id)arg1;
- (void)JDiCarousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (void)updateBackcolor;
- (void)updatePageLabel;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

