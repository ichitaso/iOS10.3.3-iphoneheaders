/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/com.apple.mobilenotes.SharingExtension-Structs.h>
#import <UIKit/UIView.h>

@class UIImage;

@interface NotesTextureView : UIView {

	UIImage* _image;
	CGSize _phase;

}

@property (nonatomic,retain) UIImage * image;              //@synthesize image=_image - In the implementation block
@property (assign) CGSize phase;                           //@synthesize phase=_phase - In the implementation block
-(CGSize)phase;
-(void)setImage:(UIImage *)arg1 ;
-(void)setPhase:(CGSize)arg1 ;
-(UIImage *)image;
@end

