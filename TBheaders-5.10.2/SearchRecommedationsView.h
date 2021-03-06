//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol SearchRecommedationsViewDelegate;

@interface SearchRecommedationsView : UIView
{
    NSArray *_recommedations;	// 8 = 0x8
    long long _isMultiColumn;	// 16 = 0x10
    id <SearchRecommedationsViewDelegate> _delegate;	// 24 = 0x18
}

@property(nonatomic) __weak id <SearchRecommedationsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long isMultiColumn; // @synthesize isMultiColumn=_isMultiColumn;
@property(retain, nonatomic) NSArray *recommedations; // @synthesize recommedations=_recommedations;
- (void).cxx_destruct;
- (id)buttonWithRecommedation:(id)arg1 atIndex:(long long)arg2;
- (void)buttonDidPressed:(id)arg1;
- (struct CGPoint)setButton:(id)arg1 origin:(struct CGPoint)arg2;
- (void)centerButtons:(id)arg1;
- (void)buildView;
- (id)initWithWidth:(double)arg1 recommedations:(id)arg2 multiColumn:(_Bool)arg3 delegate:(id)arg4;

@end

