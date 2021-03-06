/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:44 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/XPCServices/FMFMapXPCService.xpc/FMFMapXPCService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSString;

@interface FMFMapImageRequest : NSObject <NSSecureCoding> {

	char _cachingEnabled;
	CLLocation* _location;
	int _priority;
	double _altitude;
	double _pitch;
	double _width;
	double _height;

}

@property (nonatomic,retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double altitude;                    //@synthesize altitude=_altitude - In the implementation block
@property (nonatomic,readonly) NSString * key; 
@property (assign,nonatomic) double pitch;                       //@synthesize pitch=_pitch - In the implementation block
@property (assign,nonatomic) double width;                       //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double height;                      //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) char cachingEnabled;                //@synthesize cachingEnabled=_cachingEnabled - In the implementation block
@property (assign,nonatomic) int priority;                       //@synthesize priority=_priority - In the implementation block
+(char)supportsSecureCoding;
-(NSString *)key;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(double)width;
-(double)height;
-(CLLocation *)location;
-(void)setWidth:(double)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setAltitude:(double)arg1 ;
-(double)altitude;
-(void)setPitch:(double)arg1 ;
-(double)pitch;
-(id)initWithLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCachingEnabled:(char)arg6 ;
-(void)setCachingEnabled:(char)arg1 ;
-(char)cachingEnabled;
@end

