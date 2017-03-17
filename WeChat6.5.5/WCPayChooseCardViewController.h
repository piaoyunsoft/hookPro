//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString, UITableViewCell, WCPayBindCardInfo;
@protocol WCPayChooseCardViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface WCPayChooseCardViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *m_arrAvailableCards;
    UITableViewCell *m_oCellForAddCard;
    WCPayBindCardInfo *m_oSeletedCard;
    MMTableView *m_tableView;
    id <WCPayChooseCardViewControllerDelegate> _m_delegate;
}

@property(nonatomic) __weak id <WCPayChooseCardViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (id)getChargeRateStr:(id)arg1;
- (id)getCardName:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithPayData:(id)arg1 selected:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
