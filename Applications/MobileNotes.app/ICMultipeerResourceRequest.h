/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ICNote, NSUUID, NSMutableSet;

@interface ICMultipeerResourceRequest : NSOperation {

	char _isSuccessful;
	char _isExecuting;
	char _isFinished;
	ICNote* _note;
	NSUUID* _deviceUUID;
	NSMutableSet* _failedDevices;

}

@property (assign,nonatomic) char isExecuting;                          //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign,nonatomic) char isFinished;                           //@synthesize isFinished=_isFinished - In the implementation block
@property (assign) char isSuccessful;                                   //@synthesize isSuccessful=_isSuccessful - In the implementation block
@property (readonly) ICNote * note;                                     //@synthesize note=_note - In the implementation block
@property (nonatomic,retain) NSUUID * deviceUUID;                       //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedDevices;              //@synthesize failedDevices=_failedDevices - In the implementation block
-(void)setFailedDevices:(NSMutableSet *)arg1 ;
-(void)setIsSuccessful:(char)arg1 ;
-(NSMutableSet *)failedDevices;
-(id)init;
-(char)isFinished;
-(char)isExecuting;
-(void)startRequest;
-(char)isConcurrent;
-(char)isSuccessful;
-(ICNote *)note;
-(void)didFinish:(id)arg1 ;
-(void)setIsFinished:(char)arg1 ;
-(void)setIsExecuting:(char)arg1 ;
-(void)setDeviceUUID:(NSUUID *)arg1 ;
-(NSUUID *)deviceUUID;
@end

