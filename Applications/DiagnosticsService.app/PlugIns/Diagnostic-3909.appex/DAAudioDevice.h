/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3909.appex/Diagnostic-3909
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-3909/DAAudioPlayAndRecordDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSObject, DAPlayAndRecord, NSError, NSMutableArray, NSString;

@interface DAAudioDevice : NSObject <DAAudioPlayAndRecordDelegate> {

	char _sendRawData;
	char _isCancelled;
	char _sequentialAudioInput;
	NSURL* _fileURL;
	unsigned _outputID;
	unsigned _volume;
	NSObject*<OS_dispatch_semaphore> _audioPlayingSemaphore;
	DAPlayAndRecord* _playAndRecord;
	NSError* _error;
	NSMutableArray* _results;

}

@property (nonatomic,retain) NSURL * fileURL;                                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) unsigned outputID;                                                   //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) unsigned volume;                                                     //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) char sendRawData;                                                    //@synthesize sendRawData=_sendRawData - In the implementation block
@property (assign,nonatomic) char isCancelled;                                                    //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> audioPlayingSemaphore;              //@synthesize audioPlayingSemaphore=_audioPlayingSemaphore - In the implementation block
@property (nonatomic,retain) DAPlayAndRecord * playAndRecord;                                     //@synthesize playAndRecord=_playAndRecord - In the implementation block
@property (assign,nonatomic) char sequentialAudioInput;                                           //@synthesize sequentialAudioInput=_sequentialAudioInput - In the implementation block
@property (nonatomic,retain) NSError * error;                                                     //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSMutableArray * results;                                            //@synthesize results=_results - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)sequentialAudioInput;
-(id)initWithSequentialAudioInput:(char)arg1 error:(id*)arg2 ;
-(char)sendRawData;
-(id)playSignalFile:(id)arg1 fileName:(id)arg2 fromOutput:(unsigned)arg3 atVolume:(id)arg4 withChannel:(id)arg5 sendRawData:(char)arg6 error:(id*)arg7 ;
-(unsigned)outputID;
-(void)setOutputID:(unsigned)arg1 ;
-(void)setSendRawData:(char)arg1 ;
-(void)setSequentialAudioInput:(char)arg1 ;
-(void)playAndRecordFinished;
-(char)initilizeAudioSessionWithError:(id*)arg1 ;
-(id)getBuiltInMicrophonePortWithError:(id*)arg1 ;
-(id)numberOfInputComponents;
-(void)setPlayAndRecord:(DAPlayAndRecord *)arg1 ;
-(char)startPlayAndRecordWithError:(id*)arg1 ;
-(id)getAllMicrophoneSourceForPort:(id)arg1 error:(id*)arg2 ;
-(DAPlayAndRecord *)playAndRecord;
-(char)isHeadphonesConnected;
-(void)setAudioPlayingSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)audioPlayingSemaphore;
-(void)cancel;
-(char)isCancelled;
-(unsigned)volume;
-(void)setVolume:(unsigned)arg1 ;
-(NSURL *)fileURL;
-(NSMutableArray *)results;
-(void)setResults:(NSMutableArray *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setIsCancelled:(char)arg1 ;
@end

