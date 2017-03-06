//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDApiBase.h"

@class MDAPICached;

@interface MDFeedApi : MDApiBase
{
    MDAPICached *_apiCache;
}

@property(retain, nonatomic) MDAPICached *apiCache; // @synthesize apiCache=_apiCache;
- (void)publishShopFeedComment:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)publishShopFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)syncImageToFriendIDs:(id)arg1 guid:(id)arg2 delegate:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (id)buildParamsForComment:(id)arg1;
- (void)modifyFeedBackGird:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)requestFeedHeaderInfoWithParam:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (void)cleanVisitRecordWithFeedId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)topOrUntopFeedWithFeedid:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)markFeedReadWithFeedId:(id)arg1;
- (void)deleteFeedWithFeedId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)unzdingFeedWithFeedId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)zdingFeedWithFeedId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)unhotFeedWithFeedId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)hotFeedWithFeedId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)uninterestFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)ignoreSomeBodyFeedParam:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getSubjectFeedList:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getTagInfoWith:(id)arg1 type:(int)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)unfollowTopicWithTopicID:(id)arg1 Target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5 userInfo:(id)arg6;
- (void)followTopicWithTopicID:(id)arg1 Target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5 userInfo:(id)arg6;
- (void)getTopicListWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)getRecentFeedTagListWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)getFeedTagDicWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)getFeedTagListWithTarget:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)removeMyCommentWithCommentId:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)checkGroupFeedWithGoroupID:(id)arg1 content:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)checkPostContent:(id)arg1 andTitle:(id)arg2 andQid:(id)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)checkNearbyFeedContent:(id)arg1 andTopic:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)checkNearbyFeedContent:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getGroupFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)commentbyGroupFeed:(id)arg1 begin:(int)arg2 number:(int)arg3 lastDate:(id)arg4 lastCommentId:(id)arg5 target:(id)arg6 okSelector:(SEL)arg7 errSelector:(SEL)arg8 failSelector:(SEL)arg9;
- (void)removeGroupFeedComment:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)publishGroupFeedComment:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)unTopGroupParty:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)topGroupParty:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)unTopGroupFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)topGroupFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)removeGroupFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)releaseGroupFeedWithPara:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)feedFilterConfigWithDelegate:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)requestSiteID:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)nearbyFeeds:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)createFeedSiteWithName:(id)arg1 siteType:(int)arg2 location:(id)arg3 delegate:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)feedBackAboutSite:(id)arg1 description:(id)arg2 delegate:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)removeFeedSiteFavor:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)addFeedSiteFavor:(id)arg1 delegate:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)SiteConfig:(id)arg1 okSelector:(SEL)arg2 errSelector:(SEL)arg3 failSelector:(SEL)arg4;
- (void)CommentbyFeed:(id)arg1 begin:(int)arg2 number:(int)arg3 lastDate:(id)arg4 lastCommentId:(id)arg5 target:(id)arg6 okSelector:(SEL)arg7 errSelector:(SEL)arg8 failSelector:(SEL)arg9;
- (void)myFeedComment:(int)arg1 number:(int)arg2 lastDate:(id)arg3 lastCommentId:(id)arg4 target:(id)arg5 okSelector:(SEL)arg6 errSelector:(SEL)arg7 failSelector:(SEL)arg8;
- (void)reportFeedComment:(id)arg1 reason:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)removeFeedComment:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)directPublishFeedComment:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)publishFeedComment:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)reportFeed:(id)arg1 reason:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)removeFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)feedsByids:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)getFeedProfile:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)feedById:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)feedOfFriends:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)feedOfUser:(id)arg1 params:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)siteDetail:(id)arg1 location:(id)arg2 refreshTime:(id)arg3 isSelected:(_Bool)arg4 target:(id)arg5 okSelector:(SEL)arg6 errSelector:(SEL)arg7 failSelector:(SEL)arg8;
- (void)feedListInSiteWithParams:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (void)feedListInSiteWithParams:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)feedSite:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)nearbyFeedSite:(id)arg1 keyWord:(id)arg2 target:(id)arg3 okSelector:(SEL)arg4 errSelector:(SEL)arg5 failSelector:(SEL)arg6;
- (void)syncPostFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)releasePostFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)setParam:(id)arg1 status:(int)arg2;
- (void)addPostImgDatas:(id)arg1 postParam:(id)arg2 dataArray:(id)arg3;
- (id)buildParamsForFeed:(id)arg1;
- (void)newPublishFeed:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)siteListWithLocaction:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)siteRecommend:(id)arg1 sid:(id)arg2 isCancel:(_Bool)arg3 target:(id)arg4 okSelector:(SEL)arg5 errSelector:(SEL)arg6 failSelector:(SEL)arg7;
- (void)chooseSite:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)searchFeedSite:(id)arg1 target:(id)arg2 okSelector:(SEL)arg3 errSelector:(SEL)arg4 failSelector:(SEL)arg5;
- (void)dealloc;

@end
