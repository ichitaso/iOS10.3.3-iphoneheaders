/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <FindMyFriends/FMFLocationLabel.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <FindMyFriends/FenceAddress.h>

@class NSString, FMFFriend, FMFAccount;

@interface FMFLabelledLocation : FMFLocationLabel <NSCopying, FenceAddress>

@property (nonatomic,retain) NSString * userId; 
@property (nonatomic,retain) FMFFriend * friend; 
@property (nonatomic,retain) FMFAccount * account; 
@property (nonatomic,retain) NSString * placemarkLocale; 
@property (nonatomic,retain) NSString * administrativeArea; 
@property (nonatomic,retain) NSString * stateCode; 
@property (nonatomic,retain) NSString * locality; 
@property (nonatomic,retain) NSString * locationTitle; 
@property (nonatomic,retain) NSString * country; 
@property (nonatomic,retain) NSString * streetName; 
@property (nonatomic,retain) NSString * streetAddress; 
@property (nonatomic,retain) NSString * postalCode; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long)fenceAddressType;
-(id)fenceLabel;
-(id)labelToSaveToFence;
-(char)matchesMapSearchString:(id)arg1 ;
-(id)mapSearchTitle;
-(id)mapSearchLocationLabel;
-(id)mapSearchLocationAddress;
-(int)mapSearchLocationAddressType;
-(void)createPlacemarkFromLocation;
-(void)createPlacemarkIfNeeded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)radius;
-(id)addressString;
-(void)prepareForDeletion;
-(id)placemark;
@end

