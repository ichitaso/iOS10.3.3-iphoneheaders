/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <kbd/kbd-Structs.h>
@class NSString;

@interface TILexiconDataHandler : NSObject {

	NSString* _bundleID;

}

@property (nonatomic,copy) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(char)validateBundlePath:(id)arg1 ;
-(void)finishRequestWithEntries:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)checkEntitlementForAddEntryStringWithAuditToken:(SCD_Struct_TI0)arg1 ;
-(void)requestLexiconForRecentInputIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)requestRemovalOfLexiconForRecentInputIdentifier:(id)arg1 ;
-(void)addEntryString:(id)arg1 forRecentInputIdentifier:(id)arg2 ;
-(void)dealloc;
-(void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
@end
