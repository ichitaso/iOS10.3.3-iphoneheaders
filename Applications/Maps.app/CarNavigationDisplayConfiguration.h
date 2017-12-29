/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface CarNavigationDisplayConfiguration : NSObject <NSCopying> {

	int _cameraStyle;
	NSNumber* _cameraPaused;

}

@property (assign,nonatomic) int cameraStyle;                    //@synthesize cameraStyle=_cameraStyle - In the implementation block
@property (nonatomic,copy) NSNumber * cameraPaused;              //@synthesize cameraPaused=_cameraPaused - In the implementation block
+(id)_stringForCameraStyle:(int)arg1 ;
+(char)_cameraStyleRequiresOverviewMode:(int)arg1 ;
+(char)_cameraStyleRequiresCameraMotion:(int)arg1 ;
-(void)mergeWithConfiguration:(id)arg1 ;
-(void)setCameraStyle:(int)arg1 ;
-(NSNumber *)cameraPaused;
-(void)setCameraPaused:(NSNumber *)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)cameraStyle;
@end

