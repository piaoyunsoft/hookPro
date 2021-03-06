//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PDPrettyStringPrinting-Protocol.h"

@class NSMutableSet, NSSet, NSString;

@interface PDJSONPrettyStringPrinter : NSObject <PDPrettyStringPrinting>
{
    NSMutableSet *_redactedFields;	// 8 = 0x8
}

@property(readonly, nonatomic) NSSet *redactedFields; // @synthesize redactedFields=_redactedFields;
- (void).cxx_destruct;
- (void)addRedactedField:(id)arg1;
- (id)prettyStringForData:(id)arg1 forResponse:(id)arg2 request:(id)arg3;
- (id)prettyStringForData:(id)arg1 forRequest:(id)arg2;
- (id)prettyStringForData:(id)arg1;
- (_Bool)canPrettyStringPrintResponse:(id)arg1 withRequest:(id)arg2;
- (_Bool)canPrettyStringPrintRequest:(id)arg1;
- (_Bool)canPrettyStringPrintContentType:(id)arg1;
- (id)initWithRedactedFields:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

