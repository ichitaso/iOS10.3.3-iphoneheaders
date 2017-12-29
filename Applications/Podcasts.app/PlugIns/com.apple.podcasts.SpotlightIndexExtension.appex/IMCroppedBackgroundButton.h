/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
#import <UIKit/UIButton.h>

@class UIImage;

@interface IMCroppedBackgroundButton : UIButton {

	UIImage* _normalImage;
	UIImage* _highlightedImage;
	UIImage* _disabledImage;
	UIImage* _selectedImage;
	UIEdgeInsets _capInsets;

}

@property (nonatomic,retain) UIImage * normalImage;                   //@synthesize normalImage=_normalImage - In the implementation block
@property (nonatomic,retain) UIImage * highlightedImage;              //@synthesize highlightedImage=_highlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * disabledImage;                 //@synthesize disabledImage=_disabledImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                 //@synthesize selectedImage=_selectedImage - In the implementation block
@property (assign,nonatomic) UIEdgeInsets capInsets;                  //@synthesize capInsets=_capInsets - In the implementation block
-(void)sharedInit;
-(void)setDisabledImage:(UIImage *)arg1 ;
-(UIImage *)disabledImage;
-(void)setNormalImage:(UIImage *)arg1 ;
-(void)resizeImages;
-(id)imageForSelfWidth:(id)arg1 ;
-(void)setCapInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(UIEdgeInsets)capInsets;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned)arg2 ;
-(UIImage *)highlightedImage;
-(UIImage *)selectedImage;
-(void)setHighlightedImage:(UIImage *)arg1 ;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(UIImage *)normalImage;
@end

