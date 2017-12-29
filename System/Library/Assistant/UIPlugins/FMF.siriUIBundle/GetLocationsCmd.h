/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class NSArray, NSString, CLLocation, NSNumber;

@interface GetLocationsCmd : FMFBaseCmd {

	NSArray* friends;
	NSArray* emails;
	NSString* proximity;
	CLLocation* currentLocation;
	CLLocation* requestedLocation;
	NSString* requestedLocationLabel;
	NSNumber* atRequestedLocation;
	NSString* clientId;

}

@property (nonatomic,copy) NSArray * emails; 
@property (nonatomic,copy) CLLocation * currentLocation; 
@property (nonatomic,copy) CLLocation * requestedLocation; 
@property (nonatomic,copy) NSString * requestedLocationLabel; 
@property (nonatomic,copy) NSArray * friends; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSString * clientId; 
-(id)friendForHandle:(id)arg1 ;
-(id)currentLocationDictionary;
-(id)requestedLocationDictionary;
-(NSString *)requestedLocationLabel;
-(id)allFriendsHandles;
-(void)setRequestedLocationLabel:(NSString *)arg1 ;
-(id)path;
-(id)result;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(void)setProximity:(NSString *)arg1 ;
-(void)setFriends:(NSArray *)arg1 ;
-(CLLocation *)requestedLocation;
-(void)setRequestedLocation:(CLLocation *)arg1 ;
-(NSArray *)emails;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(NSString *)proximity;
-(id)jsonBodyDictionary;
-(void)setEmails:(NSArray *)arg1 ;
-(id)headers;
-(NSArray *)friends;
@end

