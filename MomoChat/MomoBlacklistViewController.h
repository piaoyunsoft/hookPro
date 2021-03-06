//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewController.h"

#import "MDUserProfileHelperDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MBProgressHUD, MDUserProfileHelper, NSMutableArray, NSString, UITableView, UIView;

@interface MomoBlacklistViewController : MDViewController <UITableViewDelegate, UITableViewDataSource, MDUserProfileHelperDelegate>
{
    UITableView *uiTableView;
    NSMutableArray *userArray;
    _Bool _loadOnce;
    MBProgressHUD *hud;
    MDUserProfileHelper *helper;
    UIView *_noListView;
}

@property(retain, nonatomic) UIView *noListView; // @synthesize noListView=_noListView;
@property(retain, nonatomic) UITableView *uiTableView; // @synthesize uiTableView;
@property(retain, nonatomic) NSMutableArray *userArray; // @synthesize userArray;
- (void)removeUnblockUser:(id)arg1;
- (id)loadBlockListFromDB;
- (void)dealloc;
- (void)removeHud;
- (void)showHud;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)userHelper:(id)arg1 unblock:(int)arg2 errorCode:(unsigned long long)arg3 errorMsg:(id)arg4;
- (void)unblockUser:(id)arg1;
- (void)queryBlackListError:(id)arg1;
- (void)queryBlackListFail:(id)arg1;
- (void)queryBlackListSuccess:(id)arg1;
- (void)queryBlackList;
- (void)fetchBlacklist;
- (void)clickEditingUnblock:(id)arg1;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (void)setNavBarItem;
- (void)hideNoListDisplayView;
- (void)showNoListDisplayView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

