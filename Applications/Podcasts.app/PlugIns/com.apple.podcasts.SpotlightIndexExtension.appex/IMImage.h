/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UIImage.h>

@class UIImage;

@interface IMImage : UIImage {

	float _capWidth;
	UIImage* _left;
	UIImage* _right;
	UIImage* _middle;

}
+(id)imageNamed:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 capWidth:(float)arg2 scale:(float)arg3 orientation:(int)arg4 ;
-(void)dealloc;
-(void)drawInRect:(CGRect)arg1 ;
-(id)resizableImageWithCapInsets:(UIEdgeInsets)arg1 ;
-(void)drawInRect:(CGRect)arg1 blendMode:(int)arg2 alpha:(float)arg3 ;
-(id)stretchableImageWithLeftCapWidth:(int)arg1 topCapHeight:(int)arg2 ;
@end
