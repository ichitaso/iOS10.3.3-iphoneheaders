/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MFEmailSet, NSString, NSSet;

@interface MFVIPSender : NSObject <NSCopying> {

	MFEmailSet* _emailAddresses;
	void* _existingPerson;
	NSString* _uniqueReference;
	NSString* _displayName;

}

@property (nonatomic,copy) NSString * uniqueReference;              //@synthesize uniqueReference=_uniqueReference - In the implementation block
@property (nonatomic,copy) NSString * displayName;                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSSet * emailAddresses; 
-(void)addEmailAddresses:(id)arg1 ;
-(NSString *)uniqueReference;
-(void*)existingPersonUsingAddressBook:(void*)arg1 ;
-(void)setUniqueReference:(NSString *)arg1 ;
-(void*)copyUnknownPerson;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setEmailAddresses:(NSSet *)arg1 ;
-(NSSet *)emailAddresses;
@end

