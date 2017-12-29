/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/BuddyAboutViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString, UIViewController;

@interface BuddyAboutTextViewController : BuddyAboutViewController <UIWebViewDelegate> {

	char _includesAdditionalFormatting;
	NSString* _titleString;
	NSString* _HTMLString;
	NSString* _linkString;
	UIViewController* _linkedController;

}

@property (nonatomic,retain) NSString * titleString;                           //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) NSString * HTMLString;                            //@synthesize HTMLString=_HTMLString - In the implementation block
@property (nonatomic,retain) NSString * linkString;                            //@synthesize linkString=_linkString - In the implementation block
@property (assign,nonatomic) char includesAdditionalFormatting;                //@synthesize includesAdditionalFormatting=_includesAdditionalFormatting - In the implementation block
@property (nonatomic,retain) UIViewController * linkedController;              //@synthesize linkedController=_linkedController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHTMLString:(NSString *)arg1 ;
-(void)setLinkString:(NSString *)arg1 ;
-(void)setLinkedController:(UIViewController *)arg1 ;
-(void)setIncludesAdditionalFormatting:(char)arg1 ;
-(NSString *)HTMLString;
-(char)includesAdditionalFormatting;
-(NSString *)linkString;
-(UIViewController *)linkedController;
-(unsigned)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
@end

