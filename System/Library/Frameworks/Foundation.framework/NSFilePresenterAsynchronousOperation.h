/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@interface NSFilePresenterAsynchronousOperation : NSOperation {

	/*^block*/id _block;
	char _isFinished;
	char _isExecuting;

}
+(id)operationWithBlock:(/*^block*/id)arg1 ;
-(void)start;
-(char)isFinished;
-(char)isExecuting;
-(void)finish;
-(char)isAsynchronous;
@end

