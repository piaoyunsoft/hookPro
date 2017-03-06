//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SearchMtopResponseProtocal-Protocol.h"

@class NSString;

@interface TMSearchSortRule : NSObject <SearchMtopResponseProtocal>
{
    _Bool _selected;	// 8 = 0x8
    NSString *_sortName;	// 16 = 0x10
    NSString *_sortParam;	// 24 = 0x18
    long long _sortPos;	// 32 = 0x20
    NSString *_comboValue;	// 40 = 0x28
    NSString *_sort_url;	// 48 = 0x30
}

@property(copy, nonatomic) NSString *sort_url; // @synthesize sort_url=_sort_url;
@property(copy, nonatomic) NSString *comboValue; // @synthesize comboValue=_comboValue;
@property(nonatomic) long long sortPos; // @synthesize sortPos=_sortPos;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *sortParam; // @synthesize sortParam=_sortParam;
@property(copy, nonatomic) NSString *sortName; // @synthesize sortName=_sortName;
- (void).cxx_destruct;
- (id)directSortParam;
- (id)initWithJsonDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
