/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UIView.h>

@class NSString, NSDictionary;

@interface IMNowPlayingContentLabel : UIView {

	NSString* _fullString;
	NSDictionary* _stringAttributes;
	CTFramesetterRef _framesetter;
	CTFrameRef _frame;
	char _highlighted;

}

@property (assign,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(id)stringAttributes;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)tintColorDidChange;
-(void)setHighlighted:(char)arg1 ;
-(void)update;
-(char)highlighted;
@end

