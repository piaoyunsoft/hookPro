//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSAttributedString, TBOrderLabelCSS;

@interface TBOrderLabelInfo : TBOrderObject
{
    TBOrderLabelCSS *_css;	// 8 = 0x8
    NSAttributedString *_richTextName;	// 16 = 0x10
    NSAttributedString *_richTextValue;	// 24 = 0x18
}

@property(retain, nonatomic) NSAttributedString *richTextValue; // @synthesize richTextValue=_richTextValue;
@property(retain, nonatomic) NSAttributedString *richTextName; // @synthesize richTextName=_richTextName;
@property(retain, nonatomic) TBOrderLabelCSS *css; // @synthesize css=_css;
- (void).cxx_destruct;
- (id)richTexts;
- (id)desc;
- (_Bool)isBold;
- (_Bool)isHighLight;
- (_Bool)isCopy;
- (id)icon;
- (id)value;
- (id)name;
- (id)initWithData:(id)arg1;

@end

