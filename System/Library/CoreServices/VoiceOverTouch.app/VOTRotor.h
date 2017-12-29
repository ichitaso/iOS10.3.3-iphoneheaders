/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <vot/vot-Structs.h>
@class NSString, NSArray, NSMutableArray;

@interface VOTRotor : NSObject {

	NSString* _typeKey;
	CFArrayRef _currentRotors;
	int _currentRotorType;
	int _currentSelectionRotorType;
	int _customRotorIndex;
	NSArray* _customRotorTitles;
	NSArray* _customRotorActions;
	int _publicCustomRotorIndex;
	NSMutableArray* _customPublicRotors;

}

@property (nonatomic,readonly) int currentRotorType;                       //@synthesize currentRotorType=_currentRotorType - In the implementation block
@property (nonatomic,readonly) int currentSelectionRotorType; 
@property (nonatomic,readonly) int rotorIndex; 
@property (nonatomic,readonly) int rotorCount; 
@property (nonatomic,readonly) int publicCustomRotorIndex;                 //@synthesize publicCustomRotorIndex=_publicCustomRotorIndex - In the implementation block
@property (nonatomic,readonly) int customRotorIndex;                       //@synthesize customRotorIndex=_customRotorIndex - In the implementation block
+(id)stringForRotorType:(int)arg1 visual:(char)arg2 ;
+(id)rotorTypeForPreferenceString:(id)arg1 ;
-(int)currentRotorType;
-(id)currentRotorString;
-(id)currentVisualRotorString;
-(int)rotorCount;
-(void)speakRotorType;
-(void)setCurrentRotorType:(int)arg1 saveToPreferences:(char)arg2 ;
-(void)decrement:(char*)arg1 ;
-(void)increment:(char*)arg1 ;
-(int)publicCustomRotorIndex;
-(int)customRotorIndex;
-(int)currentSelectionRotorType;
-(id)currentRotorHint;
-(void)_moveRotor:(char)arg1 didWrap:(char*)arg2 ;
-(id)_currentCustomRotorString;
-(int)rotorIndex;
-(long)indexOfRotorItem:(int)arg1 ;
-(id)rotorItems;
-(void)setRotorItems:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

