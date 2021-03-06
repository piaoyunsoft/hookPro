//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface TBIMFunctionControl : UIView
{
    UIView *_newImage;	// 8 = 0x8
    _Bool _isNew;	// 16 = 0x10
    UIButton *_button;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
}

@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)setTag:(long long)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithIconFont:(id)arg1 size:(long long)arg2 title:(id)arg3 buttonWidth:(float)arg4 andControlFrame:(struct CGRect)arg5 andIsNew:(_Bool)arg6;
- (void)dealloc;

@end

