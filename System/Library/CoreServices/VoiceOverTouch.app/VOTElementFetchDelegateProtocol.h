/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VOTElementFetchDelegateProtocol
@required
-(void)elementFetchFoundElement:(id)arg1 needsForceCacheUpdate:(char)arg2 direction:(int)arg3 generation:(unsigned long long)arg4;
-(void)elementsRetrieved:(id)arg1 finished:(char)arg2;
-(void)elementsCounted:(int)arg1;
-(void)elementFetchFoundDirectTouchElements:(id)arg1;
-(void)didSearchForOpaqueElement;

@end

