/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TransitWidget/MWTransitIncidentFetcherRequest.h>

@class MWResult, NSMutableArray, NSArray, NSString;

@interface _MWTransitIncidentFetcherRequest : NSObject <MWTransitIncidentFetcherRequest> {

	NSMutableArray* _handlers;
	MWResult* _result;

}

@property (readonly) MWResult * result;                             //@synthesize result=_result - In the implementation block
@property (readonly) NSArray * handlers; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResultAndInvokeCompletionHandlers:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(MWResult *)result;
-(void)addHandler:(/*^block*/id)arg1 ;
-(NSArray *)handlers;
@end

