/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSMutableArray;

@interface FigCaptionLayerPrivate : NSObject {

	OpaqueFigCFCaptionRendererRef renderer;
	NSMutableArray* captionElementLayers;
	OpaqueFigSimpleMutexRef renderMutex;
	OpaqueFigReentrantMutexRef layoutSublayersMutex;

}
@end

