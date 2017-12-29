/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <FindMyFriends/FMFEntity.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, FMFClientLocation;

@interface FMFLocationLabel : FMFEntity <NSCopying> {

	NSString* localizedLabel;

}

@property (nonatomic,retain) NSString * label; 
@property (nonatomic,retain) NSNumber * lastModifiedDate; 
@property (nonatomic,retain) NSNumber * latitude; 
@property (nonatomic,retain) NSNumber * longitude; 
@property (nonatomic,retain) NSNumber * labelType; 
@property (nonatomic,retain) NSString * uid; 
@property (nonatomic,retain) NSString * serverLabelInfo; 
@property (nonatomic,retain) FMFClientLocation * location; 
@property (nonatomic,readonly) NSString * localizedLabel; 
+(id)keyPathsForValuesAffectingLabelTypeRaw;
-(int)labelTypeRaw;
-(void)setLabelTypeRaw:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedLabel;
-(void)prepareForDeletion;
@end

