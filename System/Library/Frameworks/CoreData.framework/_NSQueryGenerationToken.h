/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSQueryGenerationToken.h>

@interface _NSQueryGenerationToken : NSQueryGenerationToken {

	id _store;
	id _generationIdentifier;
	char _isCompound;
	char _unsupportedForStore;
	char _isSingleton;
	char _freeValueOnDealloc;

}
-(id)_token;
-(id)_generationalComponentForStore:(id)arg1 ;
-(id)_store;
-(id)initWithValue:(id)arg1 store:(id)arg2 ;
-(id)_initWithValue:(id)arg1 singleton:(char)arg2 ;
-(id)_storesForRequestRoutingFrom:(id)arg1 ;
-(id)initWithValue:(id)arg1 store:(id)arg2 freeValueOnDealloc:(char)arg3 ;
-(id)initWithCompoundValue:(id)arg1 ;
-(id)initForNonGenerationalStore:(id)arg1 ;
-(oneway void)release;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)retain;
-(id)autorelease;
-(id)description;
@end
