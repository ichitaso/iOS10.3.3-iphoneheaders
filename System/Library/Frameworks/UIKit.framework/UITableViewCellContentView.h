/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UILayoutEngineSuspending.h>

@class CALayer, NSString;

@interface UITableViewCellContentView : UIView <_UILayoutEngineSuspending> {

	char _isLayoutEngineSuspended;
	CALayer* _mask;

}

@property (nonatomic,retain) CALayer * mask;                                                                                             //@synthesize mask=_mask - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setLayoutEngineSuspended:,getter=_isLayoutEngineSuspended,nonatomic) char _layoutEngineSuspended;              //@synthesize isLayoutEngineSuspended=_isLayoutEngineSuspended - In the implementation block
+(id)classFallbacksForKeyedArchiver;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)_setLayoutEngineSuspended:(char)arg1 ;
-(CALayer *)mask;
-(void)setMask:(CALayer *)arg1 ;
-(char)_isLayoutEngineSuspended;
-(id)_cell;
-(void)_tableViewCellContentViewCommonSetup;
@end

