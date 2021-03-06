/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSPObjectContext;


@protocol TSPObjectDelegate
@property (nonatomic,readonly) TSPObjectContext * context; 
@required
-(long long)modifyObjectTokenForNewObject;
-(id)newObjectUUIDForObject:(id)arg1;
-(void)beginIgnoringModificationsForObject:(id)arg1;
-(void)endIgnoringModificationsForObject:(id)arg1;
-(void)willModifyObject:(id)arg1 duringReadOperation:(char)arg2;
-(char)canSetObjectUUIDForObject:(id)arg1;
-(id)objectUUIDMap;
-(long long)newObjectIdentifier;
-(char)isObjectInDocument:(id)arg1;
-(TSPObjectContext *)context;

@end

