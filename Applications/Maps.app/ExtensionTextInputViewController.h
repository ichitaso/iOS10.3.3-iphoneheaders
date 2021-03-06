/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol ExtensionTextInputViewControllerDelegate;
@class NSString, UITextView;

@interface ExtensionTextInputViewController : UITableViewController {

	id<ExtensionTextInputViewControllerDelegate> _inputDelegate;
	NSString* _titleText;
	NSString* _placeholderText;
	NSString* _initializedText;
	UITextView* _textView;

}

@property (nonatomic,retain) NSString * titleText;                                                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) NSString * placeholderText;                                                     //@synthesize placeholderText=_placeholderText - In the implementation block
@property (nonatomic,retain) NSString * initializedText;                                                     //@synthesize initializedText=_initializedText - In the implementation block
@property (nonatomic,retain) UITextView * textView;                                                          //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<ExtensionTextInputViewControllerDelegate> inputDelegate;              //@synthesize inputDelegate=_inputDelegate - In the implementation block
@property (nonatomic,readonly) NSString * text; 
-(id)initWithTitle:(id)arg1 placeholderText:(id)arg2 text:(id)arg3 ;
-(void)configureTableView;
-(void)configureTextView;
-(NSString *)initializedText;
-(void)setInitializedText:(NSString *)arg1 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(NSString *)text;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id<ExtensionTextInputViewControllerDelegate>)inputDelegate;
-(void)setInputDelegate:(id<ExtensionTextInputViewControllerDelegate>)arg1 ;
-(void)setTextView:(UITextView *)arg1 ;
-(void)viewDidLoad;
-(void)setTitleText:(NSString *)arg1 ;
-(UITextView *)textView;
-(NSString *)titleText;
-(NSString *)placeholderText;
-(void)setPlaceholderText:(NSString *)arg1 ;
-(void)doneButtonTapped:(id)arg1 ;
@end

