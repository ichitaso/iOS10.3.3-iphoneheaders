/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSString;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {

	NSIndexPath* _indexPath;
	NSString* _identifier;
	char _isClone;
	unsigned _type;

}

@property (nonatomic,readonly) unsigned type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) char isClone;                                //@synthesize isClone=_isClone - In the implementation block
+(id)collectionItemKeyForCellWithIndexPath:(id)arg1 ;
+(id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForLayoutAttributes:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSIndexPath *)indexPath;
-(NSString *)identifier;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned)arg1 indexPath:(id)arg2 identifier:(id)arg3 ;
-(id)initWithType:(unsigned)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(char)arg4 ;
-(char)isClone;
-(id)copyAsClone:(char)arg1 ;
@end

