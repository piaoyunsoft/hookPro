//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface UIView (JDCategory)
+ (void)strokeLines:(struct CGRect)arg1 stroke:(const double *)arg2;
+ (void)drawRect:(struct CGRect)arg1 fillColor:(id)arg2 radius:(double)arg3;
+ (void)drawRect:(struct CGRect)arg1 fill:(const double *)arg2 radius:(double)arg3;
+ (void)drawLineInRect:(struct CGRect)arg1 colors:(double *)arg2 width:(double)arg3 cap:(int)arg4;
+ (void)drawLineInRect:(struct CGRect)arg1 red:(double)arg2 green:(double)arg3 blue:(double)arg4 alpha:(double)arg5;
+ (void)drawLineInRect:(struct CGRect)arg1 colors:(double *)arg2;
+ (void)drawRoundRectangleInRect:(struct CGRect)arg1 withRadius:(double)arg2;
+ (void)drawLinearGradientInRect:(struct CGRect)arg1 colors:(double *)arg2;
+ (void)drawGradientInRect:(struct CGRect)arg1 withColors:(id)arg2;
- (id)activityAtCenter;
- (id)activityAtCenterWithSize:(struct CGSize)arg1;
- (id)activityWithOrigin:(struct CGPoint)arg1;
- (void)removeAllSubViews;
- (id)viewController;
- (void)dismissAsKeyboardAnimationDidStop;
- (void)removeAllSubviews;
- (id)ancestorOrSelfWithClass:(Class)arg1;
- (id)descendantOrSelfWithClass:(Class)arg1;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) double height;
@property(nonatomic) double width;
@property(nonatomic) double centerY;
@property(nonatomic) double centerX;
@property(nonatomic) double bottom;
@property(nonatomic) double right;
@property(nonatomic) double top;
@property(nonatomic) double left;
- (void)setOriginX:(double)arg1;
- (void)setOriginY:(double)arg1;
- (id)screenshot;
@end

