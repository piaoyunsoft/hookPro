//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface JDIMEmptyView : UIView
{
    NSString *_imageName;
    NSString *_title;
    NSString *_desc;
}

@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;
- (void)hidden;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1 emptyImage:(id)arg2 title:(id)arg3 desc:(id)arg4;

@end
