//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPTFilterBase.h"

@interface MPTTransformFilter : MPTFilterBase
{
    int transformMatrixLocation;
    CDStruct_461fb6ec _matrix;
}

@property(nonatomic) CDStruct_461fb6ec matrix; // @synthesize matrix=_matrix;
- (id)initWithVertexShaderFromString:(id)arg1 fragmentShaderFromString:(id)arg2;
- (id)init;

@end

