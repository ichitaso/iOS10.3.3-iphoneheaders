/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureCoreMotionMetadataInputInternal, NSString;

@interface AVCaptureCoreMotionMetadataInput : AVCaptureInput {

	AVCaptureCoreMotionMetadataInputInternal* _internal;

}

@property (nonatomic,readonly) NSString * sourceID; 
+(void)initialize;
+(id)coreMotionMetadataInput;
-(id)init;
-(void)dealloc;
-(OpaqueCMClockRef)clock;
-(id)ports;
-(NSString *)sourceID;
@end

