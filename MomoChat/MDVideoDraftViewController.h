//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class MDNormalButtonItem, MDReturnButtonItem, NSMutableArray, NSString, UICollectionView, UILabel;

@interface MDVideoDraftViewController : MDViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _isEditing;
    CDUnknownBlockType _complete;
    long long _accessSource;
    UICollectionView *_collectionView;
    UILabel *_noticeLabel;
    NSMutableArray *_videoList;
    NSMutableArray *_currentList;
    MDNormalButtonItem *_myLeftItem;
    MDNormalButtonItem *_rightItem;
    MDReturnButtonItem *_returnItem;
}

@property(retain, nonatomic) MDReturnButtonItem *returnItem; // @synthesize returnItem=_returnItem;
@property(retain, nonatomic) MDNormalButtonItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) MDNormalButtonItem *myLeftItem; // @synthesize myLeftItem=_myLeftItem;
@property(retain, nonatomic) NSMutableArray *currentList; // @synthesize currentList=_currentList;
@property(nonatomic) _Bool isEditing; // @synthesize isEditing=_isEditing;
@property(retain, nonatomic) NSMutableArray *videoList; // @synthesize videoList=_videoList;
@property(retain, nonatomic) UILabel *noticeLabel; // @synthesize noticeLabel=_noticeLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) long long accessSource; // @synthesize accessSource=_accessSource;
@property(copy, nonatomic) CDUnknownBlockType complete; // @synthesize complete=_complete;
- (void)draftCellDidDelete:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)editVideoDraft;
- (void)undoSetting;
- (void)goBack;
- (void)setupNavigationItem;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

