/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface FBSProcessExecutionStrategy : NSObject <NSCopying, BSDescriptionProviding> {

	NSString* _strategyName;
	int _schedulingPolicy;
	int _graphicsPolicy;
	int _jetsamPolicy;
	char _customPolicy;
	unsigned _bksReason;
	unsigned _bksFlags;

}

@property (nonatomic,copy) NSString * strategyName;                                //@synthesize strategyName=_strategyName - In the implementation block
@property (assign,nonatomic) int schedulingPolicy;                                 //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
@property (assign,nonatomic) int graphicsPolicy;                                   //@synthesize graphicsPolicy=_graphicsPolicy - In the implementation block
@property (assign,nonatomic) int jetsamPolicy;                                     //@synthesize jetsamPolicy=_jetsamPolicy - In the implementation block
@property (assign,getter=isCustomPolicy,nonatomic) char customPolicy;              //@synthesize customPolicy=_customPolicy - In the implementation block
@property (assign,nonatomic) unsigned reason;                                      //@synthesize bksReason=_bksReason - In the implementation block
@property (assign,nonatomic) unsigned flags;                                       //@synthesize bksFlags=_bksFlags - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)strategyForSchedulingPolicy:(int)arg1 graphicsPolicy:(int)arg2 jetsamPolicy:(int)arg3 ;
+(id)userInteractive;
+(id)userInteractiveWithoutUI;
+(id)backgroundWithUI;
+(id)policyWithReason:(unsigned)arg1 flags:(unsigned)arg2 ;
+(void)initialize;
+(id)background;
-(int)schedulingPolicy;
-(void)setStrategyName:(NSString *)arg1 ;
-(void)setSchedulingPolicy:(int)arg1 ;
-(void)setGraphicsPolicy:(int)arg1 ;
-(void)setJetsamPolicy:(int)arg1 ;
-(void)setCustomPolicy:(char)arg1 ;
-(char)isCustomPolicy;
-(int)graphicsPolicy;
-(int)jetsamPolicy;
-(NSString *)strategyName;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)reason;
-(void)setReason:(unsigned)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
@end

