/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableSet;

@interface EKAllDayRow : NSObject {

	NSMutableArray* _blocks;
	NSMutableSet* _occupyingDays;
	unsigned _startDate;

}
-(void)addOccurrenceBlock:(id)arg1 ;
-(unsigned)spaceGapFor:(id)arg1 ;
-(id)occurrenceBlocks;
-(id)init;
@end

