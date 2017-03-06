//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHVPBaseModel.h"

#import "SHVPJumpProtocol.h"

@class NSString;

@interface SHVPDanmuSDKModel : SHVPBaseModel <SHVPJumpProtocol>
{
    NSString *_sku;
    NSString *_title;
    NSString *_price;
    NSString *_marketPrice;
    NSString *_number;
    NSString *_imgUrl;
}

@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *marketPrice; // @synthesize marketPrice=_marketPrice;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
- (void).cxx_destruct;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
