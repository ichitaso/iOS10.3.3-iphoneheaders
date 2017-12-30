/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:05 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/ABLEModel.framework/ABLEModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ABLEStaticMapInclusiveDomainVectorRange;

@interface ABLEBONPrediction : NSObject {

	ABLEStaticMapInclusiveDomainVectorRange* _bonDoubleMap;

}

@property (retain) ABLEStaticMapInclusiveDomainVectorRange * bonDoubleMap;              //@synthesize bonDoubleMap=_bonDoubleMap - In the implementation block
+(id)bonPredict;
+(id)bonPredictWithArray:(id)arg1 ;
-(id)initWithJsonResource:(id)arg1 ;
-(ABLEStaticMapInclusiveDomainVectorRange *)bonDoubleMap;
-(void)setBonDoubleMap:(ABLEStaticMapInclusiveDomainVectorRange *)arg1 ;
-(float)lookupForPredicted:(float)arg1 andBatteryLevel:(float)arg2 ;
-(id)initWithArray:(id)arg1 ;
@end
