/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDevice : NSObject
+(id)currentDevice;
-(unsigned)numberOfCPUCores;
-(void)currentMemoryStatistics:(unsigned*)arg1 rsize:(unsigned*)arg2 available:(unsigned*)arg3 total:(unsigned*)arg4 ;
-(char)trackPadScrollDirectionIsNatural;
-(char)isInternalInstall;
-(char)hasNetwork;
@end
