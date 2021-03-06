//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, TBPriceRange, TBSearchEmptyViewModel, TBSearchItemList, TBSearchNXModel, TBSearchOnesearchModel, TBSearchReview, TBSearchSelectHelper, TBSearchTipModel, TBXSearchDropboxModel, TBXSearchSortbarModel;

@interface TBXSearchResultModel : NSObject
{
    _Bool _isJiaGou;	// 8 = 0x8
    NSString *_totalResults;	// 16 = 0x10
    NSString *_page;	// 24 = 0x18
    NSString *_mainCategory;	// 32 = 0x20
    NSString *_abtest;	// 40 = 0x28
    NSString *_RN;	// 48 = 0x30
    NSString *_style;	// 56 = 0x38
    TBSearchItemList *_itemList;	// 64 = 0x40
    NSObject *_itemForHeader;	// 72 = 0x48
    NSObject *_itemForFooter;	// 80 = 0x50
    NSMutableArray *_tabArray;	// 88 = 0x58
    NSString *_pageName;	// 96 = 0x60
    TBSearchReview *_review;	// 104 = 0x68
    TBXSearchDropboxModel *_dropboxModel;	// 112 = 0x70
    NSArray *_navigatorModelFromServer;	// 120 = 0x78
    TBPriceRange *_priceRange;	// 128 = 0x80
    TBSearchOnesearchModel *_onesearch;	// 136 = 0x88
    NSString *_activityFlag;	// 144 = 0x90
    TBSearchTipModel *_searchTip;	// 152 = 0x98
    TBSearchNXModel *_searchNXComboModel;	// 160 = 0xa0
    TBSearchSelectHelper *_selectHelper;	// 168 = 0xa8
    TBSearchEmptyViewModel *_emptyViewModel;	// 176 = 0xb0
    NSMutableArray *_filterArray;	// 184 = 0xb8
    TBXSearchSortbarModel *_sortMenu;	// 192 = 0xc0
}

@property(nonatomic) _Bool isJiaGou; // @synthesize isJiaGou=_isJiaGou;
@property(retain, nonatomic) TBXSearchSortbarModel *sortMenu; // @synthesize sortMenu=_sortMenu;
@property(retain, nonatomic) NSMutableArray *filterArray; // @synthesize filterArray=_filterArray;
@property(retain, nonatomic) TBSearchEmptyViewModel *emptyViewModel; // @synthesize emptyViewModel=_emptyViewModel;
@property(retain, nonatomic) TBSearchSelectHelper *selectHelper; // @synthesize selectHelper=_selectHelper;
@property(retain, nonatomic) TBSearchNXModel *searchNXComboModel; // @synthesize searchNXComboModel=_searchNXComboModel;
@property(retain, nonatomic) TBSearchTipModel *searchTip; // @synthesize searchTip=_searchTip;
@property(retain, nonatomic) NSString *activityFlag; // @synthesize activityFlag=_activityFlag;
@property(retain, nonatomic) TBSearchOnesearchModel *onesearch; // @synthesize onesearch=_onesearch;
@property(retain, nonatomic) TBPriceRange *priceRange; // @synthesize priceRange=_priceRange;
@property(retain, nonatomic) NSArray *navigatorModelFromServer; // @synthesize navigatorModelFromServer=_navigatorModelFromServer;
@property(retain, nonatomic) TBXSearchDropboxModel *dropboxModel; // @synthesize dropboxModel=_dropboxModel;
@property(retain, nonatomic) TBSearchReview *review; // @synthesize review=_review;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSMutableArray *tabArray; // @synthesize tabArray=_tabArray;
@property(retain, nonatomic) NSObject *itemForFooter; // @synthesize itemForFooter=_itemForFooter;
@property(retain, nonatomic) NSObject *itemForHeader; // @synthesize itemForHeader=_itemForHeader;
@property(retain, nonatomic) TBSearchItemList *itemList; // @synthesize itemList=_itemList;
@property(retain, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *RN; // @synthesize RN=_RN;
@property(retain, nonatomic) NSString *abtest; // @synthesize abtest=_abtest;
@property(retain, nonatomic) NSString *mainCategory; // @synthesize mainCategory=_mainCategory;
@property(retain, nonatomic) NSString *page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *totalResults; // @synthesize totalResults=_totalResults;
- (void).cxx_destruct;

@end

