/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstFaceConfigEntry : NSObject {

	int faceId;
	CGRect faceRect;
	int framesSinceLast;

}

@property (assign) int faceId; 
@property (assign) CGRect faceRect; 
@property (assign) int framesSinceLast; 
-(int)faceId;
-(id)initWithRect:(CGRect)arg1 withFaceId:(int)arg2 ;
-(void)setFaceId:(int)arg1 ;
-(int)framesSinceLast;
-(void)setFramesSinceLast:(int)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
@end

