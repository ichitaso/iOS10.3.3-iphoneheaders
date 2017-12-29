/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WKScriptMessageHandler.h>

@class WKWebView, NSString;

@interface _MFMessageContentViewScriptHandler : NSObject <WKScriptMessageHandler> {

	WKWebView* _webView;
	NSString* _name;
	/*^block*/id _handler;

}

@property (assign,nonatomic,__weak) WKWebView * webView;              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) id handler;                                //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(WKWebView *)webView;
-(void)setWebView:(WKWebView *)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2 ;
@end

