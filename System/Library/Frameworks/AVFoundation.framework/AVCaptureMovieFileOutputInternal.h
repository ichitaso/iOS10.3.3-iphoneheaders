/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSMutableArray, NSArray, NSString;

@interface AVCaptureMovieFileOutputInternal : NSObject {

	AVWeakReference* weakReference;
	NSMutableArray* recordingDelegatesArray;
	NSMutableArray* connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
	SCD_Struct_AV2 movieFragmentInterval;
	NSArray* metadata;
	NSArray* availableVideoCodecs;
	NSString* videoCodec;
	char sendLastVideoPreviewFrame;
	char recording;
	char paused;
	NSString* bravoCameraSelectionBehaviorForRecording;

}
-(id)init;
-(void)dealloc;
@end

