//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MDAnimatedImageView, NSString, UIImageView, UILabel;

@interface MDNearbySiteBanner : UIView
{
    _Bool _isAnimating;
    _Bool _isLocalViewAnimating;
    id <MDNearbySiteBannerDelegate> _siteBanerDelegate;
    UIImageView *_leftImageView;
    UIImageView *_locationView;
    UIImageView *_shadowView;
    UIImageView *_arrowView;
    UILabel *_titleLabel;
    UILabel *_detaileLabel;
    NSString *_gotoStr;
    MDAnimatedImageView *_animatedImageView;
}

@property(retain, nonatomic) MDAnimatedImageView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(nonatomic) _Bool isLocalViewAnimating; // @synthesize isLocalViewAnimating=_isLocalViewAnimating;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) NSString *gotoStr; // @synthesize gotoStr=_gotoStr;
@property(retain, nonatomic) UILabel *detaileLabel; // @synthesize detaileLabel=_detaileLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIImageView *locationView; // @synthesize locationView=_locationView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(nonatomic) __weak id <MDNearbySiteBannerDelegate> siteBanerDelegate; // @synthesize siteBanerDelegate=_siteBanerDelegate;
- (void).cxx_destruct;
- (void)configView;
- (void)configData;
- (void)clickSiteBanner;
- (void)addEvents;
- (void)startHiddenAnimation;
- (void)startShadowViewAnimation;
- (void)locationViewSecondSpring;
- (void)startLocationViewAnimation;
- (void)endLineImageAnimation;
- (void)startLineImageAnimation;
- (void)endAnimation;
- (void)startAnimation;
- (id)convertSiteGuideStringWithFormatString:(id)arg1 replaceStringList:(id)arg2;
- (void)updateContentWithTitle:(id)arg1 description:(id)arg2 gotoStr:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
