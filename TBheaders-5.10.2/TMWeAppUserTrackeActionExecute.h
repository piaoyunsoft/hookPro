//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppActionExecute.h"

@class NSDictionary, NSString;

@interface TMWeAppUserTrackeActionExecute : WeAppActionExecute
{
    NSString *_utType;	// 8 = 0x8
    NSString *_utName;	// 16 = 0x10
    NSDictionary *_utParams;	// 24 = 0x18
}

@property(retain, nonatomic) NSDictionary *utParams; // @synthesize utParams=_utParams;
@property(retain, nonatomic) NSString *utName; // @synthesize utName=_utName;
@property(retain, nonatomic) NSString *utType; // @synthesize utType=_utType;
- (void).cxx_destruct;
- (void)doUserTraker;
- (void)actionDoWithConditon:(id)arg1;

@end

