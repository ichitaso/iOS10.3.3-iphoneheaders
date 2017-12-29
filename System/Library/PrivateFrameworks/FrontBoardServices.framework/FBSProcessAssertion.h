/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol FBSProcess;
@class NSString, FBSProcessExecutionPolicy, BKSProcessAssertion;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding> {

	NSString* _name;
	id<FBSProcess> _process;
	FBSProcessExecutionPolicy* _policy;
	unsigned _activationCount;
	char _invalidated;
	BKSProcessAssertion* _assertion;

}

@property (nonatomic,retain,readonly) BKSProcessAssertion * assertion;                 //@synthesize assertion=_assertion - In the implementation block
@property (nonatomic,readonly) unsigned activationCount;                               //@synthesize activationCount=_activationCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                   //@synthesize name=_name - In the implementation block
@property (nonatomic,__weak,readonly) id<FBSProcess> process;                          //@synthesize process=_process - In the implementation block
@property (nonatomic,retain,readonly) FBSProcessExecutionPolicy * policy;              //@synthesize policy=_policy - In the implementation block
@property (getter=isActivated,nonatomic,readonly) char activated; 
@property (getter=isInvalidated,nonatomic,readonly) char invalidated;                  //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(void)deactivate;
-(void)activate;
-(unsigned)activationCount;
-(FBSProcessExecutionPolicy *)policy;
-(BKSProcessAssertion *)assertion;
-(char)isActivated;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3 ;
-(void)_invalidateAssertion:(id)arg1 ;
-(char)isInvalidated;
-(id<FBSProcess>)process;
@end

