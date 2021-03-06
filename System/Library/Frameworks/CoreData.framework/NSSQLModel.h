/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSStoreMapping.h>

@class NSString, NSManagedObjectModel, NSKnownKeysDictionary, NSMutableArray;

@interface NSSQLModel : NSStoreMapping {

	NSString* _configuration;
	NSManagedObjectModel* _mom;
	NSKnownKeysDictionary* _entitiesByName;
	NSMutableArray* _entities;
	id* _entityDescriptionToSQLMap;
	unsigned _brokenHashVersion;
	char _retainLeopardStyleDictionaries;
	char _modelHasPrecomputedKeyOrder;
	char _hasVirtualToOnes;

}
-(id)configurationName;
-(id)entityForID:(unsigned long)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(char)arg3 ;
-(id)entityNamed:(id)arg1 ;
-(unsigned long)entityIDForName:(id)arg1 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 brokenHashVersion:(unsigned)arg3 ;
-(char)_modelHasPrecomputedKeyOrder;
-(void)_recordHasVirtualToOnes;
-(char)_useLeopardStyleHashing;
-(char)_useSnowLeopardStyleHashing;
-(id)_precomputedKeyOrderForEntity:(id)arg1 ;
-(void)_addIndexedEntity:(id)arg1 ;
-(char)_runSanityCheckForModel:(id)arg1 ;
-(char)_generateModel:(id)arg1 error:(id*)arg2 ;
-(id)initWithManagedObjectModel:(id)arg1 configurationName:(id)arg2 retainHashHack:(char)arg3 brokenHashVersion:(unsigned)arg4 ;
-(id)_entityMapping;
-(id)_sqlEntityWithRenamingIdentifier:(id)arg1 ;
-(char)_retainHashHack;
-(void)dealloc;
-(id)managedObjectModel;
-(id)entitiesByName;
-(id)entities;
-(void)finalize;
@end

