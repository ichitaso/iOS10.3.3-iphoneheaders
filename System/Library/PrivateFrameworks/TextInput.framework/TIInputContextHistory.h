/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSSet, NSString;

@interface TIInputContextHistory : NSObject <NSCopying, NSSecureCoding> {

	NSMutableArray* _entries;
	NSMutableArray* _pendingEntries;
	NSSet* _recipientIdentifiers;

}

@property (nonatomic,readonly) NSSet * recipientIdentifiers;              //@synthesize recipientIdentifiers=_recipientIdentifiers - In the implementation block
@property (nonatomic,readonly) NSString * aggregateText; 
@property (nonatomic,readonly) NSString * lastInputContext; 
+(char)supportsSecureCoding;
-(void)enumerateAllEntries:(/*^block*/id)arg1 ;
-(NSString *)aggregateText;
-(NSString *)lastInputContext;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRecipientIdentifiers:(id)arg1 ;
-(NSSet *)recipientIdentifiers;
-(void)addTextEntry:(id)arg1 timestamp:(id)arg2 ;
-(void)assertCheckpointForCoding;
-(void)enumeratePendingEntries:(/*^block*/id)arg1 ;
@end

