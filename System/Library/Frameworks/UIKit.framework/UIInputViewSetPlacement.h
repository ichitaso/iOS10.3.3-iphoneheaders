/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol UIInputViewSetPlacementDelegate;
@interface UIInputViewSetPlacement : NSObject <NSSecureCoding> {

	char _dirty;
	id<UIInputViewSetPlacementDelegate> delegate;
	float _extendedHeight;

}

@property (nonatomic,readonly) char showsInputViews; 
@property (nonatomic,readonly) char showsKeyboard; 
@property (nonatomic,readonly) char isUndocked; 
@property (nonatomic,readonly) char isInteractive; 
@property (assign,nonatomic) float extendedHeight;                                      //@synthesize extendedHeight=_extendedHeight - In the implementation block
@property (assign,nonatomic) id<UIInputViewSetPlacementDelegate> delegate; 
+(char)supportsSecureCoding;
+(id)placement;
+(id)encodablePlacementsForXPC;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIInputViewSetPlacementDelegate>)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id<UIInputViewSetPlacementDelegate>)delegate;
-(char)isInteractive;
-(float)alpha;
-(char)showsInputViews;
-(char)isUndocked;
-(char)showsKeyboard;
-(char)inputViewWillAppear;
-(void)setDirty;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)widthConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(unsigned)notificationsForTransitionToPlacement:(id)arg1 ;
-(char)accessoryViewWillAppear;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 includingIAV:(char)arg2 ;
-(Class)applicatorClassForKeyboard:(char)arg1 ;
-(id)applicatorInfoForOwner:(id)arg1 ;
-(void)checkSizeForOwner:(id)arg1 ;
-(float)extendedHeight;
-(void)setExtendedHeight:(float)arg1 ;
@end

