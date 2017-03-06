//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MLBaseViewController.h"

#import "MLRecordVideoShareHandlerDelegate.h"
#import "MLShareViewDataSource.h"
#import "UIViewControllerTransitioningDelegate.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, MBProgressHUD, MLRecordVideoShareHandler, NSArray, NSDictionary, NSObject<OS_dispatch_semaphore>, NSString, NSURL, UIButton, UIImage, UIImageView, UIView;

@interface MLRecordShareViewController : MLBaseViewController <MLShareViewDataSource, UIViewControllerTransitioningDelegate, MLRecordVideoShareHandlerDelegate>
{
    _Bool _roomOwner;
    _Bool _canSendChatMesage;
    _Bool _fullFill;
    _Bool _isHost;
    NSString *_roomId;
    CDUnknownBlockType _saveHandler;
    CDUnknownBlockType _closeShareHandler;
    UIView *_containerView;
    UIImageView *_screenImageView;
    UIView *_bottomView;
    UIImage *_screenImage;
    MBProgressHUD *_progressHUD;
    NSDictionary *_shareDictionary;
    UIButton *_closeButton;
    UIButton *_saveButton;
    UIButton *_shareButton;
    NSObject<OS_dispatch_semaphore> *_animationSemaphore;
    MLRecordVideoShareHandler *_shareHandler;
    AVPlayerItem *_playItem;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    unsigned long long _recordType;
    NSURL *_videoURL;
    double _duration;
    NSString *_videoDBName;
    NSArray *_configureShareItems;
}

@property(retain, nonatomic) NSArray *configureShareItems; // @synthesize configureShareItems=_configureShareItems;
@property(retain, nonatomic) NSString *videoDBName; // @synthesize videoDBName=_videoDBName;
@property(nonatomic) _Bool isHost; // @synthesize isHost=_isHost;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(nonatomic) unsigned long long recordType; // @synthesize recordType=_recordType;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playItem; // @synthesize playItem=_playItem;
@property(retain, nonatomic) MLRecordVideoShareHandler *shareHandler; // @synthesize shareHandler=_shareHandler;
@property(nonatomic, getter=isFullFill) _Bool fullFill; // @synthesize fullFill=_fullFill;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *animationSemaphore; // @synthesize animationSemaphore=_animationSemaphore;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) NSDictionary *shareDictionary; // @synthesize shareDictionary=_shareDictionary;
@property(retain, nonatomic) MBProgressHUD *progressHUD; // @synthesize progressHUD=_progressHUD;
@property(retain, nonatomic) UIImage *screenImage; // @synthesize screenImage=_screenImage;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *screenImageView; // @synthesize screenImageView=_screenImageView;
@property(nonatomic) _Bool canSendChatMesage; // @synthesize canSendChatMesage=_canSendChatMesage;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType closeShareHandler; // @synthesize closeShareHandler=_closeShareHandler;
@property(copy, nonatomic) CDUnknownBlockType saveHandler; // @synthesize saveHandler=_saveHandler;
@property(nonatomic) _Bool roomOwner; // @synthesize roomOwner=_roomOwner;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;
- (void)removeHud;
- (void)showHud;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)didSelectedPlatform:(id)arg1 item:(id)arg2;
- (id)shareItemsFromUserConfig;
- (id)shareItems;
- (void)uploadVideoFail:(id)arg1;
- (void)uploadVideoError:(id)arg1;
- (void)uploadVideoOk:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)setupWithVideoURL:(id)arg1 duration:(double)arg2 isHost:(_Bool)arg3;
- (void)showMessage:(id)arg1;
- (void)toggleShare;
- (void)presentTransitionComplete;
- (void)setupScaleSmall;
- (void)beginScaleSmallAnimation;
- (void)beginFullScreenAnimation;
- (void)didTap:(id)arg1;
- (void)didClickSaveButton:(id)arg1;
- (void)didClickShareButton:(id)arg1;
- (void)setupCloseAnimation;
- (void)didClickCloseButton:(id)arg1;
- (void)setupWithScreenImage:(id)arg1;
- (void)addNotification;
- (void)appDidBecomeActiveNotification:(id)arg1;
- (void)appWillEnterForegroundNotification:(id)arg1;
- (void)addTapGesture;
- (void)addShareButton;
- (void)addSaveButton;
- (void)addCloseButton;
- (void)addBottomView;
- (void)addVideoLayer;
- (void)addScreenImageView;
- (void)addContainerView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithReocordType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
