/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUILockScreenDisableAssertion.h>

@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {

	NSString* _identifier;
	SBFAuthenticationAssertion* _disableLockAssertion;

}
+(void)initialize;
-(void)invalidate;
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(id)arg1 ;
@end

