/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MCSMessageOperation.h>
#import <MobileMail/MCSAllMessagesOperation.h>

@class NSMutableDictionary, NSString;

@interface MCSFlagChange : MCSMessageOperation <MCSAllMessagesOperation> {

	NSMutableDictionary* _flagChanges;
	unsigned _isDeletion : 1;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFlagsToSet:(id)arg1 flagsToClear:(id)arg2 ;
-(id)localizedErrorDescriptionForMessageCount:(unsigned)arg1 ;
-(id)localizedErrorTitleForMessageCount:(unsigned)arg1 ;
-(id)localizedShortOperationDescription;
-(char)willMarkRead;
-(char)willMarkUnread;
-(char)willUnflag;
-(char)willFlag;
-(id)applyPendingChangeToObjects:(id)arg1 ;
-(char)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(char)revertOnMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3 ;
-(char)isRevertibleWithMessages:(id)arg1 ;
-(id)_applyFlagChange:(id)arg1 toObjects:(id)arg2 ;
-(void)_sortMessages:(id)arg1 intoLibraryMesages:(id)arg2 nonLibraryMessages:(id)arg3 ;
-(char)commitToAllMessagesInStore:(id)arg1 ;
-(char)revertForAllMessagesInStore:(id)arg1 ;
-(char)isRevertibleForAllMessagesInStore:(id)arg1 ;
-(void)setIsDeletion:(char)arg1 ;
-(void)dealloc;
-(NSString *)description;
@end

