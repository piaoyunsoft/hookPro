//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface TBSNSCardView : UIView
{
    int _cardSchemeType;	// 8 = 0x8
    NSMutableArray *_subcards;	// 16 = 0x10
}

+ (_Bool)isFixedSize;
+ (struct CGSize)fixedSize;
@property(retain, nonatomic) NSMutableArray *subcards; // @synthesize subcards=_subcards;
@property(nonatomic) int cardSchemeType; // @synthesize cardSchemeType=_cardSchemeType;
- (void).cxx_destruct;
- (void)autoLayoutSubcards;
- (id)init;
- (struct CGSize)cardSize;

@end
