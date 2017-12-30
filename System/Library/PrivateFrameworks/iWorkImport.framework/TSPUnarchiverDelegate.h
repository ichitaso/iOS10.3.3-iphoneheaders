/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPUnarchiverDelegate <NSObject>
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) char didFinishResolvingReferences; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,readonly) int sourceType; 
@property (nonatomic,readonly) char canRetainObjectReferencedByWeakLazyReference; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@optional
-(char)isCrossDocumentPaste;
-(char)isCrossAppPaste;

@required
-(unsigned long long)fileFormatVersion;
-(char)didFinishResolvingReferences;
-(char)canRetainObjectReferencedByWeakLazyReference;
-(void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(char*)arg3;
-(id)dataForIdentifier:(long long)arg1;
-(char)hasDocumentVersionUUID;
-(long long)objectIdentifierForUUID:(id)arg1;
-(id)UUIDForObjectIdentifier:(long long)arg1;
-(int)sourceType;

@end
