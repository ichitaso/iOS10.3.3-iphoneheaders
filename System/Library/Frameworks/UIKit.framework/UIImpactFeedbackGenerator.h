/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIFeedbackGenerator.h>

@class _UIImpactFeedbackGeneratorConfiguration;

@interface UIImpactFeedbackGenerator : UIFeedbackGenerator

@property (getter=_impactConfiguration,nonatomic,readonly) _UIImpactFeedbackGeneratorConfiguration * impactConfiguration; 
+(Class)_configurationClass;
+(id)impactBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(id)_stats_key;
-(id)_impactConfiguration;
-(void)_impactOccurredWithIntensity:(float)arg1 ;
-(void)impactOccurred;
@end

