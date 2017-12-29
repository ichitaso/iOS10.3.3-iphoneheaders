/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/WebSheet.app/WebSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebDefaultPolicyDelegate.h>

@class UIWebView;

@interface WebSheetPolicyDelegate : WebDefaultPolicyDelegate {

	UIWebView* _webView;

}

@property (assign,nonatomic) UIWebView * webView;              //@synthesize webView=_webView - In the implementation block
-(UIWebView *)webView;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5 ;
-(void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5 ;
-(void)setWebView:(UIWebView *)arg1 ;
-(id)initWithWebView:(id)arg1 ;
@end

