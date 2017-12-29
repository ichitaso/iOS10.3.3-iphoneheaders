/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/Plugins/Media.assistantBundle/Media
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPAddMediaEntityToWishList.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface MPAssistantAddMediaEntityToWishList : SAMPAddMediaEntityToWishList <AFServiceCommand>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_addTrackToWishListWithStoreID:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)_addRadioTrackToWishListWithStoreID:(unsigned long long)arg1 stationHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_fetchCurrentRadioTrackInfoWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

