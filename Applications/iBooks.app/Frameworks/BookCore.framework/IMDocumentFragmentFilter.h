/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BookCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class IMBloomFilter, NSString;

@interface IMDocumentFragmentFilter : NSObject <NSCoding> {

	IMBloomFilter* _filter;
	SCD_Struct_IM13 _specification;

}

@property (readonly) NSString * usageDescription; 
-(int)indexSize;
-(NSString *)usageDescription;
-(id)initWithDocument:(id)arg1 filterSpecification:(SCD_Struct_IM14)arg2 ;
-(char)mightContainFragment:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
@end

