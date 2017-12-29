/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSURLSessionTaskMetrics, NSString;

@interface VaryHeaderSupportTaskDelegate : NSObject <NSURLSessionTaskDelegate> {

	NSURLSessionTaskMetrics* _metrics;

}

@property (nonatomic,retain) NSURLSessionTaskMetrics * metrics;              //@synthesize metrics=_metrics - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSURLSessionTaskMetrics *)metrics;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
-(void)setMetrics:(NSURLSessionTaskMetrics *)arg1 ;
@end
