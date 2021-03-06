/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSDictionary;

@interface TSCEWarning : NSObject {

	NSDictionary* mMetadata;
	char mIgnored;

}
+(char)setHasVisibleWarnings:(id)arg1 ;
+(void)reportNonNumericCellWarningInContext:(TSCEWarningReportingContext*)arg1 reference:(id)arg2 ;
+(void)reportMonthOutOfRangeWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportDayOutOfRangeWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportBoolToNumberConversionWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportMismatchedSizesWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportLossOfUnitsWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportAutomaticUnitConversionWarningInContext:(TSCEWarningReportingContext*)arg1 ;
+(void)reportComparisonWarningInContext:(TSCEWarningReportingContext*)arg1 leftType:(int)arg2 rightType:(int)arg3 ;
-(id)displayStringWithCalculationEngine:(id)arg1 forTable:(CFUUIDRef)arg2 andCellID:(TSUCellCoord)arg3 ;
-(id)copyByRemappingEntityIDs:(id)arg1 ;
-(char)isIgnored;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIgnored:(char)arg1 ;
@end

