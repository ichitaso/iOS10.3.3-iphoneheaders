/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Music.app/PlugIns/StoreFlowExtension.appex/StoreFlowExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SUClientInterfaceDelegatePrivate <SUClientInterfaceDelegate>
@optional
-(void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3;
-(void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)clientInterface:(id)arg1 willDismissViewController:(id)arg2;
-(void)clientInterface:(id)arg1 willPresentViewController:(id)arg2;
-(void)clientInterface:(id)arg1 dismissViewController:(id)arg2 animated:(char)arg3 completion:(/*^block*/id)arg4;
-(void)clientInterface:(id)arg1 presentSafariViewControllerWithURL:(id)arg2 fromViewController:(id)arg3 animated:(char)arg4 completion:(/*^block*/id)arg5;
-(void)clientInterface:(id)arg1 dismissSafariViewControllerAnimated:(char)arg2 fromViewController:(id)arg3 completion:(/*^block*/id)arg4;
-(char)clientInterface:(id)arg1 isAllowedToOpenExternalURL:(id)arg2;

@end
