//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface JDPCertificateModel : NSObject
{
    NSData *_decodeData;
    _Bool _isNeedUpdate;
    NSString *_desKey;
    NSString *_certificateData;
}

+ (id)lastCertificateString;
+ (id)lastCertificates;
+ (id)cb_Base64DecodeCertificate:(id)arg1;
+ (id)model;
@property(retain, nonatomic) NSString *certificateData; // @synthesize certificateData=_certificateData;
@property(retain, nonatomic) NSString *desKey; // @synthesize desKey=_desKey;
@property(nonatomic) _Bool isNeedUpdate; // @synthesize isNeedUpdate=_isNeedUpdate;
- (void).cxx_destruct;
- (void)saveCertificateString:(id)arg1;
- (void)cb_decodeAndSaveCertificate;
- (void)setDataWithDic:(id)arg1;

@end

