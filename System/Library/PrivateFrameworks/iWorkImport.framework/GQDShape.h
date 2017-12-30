/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:35 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDGraphic.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDPath, GQDWPLayoutFrame, NSString;

@interface GQDShape : GQDGraphic <GQDNameMappable> {

	GQDPath* mPath;
	GQDWPLayoutFrame* mLayoutFrame;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(CGPathRef)createBezierPath;
-(char)isRectangularAndAxisAlignedToAngle:(float)arg1 ;
-(id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3 ;
-(void)dealloc;
-(id)path;
-(id)layoutFrame;
-(char)isBlank;
@end
