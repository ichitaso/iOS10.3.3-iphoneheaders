/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:12 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <containermanagerd/containermanagerd-Structs.h>
@interface MCMFileManager : NSObject
+(id)defaultManager;
-(char)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(char)arg2 mode:(unsigned short)arg3 owner:(unsigned)arg4 class:(int)arg5 error:(id*)arg6 ;
-(char)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(char)arg2 mode:(unsigned short)arg3 owner:(unsigned)arg4 error:(id*)arg5 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 withNamePrefix:(id)arg2 error:(id*)arg3 ;
-(char)_CreateSystemUserACEInACL:(acl*)arg1 withPermissions:(int)arg2 andFlags:(int)arg3 withError:(id*)arg4 ;
-(aclRef)_CopySystemContainerACLWithNumACEs:(int)arg1 isDir:(char)arg2 inheritOnly:(char)arg3 withError:(id*)arg4 ;
-(aclRef)_CopyTopLevelSystemContainerACLWithError:(id*)arg1 ;
-(char)setTopLevelSystemContainerACLAtURL:(id)arg1 error:(id*)arg2 ;
-(char)standardizeACLsAtURL:(id)arg1 isSystemContainer:(char)arg2 error:(id*)arg3 ;
-(char)standardizeACLsForSystemContainerAtURL:(id)arg1 error:(id*)arg2 ;
-(char)standardizeAllSystemContainerACLsAtURL:(id)arg1 error:(id*)arg2 ;
-(char)standardizeOwnershipAtURL:(id)arg1 toUID:(unsigned)arg2 GID:(unsigned)arg3 error:(id*)arg4 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(void)printDirectoryStructureAtURL:(id)arg1 ;
-(unsigned long long)diskUsageForURL:(id)arg1 ;
-(char)removeItemAtURL:(id)arg1 error:(id*)arg2 ;
-(char)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)itemDoesNotExistAtURL:(id)arg1 ;
-(char)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(char)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id*)arg5 ;
-(char)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(char)arg3 error:(id*)arg4 ;
-(char)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(char)arg3 error:(id*)arg4 ;
-(id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
-(char)_traverseDirectory:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(char)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3 ;
-(char)itemExistsAtURL:(id)arg1 ;
-(id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(char)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
-(char)_validateSymlink:(id)arg1 withStartingDepth:(unsigned)arg2 andEndingDepth:(unsigned*)arg3 ;
-(char)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(char)arg2 mode:(unsigned short)arg3 error:(id*)arg4 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id*)arg2 ;
-(char)dataProtectionClassOfItemAtURL:(id)arg1 class:(int*)arg2 error:(id*)arg3 ;
-(char)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(/*^block*/id)arg3 error:(id*)arg4 ;
@end
