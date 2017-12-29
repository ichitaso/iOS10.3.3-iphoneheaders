/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImageView.h>

@class UIImage;

@interface SBDarkeningImageView : UIImageView {

	UIImage* _baseImage;
	float _brightness;

}

@property (assign,nonatomic) float brightness; 
-(void)setImage:(id)arg1 brightness:(float)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(id)description;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
@end

