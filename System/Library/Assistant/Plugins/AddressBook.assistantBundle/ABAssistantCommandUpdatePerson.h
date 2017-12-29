/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/AddressBook.assistantBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectUpdate.h>
#import <AddressBook/ABAssistantCommand.h>

@class NSString;

@interface ABAssistantCommandUpdatePerson : SADomainObjectUpdate <ABAssistantCommand> {

	void* _addressBook;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) void* addressBook; 
-(id)validateIdentifier;
-(id)_addToUpdatesCache;
-(void)dealloc;
-(id)_validate;
-(void)setAddressBook:(void*)arg1 ;
-(void*)addressBook;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

