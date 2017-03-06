//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MDEmotion : NSObject
{
    unsigned long long flag;
    NSString *e_eid;
    NSString *e_fileName;
    NSString *e_description;
    NSString *e_keyboard;
    NSString *e_mark;
    NSString *e_goto;
    unsigned int e_width;
    unsigned int e_length;
    unsigned int e_index;
    _Bool e_hasDownload;
    NSString *e_middlePath;
    NSString *e_largePath;
    NSString *e_msgBody;
    int e_ext;
    int e_dataState;
}

+ (id)DictionaryToMDEmotion:(id)arg1 packetid:(id)arg2;
+ (id)MDEmotionToDictionary:(id)arg1;
@property(retain, nonatomic) NSString *e_goto; // @synthesize e_goto;
@property(retain, nonatomic) NSString *e_mark; // @synthesize e_mark;
@property(nonatomic) int e_dataState; // @synthesize e_dataState;
@property(nonatomic) int e_ext; // @synthesize e_ext;
@property(retain, nonatomic) NSString *e_msgBody; // @synthesize e_msgBody;
@property(retain, nonatomic) NSString *e_largePath; // @synthesize e_largePath;
@property(retain, nonatomic) NSString *e_middlePath; // @synthesize e_middlePath;
@property(nonatomic) _Bool e_hasDownload; // @synthesize e_hasDownload;
@property(nonatomic) unsigned int e_length; // @synthesize e_length;
@property(nonatomic) unsigned int e_width; // @synthesize e_width;
@property(nonatomic) unsigned int e_index; // @synthesize e_index;
@property(retain, nonatomic) NSString *e_keyboard; // @synthesize e_keyboard;
@property(retain, nonatomic) NSString *e_description; // @synthesize e_description;
@property(retain, nonatomic) NSString *e_fileName; // @synthesize e_fileName;
@property(retain, nonatomic) NSString *e_eid; // @synthesize e_eid;
@property(readonly, nonatomic) unsigned long long flag; // @synthesize flag;
- (_Bool)isGifEmotion;
- (id)getFullLargePath;
- (id)getFullMiddlePath;
- (id)description;
- (void)mergeLocalState:(id)arg1;
- (void)mergeFromEmotion:(id)arg1;
- (void)setDataState:(int)arg1;
- (void)setExt:(id)arg1;
- (void)setGoto:(id)arg1;
- (void)setMsgBody:(id)arg1;
- (void)setLargePath:(id)arg1;
- (void)setMiddlePath:(id)arg1;
- (void)setHasDownload:(id)arg1;
- (void)setIndex:(id)arg1;
- (void)setLength:(id)arg1;
- (void)setWidth:(id)arg1;
- (void)setMark:(id)arg1;
- (void)setKeyboard:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setEid:(id)arg1;
- (void)dealloc;

@end
