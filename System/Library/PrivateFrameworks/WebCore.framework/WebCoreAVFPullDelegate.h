/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/AVPlayerItemOutputPullDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, NSString;

@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate> {

	MediaPlayerPrivateAVFoundationObjC* m_callback;
	NSObject*<OS_dispatch_semaphore> m_semaphore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(void)outputMediaDataWillChange:(AVPlayerItemVideoOutput*)arg1 ;
-(void)setCallback:(MediaPlayerPrivateAVFoundationObjC*)arg1 ;
-(void)outputSequenceWasFlushed:(AVPlayerItemVideoOutput*)arg1 ;
@end

