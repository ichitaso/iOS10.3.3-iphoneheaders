/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIMovieScrubberTrackViewDataSource <NSObject>
@required
-(void)movieScrubberTrackView:(id)arg1 requestThumbnailImageForTimestamp:(id)arg2 isSummaryThumbnail:(char)arg3;
-(float)movieScrubberTrackViewThumbnailAspectRatio:(id)arg1;
-(double)movieScrubberTrackViewDuration:(id)arg1;
-(id)movieScrubberTrackView:(id)arg1 evenlySpacedTimestamps:(int)arg2 startingAt:(id)arg3 endingAt:(id)arg4;

@end
