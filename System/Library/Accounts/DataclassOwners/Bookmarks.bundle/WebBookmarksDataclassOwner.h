/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Accounts/DataclassOwners/Bookmarks.bundle/Bookmarks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bookmarks/ACDDataclassOwnerProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, ACAccountStore, NSString;

@interface WebBookmarksDataclassOwner : NSObject <ACDDataclassOwnerProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	ACAccountStore* _accountStore;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataclasses;
-(id)actionsForAddingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 forDataclass:(id)arg2 ;
-(char)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 forDataclass:(id)arg4 ;
-(void)_resetCloudHistoryData;
-(char)_isLocalSourceEmpty;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 forDataclass:(id)arg2 ;
-(char)_actionTypeRepresentsDataClassEnabledTransition:(int)arg1 ;
-(id)init;
@end

