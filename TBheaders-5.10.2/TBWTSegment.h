//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSURL;

@interface TBWTSegment : NSObject
{
    NSURL *_url;	// 8 = 0x8
    double _start;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    NSArray *_thumbnails;	// 32 = 0x20
}

@property(copy, nonatomic) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double start; // @synthesize start=_start;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end

