/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <Feedback Assistant iOS/FBAManagedFeedbackObject.h>

@class NSRegularExpression, NSString;

@interface FBAFileRequirement : FBAManagedFeedbackObject {

	NSRegularExpression* _regularExpression;

}

@property (retain) NSString * instructionsAsHTML; 
@property (retain) NSString * name; 
@property (retain) NSRegularExpression * regularExpression;              //@synthesize regularExpression=_regularExpression - In the implementation block
@property (retain) NSString * operationName; 
@property (retain) NSString * iOSOperationName; 
@property (retain) NSString * regularExpressionPattern; 
+(UIImage*)iconForFileName:(id)arg1 ;
+(id)assetNameForExtension:(id)arg1 ;
+(id)entityName;
-(void)setPropertiesFromJSONObject:(id)arg1 ;
-(char)matchesFilename:(id)arg1 ;
-(UIImage*)iconForRequirement;
-(id)description;
-(NSRegularExpression *)regularExpression;
-(void)setRegularExpression:(NSRegularExpression *)arg1 ;
@end

