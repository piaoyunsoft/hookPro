//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBar.h"

@class MDMultiVideoOnLookersHandler, NSMutableArray, UIView;

@interface MDOnLookersSearchBar : MMSearchBar
{
    MDMultiVideoOnLookersHandler *_onlookerHandler;
    NSMutableArray *_resultArray;
    UIView *_backView;
}

@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) NSMutableArray *resultArray; // @synthesize resultArray=_resultArray;
@property(retain, nonatomic) MDMultiVideoOnLookersHandler *onlookerHandler; // @synthesize onlookerHandler=_onlookerHandler;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)filterContentForSearchText:(id)arg1;
- (void)sendSearchText:(id)arg1;
- (void)willShowSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)searchController:(id)arg1 searchBarSearchButtonClicked:(id)arg2;
- (void)searchController:(id)arg1 textDidChange:(id)arg2;
- (id)coverViewWith:(struct CGRect)arg1;
- (id)initWithContainerController:(id)arg1;

@end
