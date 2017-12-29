/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/LanguageModeling.framework/LanguageModeling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSConditionLock;

@interface LMAssetQuery : NSObject {

	NSString* _language;
	NSConditionLock* _conditionLock;
	char _hasCompleted;
	char _waitTimedOut;

}

@property (readonly) char hasCompleted; 
-(void)_runInForeground:(char)arg1 ;
-(void)runInForeground;
-(void)runInBackground;
-(char)waitForCompletion;
-(void)dealloc;
-(char)hasCompleted;
-(id)initWithLanguage:(id)arg1 ;
@end

