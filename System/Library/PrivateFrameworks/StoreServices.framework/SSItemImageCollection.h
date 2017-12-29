/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface SSItemImageCollection : NSObject <NSCopying> {

	NSArray* _itemImages;

}

@property (nonatomic,readonly) NSArray * itemImages;              //@synthesize itemImages=_itemImages - In the implementation block
-(id)_newImagesForDictionary:(id)arg1 ;
-(id)imagesForSize:(CGSize)arg1 ;
-(id)_imagesForSize:(CGSize)arg1 scale:(float)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSArray *)itemImages;
-(id)bestImageForSize:(CGSize)arg1 ;
-(id)imagesForKind:(id)arg1 ;
-(id)initWithItemImages:(id)arg1 ;
-(id)initWithImageCollection:(id)arg1 ;
@end

