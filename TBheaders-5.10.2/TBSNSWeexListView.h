//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, TBModelStatusHandler, TBModelStatusInfo, WXSDKInstance;
@protocol UITableViewDelegate;

@interface TBSNSWeexListView : UIView <UITableViewDelegate>
{
    _Bool _isFristPageFinished;	// 8 = 0x8
    _Bool _isNeedEmptyView;	// 9 = 0x9
    _Bool _isNeedPullToRefresh;	// 10 = 0xa
    NSDictionary *_config;	// 16 = 0x10
    NSMutableDictionary *_customInfo;	// 24 = 0x18
    TBModelStatusHandler *_emptyStatusHandler;	// 32 = 0x20
    TBModelStatusInfo *_emptyStatusInfo;	// 40 = 0x28
    CDUnknownBlockType _selectorForEmptyBlock;	// 48 = 0x30
    CDUnknownBlockType _onTableViewScroll;	// 56 = 0x38
    CDUnknownBlockType _fristPageDataFinished;	// 64 = 0x40
    CDUnknownBlockType _fristPageRenderFinished;	// 72 = 0x48
    CDUnknownBlockType _onWeexFailed;	// 80 = 0x50
    CDUnknownBlockType _onFinish;	// 88 = 0x58
    long long _listId;	// 96 = 0x60
    WXSDKInstance *_weexInstance;	// 104 = 0x68
    NSString *_weexJs;	// 112 = 0x70
    id <UITableViewDelegate> _originTableViewDelegate;	// 120 = 0x78
}

@property(nonatomic) __weak id <UITableViewDelegate> originTableViewDelegate; // @synthesize originTableViewDelegate=_originTableViewDelegate;
@property(retain, nonatomic) NSString *weexJs; // @synthesize weexJs=_weexJs;
@property(retain, nonatomic) WXSDKInstance *weexInstance; // @synthesize weexInstance=_weexInstance;
@property(nonatomic) long long listId; // @synthesize listId=_listId;
@property(copy, nonatomic) CDUnknownBlockType onFinish; // @synthesize onFinish=_onFinish;
@property(copy, nonatomic) CDUnknownBlockType onWeexFailed; // @synthesize onWeexFailed=_onWeexFailed;
@property(copy, nonatomic) CDUnknownBlockType fristPageRenderFinished; // @synthesize fristPageRenderFinished=_fristPageRenderFinished;
@property(copy, nonatomic) CDUnknownBlockType fristPageDataFinished; // @synthesize fristPageDataFinished=_fristPageDataFinished;
@property(copy, nonatomic) CDUnknownBlockType onTableViewScroll; // @synthesize onTableViewScroll=_onTableViewScroll;
@property(copy, nonatomic) CDUnknownBlockType selectorForEmptyBlock; // @synthesize selectorForEmptyBlock=_selectorForEmptyBlock;
@property(retain, nonatomic) TBModelStatusInfo *emptyStatusInfo; // @synthesize emptyStatusInfo=_emptyStatusInfo;
@property(retain, nonatomic) TBModelStatusHandler *emptyStatusHandler; // @synthesize emptyStatusHandler=_emptyStatusHandler;
@property(nonatomic) _Bool isNeedPullToRefresh; // @synthesize isNeedPullToRefresh=_isNeedPullToRefresh;
@property(nonatomic) _Bool isNeedEmptyView; // @synthesize isNeedEmptyView=_isNeedEmptyView;
@property(nonatomic) _Bool isFristPageFinished; // @synthesize isFristPageFinished=_isFristPageFinished;
@property(retain, nonatomic) NSMutableDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)didMoveToWindow;
- (_Bool)checkEmpty:(long long)arg1;
- (void)dealloc;
- (void)onFirstPage;
- (void)destroyObj;
- (id)getTableView;
- (void)reloadData;
- (void)startRender;
- (void)setFrame:(struct CGRect)arg1;
- (void)initWeexList;
- (id)initWithFrame:(struct CGRect)arg1 weexJs:(id)arg2 config:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
