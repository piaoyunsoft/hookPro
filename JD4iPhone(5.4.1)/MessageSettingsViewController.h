//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate.h"
#import "MessageSettingCellDelegate.h"
#import "NewRefreshTableHeaderViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class JDStoreNetwork, NSArray, NSString, UIButton, UITableView;

@interface MessageSettingsViewController : JDViewController <UITableViewDelegate, UITableViewDataSource, JDBaseToastViewDelegate, MessageSettingCellDelegate, NewRefreshTableHeaderViewDelegate>
{
    JDStoreNetwork *_delMsgNetwork;
    JDStoreNetwork *_msgSettNetwork;
    NSString *_userPin;
    NSArray *_settingsArr;
    id <MessageSettingCellDelegate> _delegate;
    UITableView *_tableView;
    UIButton *_clearMsgBtn;
}

@property(retain, nonatomic) UIButton *clearMsgBtn; // @synthesize clearMsgBtn=_clearMsgBtn;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MessageSettingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didFinishResponse:(id)arg1 requestSetup:(id)arg2 components:(id)arg3 error:(id)arg4;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)switchValueChanged:(id)arg1;
- (void)changeSubscribeType:(id)arg1 isSubscribe:(id)arg2;
- (void)fetchSubscribeSettingsRequest;
- (void)clearAllMessageRequset;
- (void)reconnect;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)clearMessageAction:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

