//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YLUniMessagePackPacker : NSObject
{
}

+ (id)pack:(id)arg1;
+ (void)packObject:(id)arg1 into:(struct msgpack_packer *)arg2;
+ (void)packNumber:(id)arg1 into:(struct msgpack_packer *)arg2;

@end
