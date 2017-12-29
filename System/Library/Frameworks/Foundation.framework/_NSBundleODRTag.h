/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _NSBundleODRTag : NSObject <NSSecureCoding> {

	double _preservationPriority;
	char _alwaysPreserved;

}

@property (assign) double preservationPriority;              //@synthesize preservationPriority=_preservationPriority - In the implementation block
@property (assign) char alwaysPreserved;                     //@synthesize alwaysPreserved=_alwaysPreserved - In the implementation block
+(char)supportsSecureCoding;
-(double)preservationPriority;
-(void)setPreservationPriority:(double)arg1 ;
-(char)alwaysPreserved;
-(void)setAlwaysPreserved:(char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
