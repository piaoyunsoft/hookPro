//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JDMainPageFloorAnimationGameLevelModel : NSObject
{
    unsigned long long _levelId;
    unsigned long long _order;
    unsigned long long _level;
    NSString *_winImg;
    NSString *_noWinImg;
    NSString *_backImg;
    NSString *_shareImg;
    NSString *_win_text1;
    NSString *_win_text2;
    NSString *_win_text3;
}

@property(copy, nonatomic) NSString *win_text3; // @synthesize win_text3=_win_text3;
@property(copy, nonatomic) NSString *win_text2; // @synthesize win_text2=_win_text2;
@property(copy, nonatomic) NSString *win_text1; // @synthesize win_text1=_win_text1;
@property(copy, nonatomic) NSString *shareImg; // @synthesize shareImg=_shareImg;
@property(copy, nonatomic) NSString *backImg; // @synthesize backImg=_backImg;
@property(copy, nonatomic) NSString *noWinImg; // @synthesize noWinImg=_noWinImg;
@property(copy, nonatomic) NSString *winImg; // @synthesize winImg=_winImg;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(nonatomic) unsigned long long order; // @synthesize order=_order;
@property(nonatomic) unsigned long long levelId; // @synthesize levelId=_levelId;
- (void).cxx_destruct;

@end

