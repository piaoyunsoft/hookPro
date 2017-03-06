//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDButton, NSArray, NSDictionary, NSString, OrderdetailSeparateView, UIButton, UIImage, UIImageView, UILabel, UITableView;

@interface OrderDetailWareTableView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *headView;
    UILabel *titleLabel;
    UITableView *wareTable;
    NSArray *wareList;
    UIView *bottomView;
    UIButton *showMoreButton;
    JDButton *customServiceButton;
    NSDictionary *orderInfo;
    UIImageView *shopImageView;
    OrderdetailSeparateView *separateView;
    UIImage *customServiceNorImage;
    UIImage *customServiceHLightImage;
    UIButton *arrowImageButton;
    UIImageView *customLine;
    long long _isShowShoppingCart;
    double bottomViewHeight;
    double tableViewHeight;
    UIView *customMadeLine;
    UIImageView *customMadeGotoNextImg;
    UIView *_yunFeiXianView;
    _Bool _isShowAll;
    id <OrderDetailWareTableViewDelegate><OrderDetailWareTableViewCellDelegate> delegate;
    UIView *_customMadeEntranceView;
    UILabel *_customMadeLabel;
    UILabel *_customMadeMessageLabel;
}

@property(retain, nonatomic) UILabel *customMadeMessageLabel; // @synthesize customMadeMessageLabel=_customMadeMessageLabel;
@property(retain, nonatomic) UILabel *customMadeLabel; // @synthesize customMadeLabel=_customMadeLabel;
@property(retain, nonatomic) UIView *customMadeEntranceView; // @synthesize customMadeEntranceView=_customMadeEntranceView;
@property(nonatomic) _Bool isShowAll; // @synthesize isShowAll=_isShowAll;
@property(retain, nonatomic) NSDictionary *orderInfo; // @synthesize orderInfo;
@property(retain, nonatomic) NSArray *wareList; // @synthesize wareList;
@property(nonatomic) id <OrderDetailWareTableViewDelegate><OrderDetailWareTableViewCellDelegate> delegate; // @synthesize delegate;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)gotoCustomMadeView;
- (void)setCustomerButton;
- (void)setCustomMadeEntranceView;
- (void)setYunFeiXianView;
- (int)getTableHeight;
- (void)updateTable;
- (void)setupTableView:(id)arg1 orderInfo:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)customServiceButtonClicked;
- (void)showMoreButtonClicked;
- (void)handleTap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
