/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBWalletPrearmRecognizerDelegate;
@class BSTimer;

@interface SBWalletPrearmRecognizer : NSObject {

	id<SBWalletPrearmRecognizerDelegate> _delegate;
	double _timeout;
	BSTimer* _timer;
	char _invalidated;

}
-(double)_computeDoubleTapTimeout;
-(void)_invalidateForFailureReason:(unsigned)arg1 ;
-(void)_invalidateForSuccess;
-(void)startRecognizing;
-(void)menuButtonSinglePress;
-(void)menuButtonDoublePress;
-(void)invalidate;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)_invalidate;
@end

