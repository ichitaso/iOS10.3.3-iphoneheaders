/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CBPairingAgentDelegate, CBPairingAgentParentDelegate;
@interface CBPairingAgent : NSObject {

	char _useOOBMode;
	id<CBPairingAgentDelegate> _delegate;
	id<CBPairingAgentParentDelegate> _parentManager;

}

@property (assign,nonatomic,__weak) id<CBPairingAgentParentDelegate> parentManager;              //@synthesize parentManager=_parentManager - In the implementation block
@property (assign,nonatomic,__weak) id<CBPairingAgentDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char useOOBMode;                                                    //@synthesize useOOBMode=_useOOBMode - In the implementation block
-(void)setDelegate:(id<CBPairingAgentDelegate>)arg1 ;
-(void)dealloc;
-(id<CBPairingAgentDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithParentManager:(id)arg1 ;
-(void)handlePairingMessage:(unsigned short)arg1 args:(id)arg2 ;
-(void)updateRegistration;
-(void)setParentManager:(id<CBPairingAgentParentDelegate>)arg1 ;
-(id<CBPairingAgentParentDelegate>)parentManager;
-(void)handlePairingRequested:(id)arg1 ;
-(void)handlePairingCompleted:(id)arg1 ;
-(void)handleUnpaired:(id)arg1 ;
-(char)isPeerCloudPaired:(id)arg1 ;
-(id)retrievePairedPeers;
-(void)pairPeer:(id)arg1 ;
-(void)respondToPairingRequest:(id)arg1 type:(int)arg2 accept:(char)arg3 data:(id)arg4 ;
-(void)setUseOOBMode:(char)arg1 ;
-(id)retrieveOOBDataForPeer:(id)arg1 ;
-(void)setOOBPairingEnabled:(char)arg1 forPeer:(id)arg2 ;
-(char)useOOBMode;
-(char)isPeerPaired:(id)arg1 ;
-(void)unpairPeer:(id)arg1 ;
@end

