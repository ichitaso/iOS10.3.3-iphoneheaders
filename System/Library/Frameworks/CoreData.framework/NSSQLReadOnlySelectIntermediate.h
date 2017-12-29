/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLSelectIntermediate.h>

@class NSMutableDictionary;

@interface NSSQLReadOnlySelectIntermediate : NSSQLSelectIntermediate {

	char _onlyFetchesAggregates;
	NSMutableDictionary* _variableToAliasMappings;
	NSMutableDictionary* _propertyToAliasMappings;

}
-(id)initWithScope:(id)arg1 ;
-(id)generateSQLStringInContext:(id)arg1 ;
-(char)onlyFetchesAggregates;
-(id)resolveVariableExpression:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
@end

