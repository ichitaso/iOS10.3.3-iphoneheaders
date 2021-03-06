/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/UsageBundles/MusicUsage.bundle/MusicUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUsage/PSStorageReporting.h>

@class MPMediaQuery, NSString;

@interface MusicUsageStorageReporter : NSObject <PSStorageReporting> {

	MPMediaQuery* _localSongsQuery;
	MPMediaQuery* _localMusicMoviesQuery;
	MPMediaQuery* _localMusicShowsQuery;
	unsigned long long _localSongsFileSize;
	unsigned long long _localMusicMoviesFileSize;
	unsigned long long _localMusicShowsFileSize;

}

@property (nonatomic,readonly) MPMediaQuery * localSongsQuery;                         //@synthesize localSongsQuery=_localSongsQuery - In the implementation block
@property (assign,nonatomic) unsigned long long localSongsFileSize;                    //@synthesize localSongsFileSize=_localSongsFileSize - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * localMusicMoviesQuery;                   //@synthesize localMusicMoviesQuery=_localMusicMoviesQuery - In the implementation block
@property (assign,nonatomic) unsigned long long localMusicMoviesFileSize;              //@synthesize localMusicMoviesFileSize=_localMusicMoviesFileSize - In the implementation block
@property (nonatomic,readonly) MPMediaQuery * localMusicShowsQuery;                    //@synthesize localMusicShowsQuery=_localMusicShowsQuery - In the implementation block
@property (assign,nonatomic) unsigned long long localMusicShowsFileSize;               //@synthesize localMusicShowsFileSize=_localMusicShowsFileSize - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalMusicShowsFileSize:(unsigned long long)arg1 ;
-(void)usageBundleApp:(id)arg1 willDisplaySpecifier:(id*)arg2 ;
-(MPMediaQuery *)localMusicMoviesQuery;
-(void)setLocalSongsFileSize:(unsigned long long)arg1 ;
-(unsigned long long)localMusicMoviesFileSize;
-(unsigned long long)localSongsFileSize;
-(MPMediaQuery *)localSongsQuery;
-(void)setLocalMusicMoviesFileSize:(unsigned long long)arg1 ;
-(MPMediaQuery *)localMusicShowsQuery;
-(unsigned long long)localMusicShowsFileSize;
-(Class)usageDetailControllerClassForUsageBundleApp:(id)arg1 ;
-(void)reloadSizeForCategoryIdentifier:(id)arg1 ;
-(id)queryForCategoryIdentifier:(id)arg1 ;
-(id)init;
-(id)usageBundleApps;
-(float)sizeForCategory:(id)arg1 ;
-(char)allowDeletionForCategory:(id)arg1 ;
-(char)deleteDataForCategory:(id)arg1 withError:(id*)arg2 ;
-(unsigned long long)totalSize;
@end

