/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface TSCEError : NSObject <NSCopying> {

	NSDictionary* mErrorDictionary;

}
+(void)raiseInvalidArgumentPairingsErrorForFunctionName:(id)arg1 hasInitialUnrelatedArgument:(char)arg2 ;
+(void)raiseErrorForInvalidReference;
+(void)raiseRangeSizeMismatchErrorForFunctionName:(id)arg1 ;
+(id)circularReferenceError;
+(void)raiseEmptyArrayError;
+(void)raiseArgumentSetUsedOutOfContextError;
+(void)raiseNumberError;
+(void)raiseCategoryCellReferenceError;
+(void)raiseInvalidDateManipulationError;
+(void)raiseNumberMinusDateError;
+(void)raiseComparisonTypeExceptionForLeftType:(int)arg1 rightType:(int)arg2 ;
+(void)raiseTypeExceptionForValue:(TSCEValue)arg1 functionSpec:(id)arg2 argumentIndex:(int)arg3 locale:(id)arg4 ;
+(void)raiseAbortError;
+(void)raiseInvalidCurrencyComparisonError;
+(void)raiseInvalidComparisonError;
+(void)raiseMismatchedCurrenciesErrorForFunctionName:(id)arg1 ;
+(void)raiseDivideByZeroError;
+(void)raiseZeroToPowerOfZeroError;
+(void)raiseDurationNotAllowedError:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseValueError;
+(id)errorWithDictionary:(id)arg1 ;
+(void)raiseMixedTypeManipulationErrorForFunctionName:(id)arg1 ;
+(void)p_RaiseErrorForDictionary:(id)arg1 ;
+(char)p_DictionaryRepresentsInvalidMergeReference:(id)arg1 ;
+(void)raiseErrorForInvalidReference:(SCD_Struct_TS363*)arg1 orString:(id)arg2 contextEntityID:(CFUUIDRef)arg3 invalidMergeReference:(char)arg4 disqualifiedFromEndCell:(char)arg5 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(char)arg4 upperBound:(double)arg5 upperBoundInclusive:(char)arg6 ;
+(id)indirectErrorForRangeReference:(SCD_Struct_TS363*)arg1 hostTableID:(CFUUIDRef)arg2 calculationEngine:(id)arg3 ;
+(void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 argumentNumberString:(id)arg2 ;
+(id)errorForToken:(id)arg1 ;
+(id)syntaxError;
+(char)exceptionIsFromCalcEngine:(id)arg1 ;
+(char)exceptionIsCircularReferenceError:(id)arg1 ;
+(char)exceptionIsRangeUsageError:(id)arg1 ;
+(id)referenceToNonexistentTableError:(CFUUIDRef)arg1 ;
+(id)badReferenceError;
+(id)autoNumberAttachmentError;
+(id)attachmentError;
+(char)exceptionIsInvalidMergeReference:(id)arg1 ;
+(void)raiseInvalidArrayContentsError;
+(id)abortError;
+(void)raiseUnkownFunctionErrorForString:(id)arg1 ;
+(void)raiseNumberErrorForFunctionName:(id)arg1 ;
+(void)raiseAutoNumberAttachmentErrorInTextCell:(char)arg1 ;
+(void)raiseAttachmentErrorInTextCell:(char)arg1 ;
+(void)raiseValueNotAvailableErrorForFunctionName:(id)arg1 ;
+(void)raiseErrorForInvalidReference:(SCD_Struct_TS363*)arg1 orString:(id)arg2 contextEntityID:(CFUUIDRef)arg3 ;
+(id)invalidMergeReference:(SCD_Struct_TS363*)arg1 contextEntityID:(CFUUIDRef)arg2 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 lowerBound:(double)arg3 lowerBoundInclusive:(char)arg4 ;
+(void)raiseOutOfBoundsArgumentErrorForArgument:(int)arg1 functionName:(id)arg2 upperBound:(double)arg3 upperBoundInclusive:(char)arg4 ;
+(void)raiseMatchNotFoundErrorForValue:(id)arg1 functionName:(id)arg2 ;
+(void)raiseStartNumberExceedsStringLengthErrorForFunctionName:(id)arg1 ;
+(void)raiseDifferentNumberOfDataPointsErrorForFunctionName:(id)arg1 ;
+(void)raiseInvalidArgumentsErrorForFunctionName:(id)arg1 argumentIndex:(int)arg2 ;
+(void)raiseIndirectErrorForRangeReference:(SCD_Struct_TS363*)arg1 hostTableID:(CFUUIDRef)arg2 calculationEngine:(id)arg3 ;
+(void)raiseNoModeError;
+(void)raiseInvalidTokenInFormulaError;
+(void)raiseEmptyArgumentError;
+(void)raiseEmptyArgumentSpecificErrorForArgumentNumber:(int)arg1 ;
+(void)raiseInvalidRangeUsageErrorForReference:(SCD_Struct_TS363*)arg1 ;
+(void)raiseInvalidHyperlinkError;
+(void)raiseDifferentNumberOfElementsErrorForFunctionName:(id)arg1 ;
+(void)raiseUnionInsideIntersectionError;
+(void)raiseCircularReferenceErrorWithReference:(id)arg1 ;
+(void)raiseNotAReferenceErrorForFunctionName:(id)arg1 ;
+(void)raiseNoSuitableArgumentsFoundErrorForFunctionName:(id)arg1 requiredType:(int)arg2 ;
+(void)raiseInvalidArgumentRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 argsAscending:(char)arg4 equalityPermitted:(char)arg5 ;
+(void)raiseInvalidArgumentEqualityRelationshipErrorForFunctionName:(id)arg1 argIndex1:(int)arg2 argIndex2:(int)arg3 ;
+(void)raiseInvalidIndexForChooseError:(int)arg1 ;
+(void)raiseNonEmptyStringRequiredErrorForFunctionName:(id)arg1 ;
+(void)raiseStringDoesNotRepresentNumberErrorForFunctionName:(id)arg1 string:(id)arg2 ;
+(void)raiseStringDoesNotRepresentDateErrorForFunctionName:(id)arg1 string:(id)arg2 ;
+(void)raiseSignsMustMatchErrorForFunctionName:(id)arg1 ;
+(void)raiseRangeDoesNotSumToOneForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseUnsupportedR1C1StyleError;
+(void)raiseInvalidDateError;
+(void)raiseInvalidTimeError;
+(void)raiseNotAVectorError;
+(void)raiseInvalidProbabilityErrorForFunctionName:(id)arg1 ;
+(void)raiseNumberSmallerThanZeroError;
+(void)raiseArgumentEqualsToZeroErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raisePositionLargerThanArrayErrorForFunctionName:(id)arg1 ;
+(void)raiseInvalidFrequencyErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidTypeErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidTailErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseInvalidSubtotalFunctionNumberError;
+(void)raiseNumberDoesNotConvergeErrorForFunctionName:(id)arg1 ;
+(void)raiseNumberDoesNotConvergeWithEstimateErrorForFunctionName:(id)arg1 ;
+(void)raiseTooFewDataPointsErrorForFunctionName:(id)arg1 ;
+(void)raiseDateEarlierThanStartingDateErrorForFunctionName:(id)arg1 ;
+(void)raiseOnlyPositiveOrNegativeErrorForFunctionName:(id)arg1 ;
+(void)raiseReferenceToEmptyCellErrorForFunctionName:(id)arg1 rangeReference:(SCD_Struct_TS363*)arg2 ;
+(void)raiseWrongNumberOfArgumentsErrorForFunctionName:(id)arg1 provided:(int)arg2 ;
+(void)raiseMismatchedUnitsErrorForFunctionName:(id)arg1 ;
+(void)raiseUnitsNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseCurrencyNotAllowedErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(id)durationNotAllowedError:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseSumMixedDurationsAndUnitlessWithoutADateErrorForFunctionName:(id)arg1 ;
+(void)raiseNotEnoughInputsErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 required:(int)arg3 ;
+(void)raiseInvalidIntersectionError:(vector<TSCEReferenceValue, std::__1::allocator<TSCEReferenceValue> >*)arg1 hostTableID:(CFUUIDRef)arg2 calcEngine:(id)arg3 ;
+(void)raiseInvalidBaseCharacterErrorForCharacter:(unsigned short)arg1 base:(short)arg2 ;
+(void)raiseInvalidUnitStringError:(id)arg1 ;
+(void)raiseDifferentDimensionsErrorForFunctionName:(id)arg1 ;
+(void)raiseNonMetricUnitPrefixErrorForUnitString:(id)arg1 ;
+(void)raiseConvertOriginUnitMismatchError;
+(void)raiseArrayElementNoDataError;
+(void)raiseDataInvalidDimensionsError;
+(void)raiseDataInvalidLengthError;
+(void)raiseDataInvalidWidthError;
+(void)raiseNegativeReceivedAmountError;
+(void)raiseInvalidMatchModeError;
+(void)raiseMismatchedMaxUnitsError;
+(void)raiseVectorValueNotNumberErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raiseCharInputOutOfBoundsError;
+(void)raiseDurationDisallowedForNormdistPDFError;
+(void)raiseLinestHighlyCorrelatedVariableError;
+(void)raiseMultipleDurationsErrorForFunctionName:(id)arg1 ;
+(void)raiseLinestMatrixUnderdeterminedError;
+(void)raiseNegativeVectorValueErrorForFunctionName:(id)arg1 argumentNumber:(int)arg2 ;
+(void)raisePercentRankInputOutOfRangeError;
+(void)raisePercentRankExcInputOutOfRangeError;
+(void)raiseLocationServicesNotEnabledError;
+(void)raiseLocationHeadingUnknownError;
+(void)raiseLocationUnknownError;
+(void)raiseLocationUserDeniedError;
+(void)raiseLocationNetworkError;
+(void)raiseLocationHeadingFailureError;
+(void)raiseInvalidLatitudeLongitudeError;
+(void)raiseInvalidAltitudeError;
+(void)raiseInvalidHeadingError;
+(void)raiseStringTooLongError;
-(SCD_Struct_TS363*)rangeReference;
-(id)displayStringWithCalculationEngine:(id)arg1 forTable:(CFUUIDRef)arg2 andCellID:(TSUCellCoord)arg3 ;
-(char)isAbortedError;
-(char)isErrorReferenceError;
-(char)isCircularReferenceError;
-(void)raiseException;
-(void)setErrorDictionary:(id)arg1 ;
-(id)errorDictionary;
-(int)nativeType;
-(char)isOfType:(id)arg1 ;
-(char)isSyntaxError;
-(char)isFromCalcEngine;
-(char)errorIsRangeUsageError;
-(char)isInvalidMergeReference;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 andDescend:(char)arg3 ;
-(char)isInvalidReference;
-(int)deepType;
-(TSCENumberValue*)numberForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(id)dateForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(id)stringForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(char)booleanForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(TSCEVector*)formattedVectorForFunction:(id)arg1 argumentIndex:(int)arg2 context:(TSCEEvaluationContextRef)arg3 format:(const TSCEFormat*)arg4 ;
-(TSCEReferenceValue*)referenceValueForFunction:(id)arg1 argumentIndex:(int)arg2 warningReportingContext:(TSCEWarningReportingContext*)arg3 ;
-(char)boolean;
-(char)isNativelyEqual:(TSCEValue)arg1 ;
-(id)bakedString;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)doubleValue;
-(id)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)stringValue;
-(TSCEVector*)vector;
-(id)error;
-(id)tokenString;
-(id)dateValue;
-(TSCENumberValue*)number;
-(TSCEReferenceValue*)referenceValue;
@end

