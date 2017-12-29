/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ABFavoritesEntry : NSObject {

	int _abUid;
	int _abIdentifier;
	NSString* _value;
	int _property;
	int _type;
	unsigned _dirty : 1;
	NSString* _label;
	NSString* _name;
	NSString* _abDatabaseUUID;
	void* _addressBook;

}
+(void)_runLookup;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(int)identifier;
-(int)type;
-(id)value;
-(id)label;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 addressBook:(void*)arg2 ;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 ;
-(id)nonLocalizedLabel;
-(int)_abUid;
-(void)recheckAddressBook;
-(void)_unqueueLookup;
-(void)_postEntryChanged;
-(void)_queueLookup;
-(void)_lookupNotFound;
-(void)_lookupChanged:(id)arg1 ;
-(void)dictionaryRepresentation:(id*)arg1 isDirty:(char*)arg2 ;
-(id)initWithPerson:(void*)arg1 property:(int)arg2 identifier:(int)arg3 type:(int)arg4 ;
-(int)property;
-(void*)ABPerson;
@end
