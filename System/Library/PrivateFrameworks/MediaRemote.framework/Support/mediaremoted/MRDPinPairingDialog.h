/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:09 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MRDPinPairingDialogDelagate;
@class NSMutableArray, NSObject, NSString;

@interface MRDPinPairingDialog : NSObject {

	NSMutableArray* _clients;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSString* _titleKey;
	NSString* _pinKey;
	NSString* _messageKey;
	NSString* _timeoutKey;
	id<MRDPinPairingDialogDelagate> _delegate;

}

@property (assign,nonatomic) id<MRDPinPairingDialogDelagate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)closeForClient:(id)arg1 userCancelled:(char)arg2 ;
-(void)showWithPin:(id)arg1 forClient:(id)arg2 ;
-(id)init;
-(void)setDelegate:(id<MRDPinPairingDialogDelagate>)arg1 ;
-(void)dealloc;
-(id<MRDPinPairingDialogDelagate>)delegate;
-(void)closeForClient:(id)arg1 ;
-(void)closeAll;
@end

