/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:49 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCCaptionsSourceDelegate <NSObject>
@required
-(void)streamToken:(int)arg1 didEnableCaptions:(char)arg2 error:(id)arg3;
-(void)streamToken:(int)arg1 didDisableCaptions:(char)arg2 error:(id)arg3;
-(void)streamToken:(int)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(int)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(int)arg1 didUpdateCaptions:(id)arg2;

@end

