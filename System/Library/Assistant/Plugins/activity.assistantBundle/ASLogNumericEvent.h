/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/activity.assistantBundle/activity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SALogNumericEvent.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface ASLogNumericEvent : SALogNumericEvent <AFServiceCommand>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logNumericEventWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

