/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BSMachPortTaskNameRight, BSAuditToken;

@interface BSProcessHandle : NSObject <BSXPCCoding, NSSecureCoding> {

	int _pid;
	NSString* _name;
	NSString* _bundleID;
	NSString* _jobLabel;
	NSString* _bundlePath;
	BSMachPortTaskNameRight* _taskNameRight;
	BSAuditToken* _auditToken;

}

@property (nonatomic,copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain,readonly) BSMachPortTaskNameRight * taskNameRight;              //@synthesize taskNameRight=_taskNameRight - In the implementation block
@property (nonatomic,copy) NSString * jobLabel;                                             //@synthesize jobLabel=_jobLabel - In the implementation block
@property (nonatomic,copy) NSString * bundlePath;                                           //@synthesize bundlePath=_bundlePath - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (nonatomic,readonly) int pid;                                                     //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                            //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain,readonly) BSAuditToken * auditToken;                            //@synthesize auditToken=_auditToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)processHandleForNSXPCConnection:(id)arg1 ;
+(id)processHandleForPID:(int)arg1 ;
+(id)processHandleForTaskNameRight:(id)arg1 ;
+(id)processHandleForPID:(int)arg1 bundleID:(id)arg2 ;
+(char)supportsSecureCoding;
+(id)processHandleForAuditToken:(id)arg1 ;
+(id)processHandle;
+(id)processHandleForXPCConnection:(id)arg1 ;
-(id)initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(id)initWithCurrentProcess;
-(id)_initWithPID:(int)arg1 bundleID:(id)arg2 ;
-(char)_currentProcess;
-(void)setJobLabel:(NSString *)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(char)isValid;
-(NSString *)bundleIdentifier;
-(NSString *)bundlePath;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(char)_isRunning;
-(BSAuditToken *)auditToken;
-(char)hasEntitlement:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setBundlePath:(NSString *)arg1 ;
-(NSString *)jobLabel;
-(BSMachPortTaskNameRight *)taskNameRight;
-(id)initWithTaskNameRight:(id)arg1 ;
-(id)initWithAuditToken:(id)arg1 ;
-(id)initWithConnection:(id)arg1 ;
-(int)pid;
-(id)valueForEntitlement:(id)arg1 ;
@end

