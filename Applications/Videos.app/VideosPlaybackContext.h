/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPQueryPlaybackContext.h>

@interface VideosPlaybackContext : MPQueryPlaybackContext {

	double _startTimeForFirstItem;

}

@property (assign,nonatomic) double startTimeForFirstItem;              //@synthesize startTimeForFirstItem=_startTimeForFirstItem - In the implementation block
+(Class)queueFeederClass;
-(void)setStartTimeForFirstItem:(double)arg1 ;
-(double)startTimeForFirstItem;
-(id)initWithQuery:(id)arg1 ;
-(id)initWithMediaItem:(id)arg1 ;
@end

