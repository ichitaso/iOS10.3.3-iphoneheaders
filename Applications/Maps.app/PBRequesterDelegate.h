/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBRequesterDelegate <NSObject>
@optional
-(void)requesterWillSendRequestForEstablishedConnection:(id)arg1;
-(void)requester:(id)arg1 didReceiveResponse:(id)arg2 forRequest:(id)arg3;
-(void)requesterDidFinish:(id)arg1;
-(void)requesterDidCancel:(id)arg1;
-(void)requester:(id)arg1 didFailWithError:(id)arg2;

@end

