/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WDChartRendererDataSource <NSObject>
@required
-(id)unitController;
-(char)dataForChartRendererIsFinishedLoading:(id)arg1;
-(void)adjustChartBoundsWithMin:(double)arg1 max:(double)arg2 minOut:(double*)arg3 maxOut:(double*)arg4 decimalPrecision:(int*)arg5;
-(unsigned)numberOfSeriesInChartRenderer:(id)arg1;
-(id)chartRenderer:(id)arg1 seriesAtIndex:(unsigned)arg2;
-(unsigned)chartRenderer:(id)arg1 numberOfDataPointsForSeriesAtIndex:(unsigned)arg2;
-(id)chartRenderer:(id)arg1 dataPointAtIndex:(unsigned)arg2 forSeriesAtIndex:(unsigned)arg3;
-(id)dataUnit;

@end

