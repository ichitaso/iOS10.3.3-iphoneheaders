/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBLeafIcon.h>

@class SBBookmark, UIWebClip, NSURL;

@interface SBBookmarkIcon : SBLeafIcon {

	SBBookmark* _bookmark;

}

@property (nonatomic,readonly) SBBookmark * bookmark;              //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) UIWebClip * webClip; 
@property (nonatomic,readonly) NSURL * launchURL; 
-(id)folderTitleOptions;
-(id)folderFallbackTitle;
-(id)matchedWebApplication;
-(char)isBookmarkIcon;
-(id)initWithBookmark:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)launchURL;
-(UIWebClip *)webClip;
-(SBBookmark *)bookmark;
@end

