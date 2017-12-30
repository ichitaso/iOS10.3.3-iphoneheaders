/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:44 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AnalyticsWorkspace, NSString;

@interface ObjectAnalytics : NSObject {

	AnalyticsWorkspace* wspace;
	NSString* entityName;
	char managedCache;

}
-(void)refresh:(id)arg1 ;
-(void)save;
-(id)_fetch:(id)arg1 sortDesc:(id)arg2 ;
-(id)_firstLastHappened:(char)arg1 ;
-(id)firstHappened;
-(id)lastHappened;
-(id)initWithWorkspace:(id)arg1 entityName:(id)arg2 withCache:(char)arg3 ;
-(id)getDescriptionForName:(id)arg1 ;
-(id)fetchEntitiesFreeForm:(id)arg1 sortDesc:(id)arg2 ;
-(id)createTemporaryEntityForEntityName:(id)arg1 ;
-(void)removeEntities:(id)arg1 ;
-(id)createEntity;
-(id)createEntityForEntityName:(id)arg1 ;
-(int)removeEntitiesMatching:(id)arg1 ;
-(id)createTemporaryEntity;
-(void)moveTemporaryEntityToMainContext:(id)arg1 ;
-(unsigned)countEntitiesMatching:(id)arg1 ;
-(unsigned)updateEntitiesMatching:(id)arg1 properties:(id)arg2 ;
@end
