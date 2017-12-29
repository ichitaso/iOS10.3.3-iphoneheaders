/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_group;
@class NSString, NSObject, NSMutableArray;

@interface _SBSynchronizeOperation : NSOperation {

	NSString* _humanReadableDescription;
	NSObject*<OS_dispatch_group> _operationGroup;
	NSMutableArray* _tasks;

}

@property (nonatomic,retain) NSString * humanReadableDescription;              //@synthesize humanReadableDescription=_humanReadableDescription - In the implementation block
-(id)init;
-(void)addTask:(/*^block*/id)arg1 ;
-(void)main;
-(NSString *)humanReadableDescription;
-(void)setHumanReadableDescription:(NSString *)arg1 ;
@end

