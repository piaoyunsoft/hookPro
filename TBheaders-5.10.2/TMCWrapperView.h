//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TMCCustomizeComponent;
@protocol TMSearchCustomizeEngine;

@interface TMCWrapperView : UIView
{
    TMCCustomizeComponent *_componentData;	// 8 = 0x8
    UIView *_innerView;	// 16 = 0x10
    _Bool _adaptiveHeight;	// 24 = 0x18
    id <TMSearchCustomizeEngine> _engine;	// 32 = 0x20
}

@property(nonatomic) _Bool adaptiveHeight; // @synthesize adaptiveHeight=_adaptiveHeight;
@property(retain, nonatomic) id <TMSearchCustomizeEngine> engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1 forName:(id)arg2;
- (void)syncData:(id)arg1;
- (void)dealloc;
- (id)innerView;
- (id)moduleId;
- (id)moduleName;
- (void)updateFrame:(struct CGRect)arg1;
- (_Bool)reloadData:(id)arg1;
- (id)initByAddingSubView:(id)arg1 withEngine:(id)arg2 data:(id)arg3;

@end
