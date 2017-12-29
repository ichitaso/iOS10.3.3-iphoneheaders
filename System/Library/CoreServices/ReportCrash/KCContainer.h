/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/ReportCrash
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ReportCrash/ReportCrash-Structs.h>
@class NSMutableDictionary;

@interface KCContainer : NSObject {

	unsigned _type;
	NSMutableDictionary* _data;
	int _pid;
	NSMutableDictionary* _truncated_threads;
	int _unindexed_frames;
	int _invalid_images;
	unsigned long long _tag;

}

@property (nonatomic,readonly) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long tag;                               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * truncated_threads;              //@synthesize truncated_threads=_truncated_threads - In the implementation block
@property (assign,nonatomic) int unindexed_frames;                                   //@synthesize unindexed_frames=_unindexed_frames - In the implementation block
@property (assign,nonatomic) int invalid_images;                                     //@synthesize invalid_images=_invalid_images - In the implementation block
-(id)initWithKCData:(kcdata_iter*)arg1 ;
-(void)omit;
-(NSMutableDictionary *)truncated_threads;
-(int)unindexed_frames;
-(void)setUnindexed_frames:(int)arg1 ;
-(int)invalid_images;
-(void)setInvalid_images:(int)arg1 ;
-(unsigned)type;
-(NSMutableDictionary *)data;
-(unsigned long long)tag;
-(void)setPid:(int)arg1 ;
-(int)pid;
@end
