/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/NTKCustomization.bundle/NTKCustomization
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NTKCustomization/NTKCCDetailTableViewCell.h>

@protocol NTKCCFaceDetailToggleCellDelegate;
@class UISwitch;

@interface NTKCCFaceDetailToggleCell : NTKCCDetailTableViewCell {

	UISwitch* _switch;
	id<NTKCCFaceDetailToggleCellDelegate> _delegate;

}

@property (assign,nonatomic) char on; 
@property (assign,nonatomic,__weak) id<NTKCCFaceDetailToggleCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)reuseIdentifier;
-(void)_switchToggled;
-(id)init;
-(void)layoutSubviews;
-(void)setDelegate:(id<NTKCCFaceDetailToggleCellDelegate>)arg1 ;
-(float)rowHeight;
-(id<NTKCCFaceDetailToggleCellDelegate>)delegate;
-(char)on;
-(void)setOn:(char)arg1 ;
@end
