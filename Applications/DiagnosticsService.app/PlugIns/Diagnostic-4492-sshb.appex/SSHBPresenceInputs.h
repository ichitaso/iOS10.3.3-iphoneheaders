/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4492-sshb.appex/Diagnostic-4492-sshb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-2386/DKDiagnosticInputs.h>

@class NSString;

@interface SSHBPresenceInputs : NSObject <DKDiagnosticInputs> {

	char _frequentSampling;
	char _disableGapSubtraction;
	char _sendRawData;
	float _acceptedDeviation;
	double _sampleDuration;

}

@property (assign,nonatomic) char frequentSampling;                   //@synthesize frequentSampling=_frequentSampling - In the implementation block
@property (assign,nonatomic) char disableGapSubtraction;              //@synthesize disableGapSubtraction=_disableGapSubtraction - In the implementation block
@property (assign,nonatomic) char sendRawData;                        //@synthesize sendRawData=_sendRawData - In the implementation block
@property (assign,nonatomic) double sampleDuration;                   //@synthesize sampleDuration=_sampleDuration - In the implementation block
@property (assign,nonatomic) float acceptedDeviation;                 //@synthesize acceptedDeviation=_acceptedDeviation - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)sendRawData;
-(void)setSendRawData:(char)arg1 ;
-(char)frequentSampling;
-(char)disableGapSubtraction;
-(double)sampleDuration;
-(float)acceptedDeviation;
-(void)setAcceptedDeviation:(float)arg1 ;
-(void)setFrequentSampling:(char)arg1 ;
-(void)setDisableGapSubtraction:(char)arg1 ;
-(void)setSampleDuration:(double)arg1 ;
-(char)validateAndInitializeSpecifications:(id)arg1 ;
-(char)validateAndInitializeParameters:(id)arg1 ;
@end

