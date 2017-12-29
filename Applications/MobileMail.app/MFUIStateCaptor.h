/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFUIStateCaptor : NSObject {

	char _isCapturingUIState;

}

@property (assign,nonatomic) char isCapturingUIState;              //@synthesize isCapturingUIState=_isCapturingUIState - In the implementation block
+(id)sharedCaptor;
-(void)dumpFullUIStateToChannel:(unsigned)arg1 ;
-(void)dumpViewControllerHierarchyToChannel:(unsigned)arg1 ;
-(void)dumpAllViewControllerDescriptionsToChannel:(unsigned)arg1 ;
-(void)dumpViewHierarchyToChannel:(unsigned)arg1 ;
-(void)_captureUIStateWithTitle:(id)arg1 channel:(unsigned)arg2 captureBlock:(/*^block*/id)arg3 ;
-(char)isCapturingUIState;
-(void)setIsCapturingUIState:(char)arg1 ;
-(id)redactedStringForString:(id)arg1 ;
@end

