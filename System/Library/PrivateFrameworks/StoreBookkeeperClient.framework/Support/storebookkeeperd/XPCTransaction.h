/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:42 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface XPCTransaction : NSObject {

	char _isInTransaction;
	NSString* _identifier;

}

@property (copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)close;
-(id)initWithIdentifier:(id)arg1 ;
-(void)open;
@end
