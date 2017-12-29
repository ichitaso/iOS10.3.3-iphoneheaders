/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, NSObject;

@interface BWIrisMovieGenerator : NSObject {

	char _sourceIsFrontFacingCamera;
	char _sampleReferenceMoviesEnabled;
	SCD_Struct_BW2 _masterMovieDuration;
	OpaqueCMByteStreamRef _byteStream;
	OpaqueFigFormatReaderRef _masterMovieReader;
	char _masterMovieParsingComplete;
	int _masterMovieAudioExtractionID;
	OpaqueFigSimpleMutexRef _movieInfoAndCallbacksMutex;
	NSMutableArray* _movieInfoAndCallbacks;
	NSObject*<OS_dispatch_queue> _movieGenerationQueue;
	char _suspended;

}

@property (assign) char suspended; 
+(void)initialize;
+(char)_addStillImageTimeMetadataTrackToAssetWriter:(OpaqueFigAssetWriterRef)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int*)arg3 ;
-(void)dealloc;
-(char)flush;
-(void)setSuspended:(char)arg1 ;
-(char)_generateIrisMovies:(char)arg1 ;
-(long)_generateRefMovieForInfo:(id)arg1 ;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 forFrontFacingCamera:(char)arg2 sampleReferenceMoviesEnabled:(char)arg3 ;
-(void)writeMovieWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)parseAdditionalFragments;
-(void)flushAsync;
-(char)suspended;
@end

