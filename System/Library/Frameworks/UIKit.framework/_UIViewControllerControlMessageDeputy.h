/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UITargetedProxy.h>
#import <UIKit/_UIViewServiceDeputy.h>
#import <UIKit/_UIViewServiceUIBehaviorInterface.h>

@class NSString;

@interface _UIViewControllerControlMessageDeputy : _UITargetedProxy <_UIViewServiceDeputy, _UIViewServiceUIBehaviorInterface>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)XPCInterface;
+(id)proxyWithTarget:(id)arg1 ;
-(id)invalidate;
-(void)__prepareForDisconnectionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

