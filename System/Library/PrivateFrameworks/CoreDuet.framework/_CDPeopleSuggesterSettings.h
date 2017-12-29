/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface _CDPeopleSuggesterSettings : NSObject <NSCopying> {

	char _useFuture;
	char _aggregateByIdentifier;
	char _requireOutgoingInteraction;
	char _useTitleToContrainKeywords;
	unsigned _maxNumberOfPeopleSuggested;
	NSSet* _constrainMechanisms;
	NSSet* _constrainBundleIds;
	NSSet* _constrainAccounts;
	NSSet* _constrainDomainIdentifiers;
	NSSet* _constrainIdentifiers;
	NSSet* _constrainPersonIds;
	NSSet* _constrainPersonIdType;
	unsigned _constrainMaxRecipientCount;
	NSSet* _ignoreContactIdentifiers;

}

@property (assign) unsigned maxNumberOfPeopleSuggested;              //@synthesize maxNumberOfPeopleSuggested=_maxNumberOfPeopleSuggested - In the implementation block
@property (retain) NSSet * constrainMechanisms;                      //@synthesize constrainMechanisms=_constrainMechanisms - In the implementation block
@property (retain) NSSet * constrainBundleIds;                       //@synthesize constrainBundleIds=_constrainBundleIds - In the implementation block
@property (retain) NSSet * constrainAccounts;                        //@synthesize constrainAccounts=_constrainAccounts - In the implementation block
@property (retain) NSSet * constrainDomainIdentifiers;               //@synthesize constrainDomainIdentifiers=_constrainDomainIdentifiers - In the implementation block
@property (retain) NSSet * constrainIdentifiers;                     //@synthesize constrainIdentifiers=_constrainIdentifiers - In the implementation block
@property (retain) NSSet * constrainPersonIds;                       //@synthesize constrainPersonIds=_constrainPersonIds - In the implementation block
@property (retain) NSSet * constrainPersonIdType;                    //@synthesize constrainPersonIdType=_constrainPersonIdType - In the implementation block
@property (assign) unsigned constrainMaxRecipientCount;              //@synthesize constrainMaxRecipientCount=_constrainMaxRecipientCount - In the implementation block
@property (assign) char useFuture;                                   //@synthesize useFuture=_useFuture - In the implementation block
@property (assign) char aggregateByIdentifier;                       //@synthesize aggregateByIdentifier=_aggregateByIdentifier - In the implementation block
@property (assign) char requireOutgoingInteraction;                  //@synthesize requireOutgoingInteraction=_requireOutgoingInteraction - In the implementation block
@property (assign) char useTitleToContrainKeywords;                  //@synthesize useTitleToContrainKeywords=_useTitleToContrainKeywords - In the implementation block
@property (retain) NSSet * ignoreContactIdentifiers;                 //@synthesize ignoreContactIdentifiers=_ignoreContactIdentifiers - In the implementation block
+(id)defaultSettings;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)constrainAccounts;
-(char)requireOutgoingInteraction;
-(void)setRequireOutgoingInteraction:(char)arg1 ;
-(void)setConstrainMechanisms:(NSSet *)arg1 ;
-(void)setConstrainIdentifiers:(NSSet *)arg1 ;
-(NSSet *)constrainMechanisms;
-(NSSet *)constrainPersonIds;
-(NSSet *)constrainIdentifiers;
-(void)setConstrainMaxRecipientCount:(unsigned)arg1 ;
-(NSSet *)constrainPersonIdType;
-(char)useFuture;
-(NSSet *)ignoreContactIdentifiers;
-(char)aggregateByIdentifier;
-(void)setConstrainAccounts:(NSSet *)arg1 ;
-(NSSet *)constrainBundleIds;
-(void)setConstrainBundleIds:(NSSet *)arg1 ;
-(NSSet *)constrainDomainIdentifiers;
-(void)setConstrainDomainIdentifiers:(NSSet *)arg1 ;
-(unsigned)maxNumberOfPeopleSuggested;
-(void)setIgnoreContactIdentifiers:(NSSet *)arg1 ;
-(void)setUseFuture:(char)arg1 ;
-(void)setAggregateByIdentifier:(char)arg1 ;
-(unsigned)constrainMaxRecipientCount;
-(char)useTitleToContrainKeywords;
-(void)setMaxNumberOfPeopleSuggested:(unsigned)arg1 ;
-(void)setUseTitleToContrainKeywords:(char)arg1 ;
-(void)setConstrainPersonIdType:(NSSet *)arg1 ;
-(void)setConstrainPersonIds:(NSSet *)arg1 ;
@end

