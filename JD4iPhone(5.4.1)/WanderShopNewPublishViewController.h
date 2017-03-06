//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"
#import "WanderShopPublishTitleViewDelegate.h"
#import "WanderShopTextViewDelegate.h"

@class JDBaseToastView, NSIndexPath, NSMutableArray, NSString, UIButton, UILabel, UITableView, UITableViewCell, UIView, WanderShopCircleModel, WanderShopPublishProductIconView, WanderShopPublishTextView, WanderShopPublishTitleView;

@interface WanderShopNewPublishViewController : JDViewController <UITextViewDelegate, WanderShopTextViewDelegate, WanderShopPublishTitleViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_publishTableview;
    NSIndexPath *_tempIndexPathCell;
    UIView *_bottomView;
    double _keyBoradHeight;
    UIView *_assetButtonBg;
    UIView *_selectCircleView;
    UILabel *_selectCircleLable;
    _Bool _isFirstLoad;
    JDBaseToastView *_newToast;
    WanderShopPublishProductIconView *_wareButton;
    WanderShopPublishProductIconView *_assetButton;
    UITableViewCell *_tempDeleteProductCell;
    NSString *_tempDeleteProductName;
    UILabel *_placeHolderLabel;
    WanderShopPublishTextView *_templateTextView;
    WanderShopPublishTitleView *_titleView;
    _Bool _isNeedEdit;
    NSString *_takePartInfo;
    WanderShopCircleModel *_circleModel;
    NSString *_topicName;
    NSMutableArray *_publishData;
    NSString *_publishTitle;
    UIButton *_submitButton;
    UIButton *_cancelButton;
    NSMutableArray *_allAssetsArray;
}

@property(retain, nonatomic) NSMutableArray *allAssetsArray; // @synthesize allAssetsArray=_allAssetsArray;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
@property(nonatomic) _Bool isNeedEdit; // @synthesize isNeedEdit=_isNeedEdit;
@property(copy, nonatomic) NSString *publishTitle; // @synthesize publishTitle=_publishTitle;
@property(retain, nonatomic) NSMutableArray *publishData; // @synthesize publishData=_publishData;
@property(copy, nonatomic) NSString *topicName; // @synthesize topicName=_topicName;
@property(retain, nonatomic) WanderShopCircleModel *circleModel; // @synthesize circleModel=_circleModel;
@property(copy, nonatomic) NSString *takePartInfo; // @synthesize takePartInfo=_takePartInfo;
- (void).cxx_destruct;
- (void)deleteTap:(id)arg1 Text:(id)arg2;
- (void)enterTap:(id)arg1 Text:(id)arg2;
- (void)updataCellHeight:(long long)arg1 Cell:(id)arg2 Text:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)randomNSString;
- (void)deleteProductCell:(id)arg1 productString:(id)arg2;
- (void)popDeleteView:(id)arg1 productString:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)getTableViewHeight;
- (void)getFocus:(id)arg1;
- (void)goSelectCellIndexPath;
- (void)moveInputPadUp:(_Bool)arg1 height:(int)arg2;
- (void)hideKeyBorad;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)keyboardFrameChange:(id)arg1;
- (void)goToSelectProductViewController;
- (void)reloadDataAndScrollToButtom;
- (void)showBigImageControll:(id)arg1;
- (void)reloadTableView;
- (void)addImage;
- (void)selectorCirlce:(id)arg1;
- (void)setSelectCircleView:(id)arg1 IsRed:(_Bool)arg2;
- (void)setCirleTap;
- (void)addButtomButton;
- (void)backAndConfigDragProperty;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)saveCache;
- (void)inputArray:(id)arg1 inputPosition:(long long)arg2;
- (void)reSetBgTitleViewHeight:(double)arg1;
- (void)updataTitleViewHeight:(long long)arg1 Text:(id)arg2;
- (void)deleteTitle:(id)arg1;
- (void)insertTitle:(id)arg1;
- (void)enterTitle:(id)arg1;
- (void)popViewController;
- (void)setFirstPicModel;
- (void)setFirstPic;
- (void)cancelButtonTap;
- (void)publish;
- (void)setNavButtonItem;
- (void)selectLastCell;
- (void)selectFirstCell;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setButtomButtonNum;
- (void)checkDataAndSetDefaultText;
- (long long)getProductCount:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tapTableView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
