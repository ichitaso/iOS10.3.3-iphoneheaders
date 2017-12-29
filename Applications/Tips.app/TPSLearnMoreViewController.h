/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/Tips
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tips/TPSViewController.h>
#import <libobjc.A.dylib/WKNavigationDelegate.h>

@class WKWebView, TPSTip, NSURL, NSString;

@interface TPSLearnMoreViewController : TPSViewController <WKNavigationDelegate> {

	WKWebView* _webView;
	TPSTip* _tip;
	NSURL* _url;

}

@property (nonatomic,copy) TPSTip * tip;                            //@synthesize tip=_tip - In the implementation block
@property (nonatomic,copy) NSURL * url;                             //@synthesize url=_url - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)connectionChanged;
-(id)initWithURL:(id)arg1 tip:(id)arg2 ;
-(void)dealloc;
-(NSURL *)url;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(void)setUrl:(NSURL *)arg1 ;
-(TPSTip *)tip;
-(void)setTip:(TPSTip *)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(/*^block*/id)arg3 ;
-(void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 ;
@end

