/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSProcessExecutionProvision.h>

@protocol OS_dispatch_queue;
@class NSObject, BSTimer, BSMachPortSendRight;

@interface FBSProcessResourceProvision : FBSProcessExecutionProvision {

	SCD_Struct_FB4 _allowance;
	unsigned long long _baselineValue;
	unsigned long long _consumedValue;
	NSObject*<OS_dispatch_queue> _queue;
	BSTimer* _timer;
	BSMachPortSendRight* _taskRight;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) SCD_Struct_FB4 allowance;              //@synthesize allowance=_allowance - In the implementation block
+(id)provisionWithResourceType:(int)arg1 timeInterval:(double)arg2 ;
+(id)provisionWithAllowance:(SCD_Struct_FB4)arg1 ;
-(void)_beginMonitoring;
-(id)initWithAllowance:(SCD_Struct_FB4)arg1 ;
-(char)_queue_updateConsumption;
-(double)_getElapsedCPUTimeForTaskPort:(unsigned)arg1 ;
-(void)_queue_noteAllowanceExhausted;
-(void)_queue_stopMonitoring;
-(void)_queue_evaluateConsumption;
-(char)_queue_calculateValueConsumed:(out unsigned long long*)arg1 ;
-(SCD_Struct_FB4)allowance;
-(void)setAllowance:(SCD_Struct_FB4)arg1 ;
-(void)dealloc;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_stopMonitoring;
-(void)_prepareForReuse;
-(id)succinctDescriptionBuilder;
-(char)isResourceProvision;
-(char)allowanceRemaining:(out SCD_Struct_FB4*)arg1 ;
-(void)_updateProgress;
@end

