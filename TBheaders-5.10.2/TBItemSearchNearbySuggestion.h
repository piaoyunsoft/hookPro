//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBItemSearchNearbySuggestion : TBJSONModel
{
    NSString *_nearbyName;	// 8 = 0x8
    NSString *_subName;	// 16 = 0x10
    NSString *_query;	// 24 = 0x18
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *subName; // @synthesize subName=_subName;
@property(retain, nonatomic) NSString *nearbyName; // @synthesize nearbyName=_nearbyName;
- (void).cxx_destruct;

@end
