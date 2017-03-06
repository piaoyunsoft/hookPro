//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIImage;

@interface RateView : UIView
{
    UIImage *_notSelectedImage;
    UIImage *_halfSelectedImage;
    UIImage *_fullSelectedImage;
    NSMutableArray *_imageViews;
    struct CGSize _minImageSize;
    float _rating;
    _Bool _editable;
    int _maxRating;
    int _midMargin;
    int _leftMargin;
    int _minRating;
    id <RateViewDelegate> _delegate;
}

@property(nonatomic) int midMargin; // @synthesize midMargin=_midMargin;
@property(nonatomic) int minRating; // @synthesize minRating=_minRating;
@property(nonatomic) int leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) __weak id <RateViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int maxRating; // @synthesize maxRating=_maxRating;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(retain, nonatomic) UIImage *fullSelectedImage; // @synthesize fullSelectedImage=_fullSelectedImage;
@property(retain, nonatomic) UIImage *halfSelectedImage; // @synthesize halfSelectedImage=_halfSelectedImage;
@property(retain, nonatomic) UIImage *notSelectedImage; // @synthesize notSelectedImage=_notSelectedImage;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)handleTouchAtLocation:(struct CGPoint)arg1;
- (void)layoutSubviews;
- (void)refresh;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)baseInit;

@end
