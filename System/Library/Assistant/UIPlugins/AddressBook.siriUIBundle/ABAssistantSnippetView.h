/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/AddressBook.siriUIBundle/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBook/AddressBook-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CNContactContentViewControllerDelegate.h>

@class CNContactContentViewController, SiriUISnippetViewController, NSString;

@interface ABAssistantSnippetView : UIView <CNContactContentViewControllerDelegate> {

	CNContactContentViewController* _contactViewController;
	SiriUISnippetViewController* _viewController;
	char _allowsSelection;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_displayIdentifier;
-(void)openContact:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contact:(id)arg2 displayedProperties:(id)arg3 viewController:(id)arg4 ;
-(char)_deviceIsLockedWithPassword;
-(void)_preventMoreSelections;
-(void)dealloc;
-(float)desiredHeightForWidth:(float)arg1 ;
-(char)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 propertyIdentifier:(id)arg4 ;
@end
