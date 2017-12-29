/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAnimation.h>

@interface UITransformAnimation : UIAnimation {

	CGAffineTransform _startTransform;
	CGAffineTransform _endTransform;

}
-(void)setProgress:(float)arg1 ;
-(CGAffineTransform)_transformWithMultiplier:(float)arg1 ;
-(void)setStartTransform:(CGAffineTransform)arg1 ;
-(void)setEndTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transformForFraction:(float)arg1 ;
@end
