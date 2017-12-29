/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>

@protocol _UIIVCInterface;
@interface UIInputViewControllerInterfaceClient : NSExtensionContext {

	id<_UIIVCInterface> _forwardingInterface;

}

@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;              //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)dealloc;
-(id)responseDelegate;
-(id<_UIIVCInterface>)forwardingInterface;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)_tearDownRemoteService;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
@end

