/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_UTTypeQuery.h>

@class NSString;

@interface _UTTypeQueryWithParentIdentifier : _UTTypeQuery {

	NSString* _parentIdentifier;

}
+(char)supportsSecureCoding;
-(char)_canResolveLocallyWithoutMappingDatabase;
-(char)canIdentifierHaveChildren;
-(id)initWithParentIdentifier:(id)arg1 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
@end

