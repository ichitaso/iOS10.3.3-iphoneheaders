/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIImageView.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>

@class NSLayoutConstraint, UIInterfaceAction, NSString;

@interface _UIInterfaceActionImagePropertyView : UIImageView <UIInterfaceActionDisplayPropertyObserver> {

	NSLayoutConstraint* _imageWidthConstraint;
	NSLayoutConstraint* _imageHeightConstraint;
	UIInterfaceAction* _action;
	NSString* _imageProperty;

}

@property (nonatomic,readonly) UIInterfaceAction * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) NSString * imageProperty;                       //@synthesize imageProperty=_imageProperty - In the implementation block
@property (nonatomic,readonly) char isUsedToOccupySpaceIfNoImage; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(UIInterfaceAction *)action;
-(void)tintColorDidChange;
-(void)_reloadImageContent;
-(CGSize)_sizeToOccupy;
-(id)_visualStyle;
-(void)_applyVisualStyleToImageView;
-(void)_applyVisualStyle;
-(id)_interfaceActionViewState;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(id)initWithAction:(id)arg1 imageProperty:(id)arg2 ;
-(char)isUsedToOccupySpaceIfNoImage;
-(NSString *)imageProperty;
@end

