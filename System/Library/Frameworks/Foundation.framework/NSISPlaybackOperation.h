/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSISVariableDelegate.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@interface NSISPlaybackOperation : NSObject <NSISVariableDelegate> {

	NSMutableDictionary* oldIdentsToNewVariables;
	NSMutableSet* variablesToIntegralize;
	NSMutableSet* userObservableVariables;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)firstAnchor;
-(id)secondAnchor;
-(id)unwrapVariable:(id)arg1 ;
-(id)unwrapLinearExpression:(id)arg1 ;
-(void)playbackOneAction:(id)arg1 onEngine:(id)arg2 ;
-(double)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(id)firstItem;
-(id)secondItem;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(char)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
@end

