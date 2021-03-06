/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FMFEntity.h>

@class NSSet, FMFAccount;

@interface FMFDiscovery : FMFEntity

@property (assign,nonatomic) short status; 
@property (assign,nonatomic) float percentComplete; 
@property (assign,nonatomic) char completed; 
@property (assign,nonatomic) char allowed; 
@property (assign,nonatomic) char allowAutoTrigger; 
@property (nonatomic,retain) NSSet * contacts; 
@property (nonatomic,retain) FMFAccount * account; 
-(char)handleInDiscoveredContacts:(id)arg1 ;
-(char)isAllowedIntoFeature;
-(void)prepareForDeletion;
-(char)isInProgress;
@end

