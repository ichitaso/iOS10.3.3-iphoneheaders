/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFeedbackGeneratorConfiguration.h>

@class NSDictionary, NSString;

@interface _UIFeedbackStatesBehaviorConfiguration : _UIFeedbackGeneratorConfiguration {

	NSDictionary* _stateChangeConfigurations;
	NSString* _initialState;

}

@property (nonatomic,retain) NSString * initialState;                               //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSDictionary * stateChangeConfigurations;              //@synthesize stateChangeConfigurations=_stateChangeConfigurations - In the implementation block
+(id)keyFromState:(id)arg1 toState:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)feedbackKeyPaths;
-(NSString *)initialState;
-(NSDictionary *)stateChangeConfigurations;
-(void)setStateChangeConfigurations:(NSDictionary *)arg1 ;
-(void)setInitialState:(NSString *)arg1 ;
@end

