//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class JDImageView, TTTWareModel, TTTWaresContrastPriceView, TTTWaresMarkView, UILabel;

@interface TTTWaresSlideViewCell : UICollectionViewCell
{
    TTTWareModel *_wareModel;
    JDImageView *_imageView;
    UILabel *_nameLabel;
    TTTWaresContrastPriceView *_priceLabel;
    UILabel *_sellStatusLabel;
    TTTWaresMarkView *_markView;
}

@property(retain, nonatomic) TTTWaresMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UILabel *sellStatusLabel; // @synthesize sellStatusLabel=_sellStatusLabel;
@property(retain, nonatomic) TTTWaresContrastPriceView *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TTTWareModel *wareModel; // @synthesize wareModel=_wareModel;
- (void).cxx_destruct;
- (void)wareSellOut:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
