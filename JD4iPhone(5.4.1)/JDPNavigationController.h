//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class JDPTransitionControl, NSMutableArray, NSString;

@interface JDPNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    NSMutableArray *_screenShotList;
    JDPTransitionControl *_transitionControl;
}

@property(retain, nonatomic) JDPTransitionControl *transitionControl; // @synthesize transitionControl=_transitionControl;
@property(retain, nonatomic) NSMutableArray *screenShotList; // @synthesize screenShotList=_screenShotList;
- (void).cxx_destruct;
- (id)childViewControllerForStatusBarStyle;
- (void)turnNavigationControllerTransitionType:(long long)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)initWithRootViewController:(id)arg1;
- (id)init;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
