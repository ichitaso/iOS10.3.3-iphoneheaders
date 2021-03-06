/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPComponentWriterDelegate <NSObject>
@optional
-(void)componentWriterNeedsDocumentRecovery:(id)arg1;
-(void)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4;
-(char)componentWriter:(id)arg1 object:(id)arg2 belongsToLinkedComponent:(id)arg3;
-(char)componentWriter:(id)arg1 externalPackageDidWriteObject:(id)arg2 claimingComponent:(id*)arg3;
-(char)componentWriter:(id)arg1 shouldDelayWritingObject:(id)arg2;

@required
-(unsigned)objectTargetTypeForComponentWriter:(id)arg1;
-(id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(char)arg5;
-(void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(/*^block*/id)arg4;
-(void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3;
-(void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4;

@end

