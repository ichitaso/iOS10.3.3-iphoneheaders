/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DDActionsService.app/DDActionsService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@class DUEntryViewController, NSString;

@interface DDDictionaryCardViewController : UIViewController <UIWebViewDelegate> {

	DUEntryViewController* _entryViewController;
	char _inPlatter;
	char _styleWasSet;

}

@property (assign,nonatomic) char inPlatter;                        //@synthesize inPlatter=_inPlatter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updatePlatterStyle;
-(id)webView;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(id)initWithDefinitionValue:(id)arg1 ;
-(void)setInPlatter:(char)arg1 ;
-(char)inPlatter;
@end

