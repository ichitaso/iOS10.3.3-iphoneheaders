/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Music.app/PlugIns/RecentlyPlayedTodayExtension.appex/RecentlyPlayedTodayExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RecentlyPlayedTodayExtension/RecentlyPlayedTodayExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MusicMonogramArtworkToken : NSObject <NSCopying> {

	NSString* _fullName;
	int _style;

}

@property (nonatomic,copy) NSString * fullName;              //@synthesize fullName=_fullName - In the implementation block
@property (assign,nonatomic) int style;                      //@synthesize style=_style - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)style;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
@end

