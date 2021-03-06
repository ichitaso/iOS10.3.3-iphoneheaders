/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/com.apple.mobilenotes.SharingExtension-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIImageView;

@interface ICSEImagesView : UIView {

	NSArray* _imageViews;
	UIImageView* _movieGlyph;

}

@property (nonatomic,retain) NSArray * imageViews;                  //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) UIImageView * movieGlyph;              //@synthesize movieGlyph=_movieGlyph - In the implementation block
-(void)setImage:(id)arg1 movieDuration:(SCD_Struct_IC5)arg2 atIndex:(unsigned)arg3 ;
-(UIImageView *)movieGlyph;
-(void)setMovieGlyph:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(void)setImage:(id)arg1 atIndex:(unsigned)arg2 ;
@end

