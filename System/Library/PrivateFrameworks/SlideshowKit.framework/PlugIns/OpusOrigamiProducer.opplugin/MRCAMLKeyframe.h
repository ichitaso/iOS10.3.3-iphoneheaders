/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MRCAMLBezierData;

@interface MRCAMLKeyframe : NSObject <NSCopying> {

	MRCAMLBezierData* spline;
	float value0;
	float value1;
	double time;

}

@property (nonatomic,retain) MRCAMLBezierData * spline; 
-(MRCAMLBezierData *)spline;
-(void)setSpline:(MRCAMLBezierData *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
