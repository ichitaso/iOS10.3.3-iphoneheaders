/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:15:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CallKit.framework/XPCServices/com.apple.CallKit.CallDirectory.xpc/com.apple.CallKit.CallDirectory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CDXSetExtensionEnabledOperationLoadExtensionDataOperation <NSObject>
@property (assign,nonatomic) char allowLoadingDisabledExtensions; 
@required
-(void)setAllowLoadingDisabledExtensions:(char)arg1;
-(char)allowLoadingDisabledExtensions;
-(void)performWithCompletionHandler:(/*^block*/id)arg1;

@end
