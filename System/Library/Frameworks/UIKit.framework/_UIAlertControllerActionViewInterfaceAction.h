/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:04 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInterfaceAction.h>
#import <UIKit/UIAlertActionMutablePropertyObservering.h>

@class UIAlertAction, _UIAlertControllerActionView, NSString;

@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction <UIAlertActionMutablePropertyObservering> {

	UIAlertAction* _underlyingAlertAction;

}

@property (nonatomic,readonly) _UIAlertControllerActionView * alertControllerActionView; 
@property (nonatomic,readonly) UIAlertAction * underlyingAlertAction;                                 //@synthesize underlyingAlertAction=_underlyingAlertAction - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithAlertControllerActionView:(id)arg1 ;
-(void)dealloc;
-(int)type;
-(int)_typeForDeterminingViewRepresentation;
-(void)_action:(id)arg1 changedToTitle:(id)arg2 ;
-(void)_action:(id)arg1 changedToTitleTextAlignment:(int)arg2 ;
-(void)_action:(id)arg1 changedToEnabled:(char)arg2 ;
-(void)_action:(id)arg1 changedToChecked:(char)arg2 ;
-(void)_action:(id)arg1 changedToBePreferred:(char)arg2 ;
-(void)_action:(id)arg1 updatedImageTintColor:(id)arg2 ;
-(void)_action:(id)arg1 updatedTitleTextColor:(id)arg2 ;
-(id)classificationTitle;
-(id)leadingImage;
-(UIAlertAction *)underlyingAlertAction;
-(_UIAlertControllerActionView *)alertControllerActionView;
-(void)_initializeStateFromUnderlyingAlertAction;
@end

