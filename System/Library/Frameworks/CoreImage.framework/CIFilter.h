/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIImage, NSString, NSArray, NSDictionary;

@interface CIFilter : NSObject <NSSecureCoding, NSCopying> {

	void** _priv[8];
	char _enabled;

}

@property (nonatomic,readonly) CIImage * outputImage; 
@property (nonatomic,copy) NSString * name; 
@property (getter=isEnabled) char enabled;                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * inputKeys; 
@property (nonatomic,readonly) NSArray * outputKeys; 
@property (nonatomic,readonly) NSDictionary * attributes; 
+(id)customAttributes;
+(id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(CGRect)arg2 error:(id*)arg3 ;
+(id)filterWithString:(id)arg1 ;
+(CGImageMetadataRef)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromImageMetadata:(CGImageMetadataRef)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromProperties:(id)arg1 ;
+(id)filterWithName:(id)arg1 setDefaults:(char)arg2 ;
+(id)filterNamesInCategories:(id)arg1 ;
+(id)filterNamesInCategory:(id)arg1 ;
+(void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3 ;
+(id)localizedNameForFilterName:(id)arg1 ;
+(id)localizedNameForCategory:(id)arg1 ;
+(id)localizedDescriptionForFilterName:(id)arg1 ;
+(id)localizedReferenceDocumentationForFilterName:(id)arg1 ;
+(id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 ;
+(id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3 ;
+(id)allCategories:(char)arg1 ;
+(id)filterWithImageURL:(id)arg1 options:(id)arg2 ;
+(id)filterWithImageData:(id)arg1 options:(id)arg2 ;
+(id)filterWithCVPixelBuffer:(CVBufferRef)arg1 properties:(id)arg2 options:(id)arg3 ;
+(id)filterWithName:(id)arg1 ;
+(char)supportsSecureCoding;
+(id)filterWithName:(id)arg1 withInputParameters:(id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(CGRect)arg2 ;
+(id)filterWithName:(id)arg1 keysAndValues:(id)arg2 ;
-(void)setOption:(id)arg1 forKey:(id)arg2 ;
-(id)customAttributes;
-(char)_isIdentity;
-(void)_crashed_when_dealloc_called_setValue_nil_forKey_probably_because_the_subclass_already_released_it:(id)arg1 ;
-(NSArray *)outputKeys;
-(id)_copyFilterWithZone:(NSZone*)arg1 ;
-(id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3 ;
-(id)_serializedXMPString;
-(void)setIdentity;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(CGColorSpaceRef)arg4 ;
-(id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inSpace:(CGColorSpaceRef)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)userInfo;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CIImage *)outputImage;
-(void)setUserInfo:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(NSDictionary *)attributes;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(char)_filterClassInCategory:(id)arg1 ;
-(int)compatibilityVersion;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setDefaults;
-(id)apply:(id)arg1 ;
-(NSArray *)inputKeys;
-(void)finalize;
@end

