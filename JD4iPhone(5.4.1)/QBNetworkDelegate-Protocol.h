//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCachedURLResponse, NSData, NSError, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, QBNetwork;

@protocol QBNetworkDelegate <NSObject>

@optional
- (void)qbNetwork:(QBNetwork *)arg1 willSendRequestForAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2;
- (_Bool)qbNetworkShouldUseCredentialStorage:(QBNetwork *)arg1;
- (NSCachedURLResponse *)qbNetwork:(QBNetwork *)arg1 willCacheResponse:(NSCachedURLResponse *)arg2;
- (void)qbNetwork:(QBNetwork *)arg1 didFailWithError:(NSError *)arg2;
- (void)qbNetworkDidFinishLoading:(QBNetwork *)arg1;
- (void)qbNetwork:(QBNetwork *)arg1 didReceiveData:(NSData *)arg2;
- (void)qbNetwork:(QBNetwork *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (NSURLRequest *)qbNetwork:(QBNetwork *)arg1 willSendRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
@end

