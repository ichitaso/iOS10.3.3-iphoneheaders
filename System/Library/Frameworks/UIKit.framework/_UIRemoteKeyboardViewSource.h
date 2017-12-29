/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, UIInputViewSet;


@protocol _UIRemoteKeyboardViewSource <NSObject>
@property (nonatomic,retain) id<_UIRemoteKeyboardControllerDelegate> controllerDelegate; 
@property (nonatomic,readonly) UIView * hostView; 
@property (nonatomic,readonly) UIInputViewSet * inputViewSet; 
@property (nonatomic,readonly) char isOnScreenRotating; 
@required
-(UIInputViewSet *)inputViewSet;
-(UIView *)hostView;
-(char)isOnScreenRotating;
-(void)checkPlaceholdersForRemoteKeyboards;
-(id<_UIRemoteKeyboardControllerDelegate>)controllerDelegate;
-(void)setControllerDelegate:(id)arg1;

@end

