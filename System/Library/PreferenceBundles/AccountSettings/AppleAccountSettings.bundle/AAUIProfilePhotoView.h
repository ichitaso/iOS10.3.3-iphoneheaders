/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UIButton, UIImage;

@interface AAUIProfilePhotoView : UIView {

	UIImageView* _photoView;
	UIButton* _editButton;
	char _isEditing;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,setter=setEditing:,nonatomic) char isEditing;              //@synthesize isEditing=_isEditing - In the implementation block
-(id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
-(void)layoutSubviews;
-(char)isEditing;
-(void)setEditing:(char)arg1 ;
-(void)setPhoto:(UIImage *)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(UIImage *)photo;
@end
