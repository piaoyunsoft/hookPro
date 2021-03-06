//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSNSFollowBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, TBSNSFollowShopCategoryModel, UIImageView, UILabel, UIView;
@protocol TBSNSFollowShopCategoryViewControllerDelegate;

@interface TBSNSFollowShopCategoryViewController : TBSNSFollowBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _expand;	// 10 = 0xa
    _Bool _needUpdateData;	// 11 = 0xb
    unsigned long long _selectedIndex;	// 16 = 0x10
    id <TBSNSFollowShopCategoryViewControllerDelegate> _delegate;	// 24 = 0x18
    NSArray *_categories;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    double _rowHeight;	// 48 = 0x30
    double _maxExpandHeight;	// 56 = 0x38
    double _originHeight;	// 64 = 0x40
    UIView *_shadowView;	// 72 = 0x48
    UIView *_titleContentView;	// 80 = 0x50
    UIImageView *_arrowView;	// 88 = 0x58
}

@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *titleContentView; // @synthesize titleContentView=_titleContentView;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) double originHeight; // @synthesize originHeight=_originHeight;
@property(nonatomic) double maxExpandHeight; // @synthesize maxExpandHeight=_maxExpandHeight;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) _Bool needUpdateData; // @synthesize needUpdateData=_needUpdateData;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(nonatomic) _Bool expand; // @synthesize expand=_expand;
@property(nonatomic) __weak id <TBSNSFollowShopCategoryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)updateHeight;
- (void)updateSelectedTitle;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)requestNextPageWithLastId:(id)arg1 timestamp:(id)arg2;
- (void)receiveData:(id)arg1 error:(id)arg2;
- (void)expandAction:(id)arg1;
- (void)viewDidLoad;
- (double)heightForTableView;
@property(readonly, nonatomic) TBSNSFollowShopCategoryModel *selectedCategory;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

