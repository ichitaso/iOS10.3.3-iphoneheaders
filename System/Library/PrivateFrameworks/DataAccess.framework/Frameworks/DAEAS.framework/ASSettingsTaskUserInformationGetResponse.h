/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSArray, NSString;

@interface ASSettingsTaskUserInformationGetResponse : ASItem {

	NSArray* _emailAddresses;
	NSString* _primarySMTPAddress;
	NSArray* _accounts;

}

@property (nonatomic,retain) NSArray * accounts;                         //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSArray * emailAddresses;                   //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,retain) NSString * primarySMTPAddress;              //@synthesize primarySMTPAddress=_primarySMTPAddress - In the implementation block
+(char)acceptsTopLevelLeaves;
+(char)parsingLeafNode;
+(char)parsingWithSubItems;
+(char)frontingBasicTypes;
+(char)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6 ;
-(void)setPrimarySMTPAddress:(NSString *)arg1 ;
-(NSString *)primarySMTPAddress;
-(void)setEmailAddresses:(NSArray *)arg1 ;
-(NSArray *)emailAddresses;
-(void)setAccounts:(NSArray *)arg1 ;
-(NSArray *)accounts;
@end

