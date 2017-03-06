//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JSContext, NSString;

@interface LCJSCoreItem : NSObject
{
    int _requestId;
    int _errorCode;
    id _observer;
    SEL _callbackMethod;
    long long _filterType;
    NSString *_requestValue;
    NSString *_JSResponseValue;
    JSContext *_currentJSContext;
    NSString *_errorTips;
}

@property(retain, nonatomic) NSString *errorTips; // @synthesize errorTips=_errorTips;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) JSContext *currentJSContext; // @synthesize currentJSContext=_currentJSContext;
@property(retain, nonatomic) NSString *JSResponseValue; // @synthesize JSResponseValue=_JSResponseValue;
@property(retain, nonatomic) NSString *requestValue; // @synthesize requestValue=_requestValue;
@property(nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) SEL callbackMethod; // @synthesize callbackMethod=_callbackMethod;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
@property(nonatomic) int requestId; // @synthesize requestId=_requestId;
- (void).cxx_destruct;

@end
