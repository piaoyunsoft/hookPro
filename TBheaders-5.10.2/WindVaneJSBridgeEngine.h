//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WindVaneJSBridgeEngine : NSObject
{
}

+ (_Bool)executeJSBApplication:(id)arg1 withJSBContext:(id)arg2 withWebView:(id)arg3 withViewController:(id)arg4 withLock:(_Bool)arg5;
+ (void)apiAuthCheckWithHandler:(id)arg1 withMethod:(id)arg2 withParam:(id)arg3 withWebView:(id)arg4 withViewController:(id)arg5 withWVJSBResponse:(CDUnknownBlockType)arg6 withCallbackHandler:(CDUnknownBlockType)arg7;
+ (id)appWindVaneJSBContext;
+ (void)registeHandlerAlias:(id)arg1;
+ (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3 withResetHandler:(CDUnknownBlockType)arg4 withDeallocHandler:(CDUnknownBlockType)arg5;
+ (void)registeHandler:(id)arg1 withClassName:(id)arg2 handler:(CDUnknownBlockType)arg3 withResetHandler:(CDUnknownBlockType)arg4;

@end

