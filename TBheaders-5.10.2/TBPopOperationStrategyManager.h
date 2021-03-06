//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue, TBPopOperationProvider;

@interface TBPopOperationStrategyManager : NSObject
{
    NSMutableDictionary *_popOperStrategyByViews;	// 8 = 0x8
    NSArray *_placeHolderStrategies;	// 16 = 0x10
    id <TBPopOperationProvider> _popOperProvider;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_strategyCtrlQueue;	// 32 = 0x20
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *strategyCtrlQueue; // @synthesize strategyCtrlQueue=_strategyCtrlQueue;
@property(retain, nonatomic) id <TBPopOperationProvider> popOperProvider; // @synthesize popOperProvider=_popOperProvider;
@property(retain, nonatomic) NSArray *placeHolderStrategies; // @synthesize placeHolderStrategies=_placeHolderStrategies;
@property(retain, nonatomic) NSMutableDictionary *popOperStrategyByViews; // @synthesize popOperStrategyByViews=_popOperStrategyByViews;
- (void).cxx_destruct;
- (void)clearAllStrategies;
- (void)setStrategies:(id)arg1 forPageSafely:(id)arg2;
- (id)strategiesForPageSafely:(id)arg1;
- (_Bool)isValidStrategy:(id)arg1;
- (void)fillPageAndStrategiesFor:(id)arg1;
- (void)handleOtherStrategies:(id)arg1;
- (void)fetchOtherStrategiesForPage:(id)arg1;
- (void)handleMainStrategies:(id)arg1;
- (void)loadMainStrategiesFromBundle;
- (void)fetchMainStrategies;
- (void)strategiesDidUpdate:(id)arg1;
- (void)dealloc;
- (_Bool)page:(id)arg1 hasFirstShowStrategryWithIdentifier:(id *)arg2 timeout:(double *)arg3;
- (int)strategiesForPage:(id)arg1 withValue:(id *)arg2;
- (id)initWithProvider:(id)arg1;

@end

