/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRDNowPlayingDataSourceDelegate;
#import <mediaremoted/mediaremoted-Structs.h>
@class NSString;

@interface MRDNowPlayingDataSource : NSObject {

	char _nowPlayingApplicationIsPlaying;
	char _nowPlayingApplicationIsInterrupted;
	char _anyApplicationIsPlaying;
	id<MRDNowPlayingDataSourceDelegate> _delegate;
	NSString* _nowPlayingApplicationDisplayID;
	int _nowPlayingApplicationPID;

}

@property (assign,nonatomic) id<MRDNowPlayingDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * nowPlayingApplicationDisplayID;               //@synthesize nowPlayingApplicationDisplayID=_nowPlayingApplicationDisplayID - In the implementation block
@property (nonatomic,readonly) int nowPlayingApplicationPID;                            //@synthesize nowPlayingApplicationPID=_nowPlayingApplicationPID - In the implementation block
@property (nonatomic,readonly) char nowPlayingApplicationIsPlaying;                     //@synthesize nowPlayingApplicationIsPlaying=_nowPlayingApplicationIsPlaying - In the implementation block
@property (nonatomic,readonly) char nowPlayingApplicationIsInterrupted;                 //@synthesize nowPlayingApplicationIsInterrupted=_nowPlayingApplicationIsInterrupted - In the implementation block
@property (nonatomic,readonly) char anyApplicationIsPlaying;                            //@synthesize anyApplicationIsPlaying=_anyApplicationIsPlaying - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(char)shouldSendCommand:(id)arg1 ;
-(int)nowPlayingApplicationPID;
-(char)nowPlayingApplicationIsPlaying;
-(NSString *)nowPlayingApplicationDisplayID;
-(char)nowPlayingApplicationIsInterrupted;
-(char)anyApplicationIsPlaying;
-(void)setDelegate:(id<MRDNowPlayingDataSourceDelegate>)arg1 ;
-(id<MRDNowPlayingDataSourceDelegate>)delegate;
-(id)pickableRoutesForCategory:(id)arg1 ;
@end
