/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>

@class NSArray, NSTimer;

@interface PHTextCycleLabel : UILabel {

	NSArray* _cycleStrings;
	NSTimer* _cycleTimer;
	int _currentCycleStringIndex;

}

@property (retain) NSTimer * cycleTimer;                     //@synthesize cycleTimer=_cycleTimer - In the implementation block
@property (assign) int currentCycleStringIndex;              //@synthesize currentCycleStringIndex=_currentCycleStringIndex - In the implementation block
@property (retain) NSArray * cycleStrings;                   //@synthesize cycleStrings=_cycleStrings - In the implementation block
-(NSArray *)cycleStrings;
-(void)setCurrentCycleStringIndex:(int)arg1 ;
-(int)currentCycleStringIndex;
-(NSTimer *)cycleTimer;
-(void)setCycleTimer:(NSTimer *)arg1 ;
-(void)cycleToNextString;
-(void)startCyclingStrings;
-(void)setCycleStrings:(NSArray *)arg1 ;
-(void)dealloc;
-(void)setText:(id)arg1 ;
@end

