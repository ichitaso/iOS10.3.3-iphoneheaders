/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITargetedProxy.h>
#import <UIKit/_UIViewServiceUIBehaviorInterface.h>

@class _UIViewServiceFencingControlProxy, NSString;

@interface _UIViewServiceUIBehaviorProxy : _UITargetedProxy <_UIViewServiceUIBehaviorInterface> {

	int _remotePID;
	_UIViewServiceFencingControlProxy* _fencingControlProxy;
	int __automatic_invalidation_retainCount;
	char __automatic_invalidation_invalidated;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)proxyWrappingExportedObject:(id)arg1 forCommunicationWithPID:(int)arg2 exportedProtocol:(id)arg3 ;
-(oneway void)release;
-(void)dealloc;
-(id)retain;
-(unsigned)retainCount;
-(char)_isDeallocating;
-(int)__automatic_invalidation_logic;
-(char)_tryRetain;
@end

