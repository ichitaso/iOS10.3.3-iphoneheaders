/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSString;

@interface SBWindowHideRequest : NSObject {

	NSString* _reason;
	SBWindowLevelRange_struct _windowLevelRange;

}

@property (assign) SBWindowLevelRange_struct windowLevelRange;              //@synthesize windowLevelRange=_windowLevelRange - In the implementation block
@property (copy) NSString * reason;                                         //@synthesize reason=_reason - In the implementation block
+(id)hideRequestWithWindowLevelRange:(SBWindowLevelRange_struct)arg1 reason:(id)arg2 ;
-(void)setWindowLevelRange:(SBWindowLevelRange_struct)arg1 ;
-(SBWindowLevelRange_struct)windowLevelRange;
-(id)description;
-(NSString *)reason;
-(void)setReason:(NSString *)arg1 ;
@end

