/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/com.apple.mobilenotes.SharingExtension-Structs.h>
#import <UIKit/UIView.h>

@class NotesTextureView, NSLayoutConstraint;

@interface NotesTextureBackgroundView : UIView {

	char _scrollsTexture;
	NotesTextureView* _textureView;
	NSLayoutConstraint* _textureYConstraint;
	NSLayoutConstraint* _textureHeightConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * textureYConstraint;                   //@synthesize textureYConstraint=_textureYConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textureHeightConstraint;              //@synthesize textureHeightConstraint=_textureHeightConstraint - In the implementation block
@property (nonatomic,readonly) NotesTextureView * textureView;                          //@synthesize textureView=_textureView - In the implementation block
@property (assign) char scrollsTexture;                                                 //@synthesize scrollsTexture=_scrollsTexture - In the implementation block
+(id)colorWithPaperTexturePatternImage;
+(id)textureImage;
-(id)initWithFrame:(CGRect)arg1 scrollingTextures:(char)arg2 hasAlpha:(char)arg3 ;
-(NotesTextureView *)textureView;
-(void)commonInitWithScrollingTextures:(char)arg1 hasAlpha:(char)arg2 ;
-(void)setTextureYConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTextureHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)textureYConstraint;
-(NSLayoutConstraint *)textureHeightConstraint;
-(char)scrollsTexture;
-(float)heightByCoveringHeight:(float)arg1 withImage:(id)arg2 ;
-(void)setScrollsTexture:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

