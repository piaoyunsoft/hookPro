//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface MMAssetCell : UITableViewCell
{
    NSArray *_rowAssets;
}

@property(retain, nonatomic) NSArray *rowAssets; // @synthesize rowAssets=_rowAssets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setAssets:(id)arg1;
- (id)initWithAssets:(id)arg1 reuseIdentifier:(id)arg2;

@end
