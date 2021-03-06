/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:16:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommCenter/CommCenter-Structs.h>
@class NWPathEvaluator;

@interface NetPathObserver : NSObject {

	weak_ptr<DataNetworkMonitor>* _netMonitor;
	LoggerBase<std::__1::shared_ptr<ctu::LogServer> >* _logger;
	char _wifiAvailable;
	char _cellAvailable;
	NWPathEvaluator* _evaluator;

}

@property (nonatomic,retain) NWPathEvaluator * evaluator;              //@synthesize evaluator=_evaluator - In the implementation block
-(id)initWithMonitor:(weak_ptr<DataNetworkMonitor>*)arg1 logger:(LoggerBase<std::__1::shared_ptr<ctu::LogServer> >*)arg2 ;
-(void)doStartObesrving;
-(char)isWifiAvailable;
-(char)isCellAvailable;
-(id)getInterfaceName;
-(int)getInterfaceFamily;
-(void)doUpdateWifiAvailability;
-(NWPathEvaluator *)evaluator;
-(void)setEvaluator:(NWPathEvaluator *)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

