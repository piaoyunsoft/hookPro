//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIWindow.h"

@interface JDNewCouponView : UIWindow
{
    int type;
    id <JDNewCouponViewDelegate> delegate;
}

@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) id <JDNewCouponViewDelegate> delegate; // @synthesize delegate;
- (void)hideCouponView;
- (void)respond2activity:(id)arg1;
- (id)initWithText:(id)arg1;
- (id)initWithType:(int)arg1;
- (id)initImageViewWithTxt:(id)arg1;
- (void)dealloc;

@end
