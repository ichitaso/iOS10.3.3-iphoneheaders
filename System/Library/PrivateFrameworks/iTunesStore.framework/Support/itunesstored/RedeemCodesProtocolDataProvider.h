/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/DaemonProtocolDataProvider.h>

@class ISDialogButton;

@interface RedeemCodesProtocolDataProvider : DaemonProtocolDataProvider {

	ISDialogButton* _dialogButton;

}

@property (retain) ISDialogButton * dialogButton;              //@synthesize dialogButton=_dialogButton - In the implementation block
-(void)setDialogButton:(ISDialogButton *)arg1 ;
-(ISDialogButton *)dialogButton;
-(void)dealloc;
-(char)_runServerAuthenticationOperation:(id)arg1 error:(id*)arg2 ;
@end

