/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/_UTTypeQuery.h>

@class NSString;

@interface _UTTypeQueryWithIdentifier : _UTTypeQuery {

	NSString* _identifier;
	char _dynamic;
	char _valid;

}
+(char)supportsSecureCoding;
-(char)_canResolveLocallyWithoutMappingDatabase;
-(char)getLocallyResolvedType:(id*)arg1 orErrorWithoutMappingDatabase:(id*)arg2 ;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)debugDescription;
-(id)initWithIdentifier:(id)arg1 ;
@end
