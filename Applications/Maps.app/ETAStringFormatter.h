/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ETAStringFormatter : NSObject {

	NSMutableDictionary* _cache;
	/*^block*/id _formattingBlock;

}

@property (nonatomic,copy) id formattingBlock;              //@synthesize formattingBlock=_formattingBlock - In the implementation block
-(void)setFormattingBlock:(id)arg1 ;
-(id)stringForExpectedTravelTime:(double)arg1 forMaxWidth:(float)arg2 ;
-(int)_unitsStyleForHoursForMaxWidth:(float)arg1 ;
-(id)stringForExpectedTravelTime:(double)arg1 inUnitsStyle:(int)arg2 ;
-(float)_maxETAStringWidthForStyle:(int)arg1 ;
-(id)formattingBlock;
-(id)init;
@end

