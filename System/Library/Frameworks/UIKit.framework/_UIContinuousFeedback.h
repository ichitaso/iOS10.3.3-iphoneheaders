/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFeedback.h>
#import <UIKit/_UIFeedbackContinuousPlayable.h>

@class NSString;

@interface _UIContinuousFeedback : _UIFeedback <_UIFeedbackContinuousPlayable> {

	int _type;
	double _duration;

}

@property (assign,nonatomic) int type;                                     //@synthesize type=_type - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double duration;                              //@synthesize duration=_duration - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) char playing; 
+(id)type;
+(id)continuousFeedbackForType:(int)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)_effectiveEventType;
-(id)_playableProtocol;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)_playAtTime:(double)arg1 ;
-(id)_debugDictionary;
@end
