/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TSPDocumentRevision : NSObject <NSCopying> {

	int _sequence;
	NSString* _identifier;

}

@property (nonatomic,readonly) int sequence;                           //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * revisionString; 
+(id)documentRevisionAtURL:(id)arg1 passphrase:(id)arg2 error:(id*)arg3 ;
+(id)revisionWithSequence:(int)arg1 identifier:(id)arg2 ;
+(id)revisionWithRevisionString:(id)arg1 ;
-(id)initWithSequence:(int)arg1 identifier:(id)arg2 ;
-(id)nextRevisionWithIdentifier:(id)arg1 ;
-(id)initWithRevisionString:(id)arg1 ;
-(NSString *)revisionString;
-(int)compareSequenceFromRevision:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)sequence;
@end

