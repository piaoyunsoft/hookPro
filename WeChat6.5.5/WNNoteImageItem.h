//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct  3 2016 20:04:13).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WNNoteFavItemBase.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WNNoteImageItem : WNNoteFavItemBase
{
    _Bool _downloaded;
    int _width;
    int _height;
    NSString *_localPath;
    NSString *_bigImagePath;
}

@property(retain, nonatomic) NSString *bigImagePath; // @synthesize bigImagePath=_bigImagePath;
@property(nonatomic) int height; // @synthesize height=_height;
@property(nonatomic) int width; // @synthesize width=_width;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(nonatomic) _Bool downloaded; // @synthesize downloaded=_downloaded;
- (void).cxx_destruct;
- (id)init;

@end
