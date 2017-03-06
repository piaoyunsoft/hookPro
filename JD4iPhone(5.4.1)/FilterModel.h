//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JDModel.h"

@class NSArray, NSNumber, NSString;

@interface FilterModel : JDModel
{
    _Bool opened_;
    int cid_;
    NSString *name_;
    NSString *peiSongStr_;
    NSString *filed_;
    NSNumber *wareNum_;
    NSArray *childArray_;
    NSString *key_;
    NSString *value_;
    NSString *price_;
    NSString *priceMin_;
    NSString *priceMax_;
    NSString *_rate;
}

@property(copy, nonatomic) NSString *rate; // @synthesize rate=_rate;
@property(nonatomic) _Bool opened; // @synthesize opened=opened_;
@property(copy, nonatomic) NSString *priceMax; // @synthesize priceMax=priceMax_;
@property(copy, nonatomic) NSString *priceMin; // @synthesize priceMin=priceMin_;
@property(copy, nonatomic) NSString *price; // @synthesize price=price_;
@property(copy, nonatomic) NSString *value; // @synthesize value=value_;
@property(copy, nonatomic) NSString *key; // @synthesize key=key_;
@property(retain, nonatomic) NSArray *childArray; // @synthesize childArray=childArray_;
@property(retain, nonatomic) NSNumber *wareNum; // @synthesize wareNum=wareNum_;
@property(copy, nonatomic) NSString *filed; // @synthesize filed=filed_;
@property(copy, nonatomic) NSString *peiSongStr; // @synthesize peiSongStr=peiSongStr_;
@property(nonatomic) int cid; // @synthesize cid=cid_;
@property(copy, nonatomic) NSString *name; // @synthesize name=name_;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end
