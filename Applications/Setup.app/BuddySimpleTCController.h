/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol BuddyTCSubControllerDelegate;
@class UIToolbar, UIWebView, NSData;

@interface BuddySimpleTCController : UIViewController {

	UIToolbar* _toolbar;
	UIWebView* _webView;
	id<BuddyTCSubControllerDelegate> _delegate;
	NSData* _content;

}

@property (nonatomic,retain) NSData * content;                                              //@synthesize content=_content - In the implementation block
@property (assign,nonatomic,__weak) id<BuddyTCSubControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)agree:(id)arg1 ;
-(void)disagree:(id)arg1 ;
-(void)setDelegate:(id<BuddyTCSubControllerDelegate>)arg1 ;
-(id<BuddyTCSubControllerDelegate>)delegate;
-(NSData *)content;
-(void)loadView;
-(void)viewDidLoad;
-(void)updateLayout;
-(void)setContent:(NSData *)arg1 ;
-(id)initWithTitle:(id)arg1 content:(id)arg2 ;
@end

