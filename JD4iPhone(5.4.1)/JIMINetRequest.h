//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JIMIKfConfigModel, JIMILoginModel, NSDictionary, NSMutableArray, NSString;

@interface JIMINetRequest : NSObject
{
    NSString *_defaultHost;
    NSDictionary *_contextInfo;
    NSString *_cookies;
    NSMutableArray *_networks;
    JIMILoginModel *_loginModel;
    JIMIKfConfigModel *_configModel;
    NSString *_source;
}

+ (id)sharedJIMINetRequest;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) JIMIKfConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) JIMILoginModel *loginModel; // @synthesize loginModel=_loginModel;
@property(retain, nonatomic) NSMutableArray *networks; // @synthesize networks=_networks;
@property(copy, nonatomic) NSString *cookies; // @synthesize cookies=_cookies;
@property(retain, nonatomic) NSDictionary *contextInfo; // @synthesize contextInfo=_contextInfo;
@property(copy, nonatomic) NSString *defaultHost; // @synthesize defaultHost=_defaultHost;
- (void).cxx_destruct;
- (id)getEvaluateFlagWithDelegate:(id)arg1 type:(long long)arg2 satisfy:(_Bool)arg3;
- (id)getKfConfigWithDelegate:(id)arg1;
- (id)getPrefixQue:(id)arg1 delegate:(id)arg2;
- (id)clickRecord:(id)arg1 content:(id)arg2 delegate:(id)arg3;
- (id)getSatisfiedType:(id)arg1 unsatisfiedReason:(id)arg2 entranceSource:(id)arg3 delegate:(id)arg4;
- (id)changeToManual:(id)arg1;
- (id)getWeather:(id)arg1;
- (id)getPoem:(id)arg1;
- (id)getJoke:(id)arg1;
- (id)getFortune:(id)arg1;
- (id)getDelivery:(id)arg1 cityId:(id)arg2 areaId:(id)arg3 fouthId:(id)arg4 delegate:(id)arg5;
- (id)getAddress:(id)arg1 delegate:(id)arg2;
- (id)getAsk:(id)arg1 withPara:(id)arg2 delegate:(id)arg3;
- (id)getWelcome:(id)arg1;
- (id)getLoginNetWork:(id)arg1 delegate:(id)arg2;
- (id)init;

@end
