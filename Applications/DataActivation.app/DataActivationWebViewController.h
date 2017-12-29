/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DataActivation.app/DataActivation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <DataActivation/DataActivationLoadingViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol DataActivationWebViewControllerDelegate;
@class DataActivationLoadingViewController, UIWebView, UIView, UIBarButtonItem, UIActivityIndicatorView, NSString;

@interface DataActivationWebViewController : UIViewController <DataActivationLoadingViewController, UIWebViewDelegate> {

	DataActivationLoadingViewController* _loadingViewController;
	UIWebView* _webView;
	UIView* _contentView;
	UIBarButtonItem* _cancelButton;
	UIActivityIndicatorView* _headerActivityIndicator;
	char _headerActivityIndicatorVisible;
	char _loadingViewDidSwapOut;
	id<DataActivationWebViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DataActivationWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIWebView * webView; 
@property (nonatomic,readonly) UIView * contentView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dataActivationLoadingViewControllerDidLoad:(id)arg1 ;
-(void)setHeaderShowsVerifyingIndicator:(char)arg1 ;
-(void)_keyboardDidShow;
-(void)_tearDownControllersInAllWebFrames;
-(void)_setCancelButtonVisible:(char)arg1 animated:(char)arg2 ;
-(void)_dumpWebarchive;
-(void)_setAccountUpdatedSuccessfull;
-(void)swapOutLoadingView;
-(id)_allWebFrames;
-(void)tearDownControllerInWebFrame:(id)arg1 ;
-(void)setupControllerInWebFrame:(id)arg1 ;
-(void)_hideCancelButton;
-(void)_showVerifyingIndicator;
-(void)_hideVerifyingIndicator;
-(void)_unpinInputViews;
-(UIView *)contentView;
-(void)setDelegate:(id<DataActivationWebViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<DataActivationWebViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIWebView *)webView;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(id)uiWebView:(id)arg1 connectionPropertiesForResource:(id)arg2 dataSource:(id)arg3 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)uiWebView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3 ;
-(void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2 ;
-(void)uiWebViewClose:(id)arg1 ;
-(id)uiWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3 ;
-(void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4 ;
-(void)stopLoading;
-(void)_showCancelButton;
-(void)_showLoadingView;
-(void)loadData:(id)arg1 ;
-(void)_done;
@end

