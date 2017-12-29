/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSPropertyDescription, NSSQLEntity;

@interface NSSQLProperty : NSObject {

	NSPropertyDescription* _propertyDescription;
	NSSQLEntity* _entity;
	unsigned char _propertyType;
	unsigned char _sqlType;
	unsigned short _fetchIndex;
	unsigned short _slot;
	struct {
		unsigned _allowAliasing : 1;
		unsigned _unique : 1;
		unsigned _constrained : 1;
		unsigned _backedByTrigger : 1;
		unsigned _reservedFlags : 12;
	}  _flags;

}
-(char)isToOne;
-(char)isManyToMany;
-(id)columnName;
-(unsigned)slot;
-(id)externalName;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)copyValuesForReadOnlyFetch:(id)arg1 ;
-(char)isRelationship;
-(void)setEntityForReadOnlyFetch:(id)arg1 ;
-(void)setPropertyDescription:(id)arg1 ;
-(char)isAttribute;
-(char)isForeignKey;
-(char)isForeignEntityKey;
-(char)isForeignOrderKey;
-(char)isEntityKey;
-(char)isOptLockKey;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(id)entity;
-(char)isToMany;
-(unsigned char)propertyType;
-(char)isPrimaryKey;
-(id)propertyDescription;
-(char)isColumn;
@end

