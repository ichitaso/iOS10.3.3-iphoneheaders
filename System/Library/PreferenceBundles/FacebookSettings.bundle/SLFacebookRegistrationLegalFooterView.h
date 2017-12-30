/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/FacebookSettings-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>
#import <UIKit/UIWebViewDelegate.h>

@class UIWebView, NSString;

@interface SLFacebookRegistrationLegalFooterView : UIView <PSHeaderFooterView, UIWebViewDelegate> {

	UIWebView* _webView;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_linkStyle;
-(id)_html;
-(id)_baseURLString;
-(id)_bodyStyle;
-(void)_buildWebView;
-(CGRect)_webFrameForFooterWidth:(float)arg1 ;
-(id)_completeText;
-(void)layoutSubviews;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
@end
