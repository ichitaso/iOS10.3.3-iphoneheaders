/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/TV-Structs.h>
#import <UIKit/UILabel.h>

@interface VideosCollapsingLabel : UILabel {

	char _collapsed;

}

@property (getter=isCollapsed) char collapsed;              //@synthesize collapsed=_collapsed - In the implementation block
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(CGSize)intrinsicContentSize;
-(char)isCollapsed;
-(void)setCollapsed:(char)arg1 ;
@end

