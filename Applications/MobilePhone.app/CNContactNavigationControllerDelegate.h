/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactNavigationControllerDelegate <UINavigationControllerDelegate>
@optional
-(void)contactNavigationControllerDidComplete:(id)arg1;
-(void)contactNavigationControllerDidCancel:(id)arg1;
-(id)contactNavigationController:(id)arg1 contactViewControllerForContact:(id)arg2 preferredMode:(int)arg3;
-(char)contactNavigationController:(id)arg1 presentViewController:(id)arg2 animated:(char)arg3;
-(char)contactNavigationControllerShouldShowContactsOnKeyCommands:(id)arg1;
-(char)contactNavigationController:(id)arg1 canSelectContact:(id)arg2;
-(char)contactNavigationController:(id)arg1 shouldSelectContact:(id)arg2 atIndexPath:(id)arg3;
-(char)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2;
-(char)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
-(void)contactNavigationController:(id)arg1 didDeleteContact:(id)arg2;

@end

