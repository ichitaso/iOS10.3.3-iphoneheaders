/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIResponder;

@interface _UITouchForwardingRecipient : NSObject {

	int recordedPhase;
	int autocompletedPhase;
	UIResponder* fromResponder;
	UIResponder* responder;

}

@property (assign,nonatomic,__weak) UIResponder * fromResponder; 
@property (assign,nonatomic,__weak) UIResponder * responder; 
@property (assign,nonatomic) int recordedPhase; 
@property (assign,nonatomic) int autocompletedPhase; 
-(id)description;
-(void)setResponder:(UIResponder *)arg1 ;
-(UIResponder *)responder;
-(int)recordedPhase;
-(int)autocompletedPhase;
-(void)setRecordedPhase:(int)arg1 ;
-(void)setAutocompletedPhase:(int)arg1 ;
-(id)initWithResponder:(id)arg1 fromResponder:(id)arg2 ;
-(UIResponder *)fromResponder;
-(void)setFromResponder:(UIResponder *)arg1 ;
@end
