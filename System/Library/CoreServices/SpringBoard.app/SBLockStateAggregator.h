/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLockStateAggregator : NSObject {

	unsigned _lockState;

}
+(id)sharedInstance;
-(id)_descriptionForLockState:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(char)hasAnyLockState;
-(unsigned)lockState;
-(void)_updateLockState;
@end

