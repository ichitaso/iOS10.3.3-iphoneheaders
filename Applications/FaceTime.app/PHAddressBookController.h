/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <AddressBookUI/ABPeoplePickerNavigationController.h>
#import <FaceTime/PhoneTabViewController.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>

@protocol PHAddressBookControllerDelegate;
@class NSString;

@interface PHAddressBookController : ABPeoplePickerNavigationController <PhoneTabViewController, ABPeoplePickerNavigationControllerDelegate> {

	char _disableContactsWithoutHandles;
	id<PHAddressBookControllerDelegate> _addressBookControllerDelegate;
	int _abuiStyle;

}

@property (assign) int abuiStyle;                                                                            //@synthesize abuiStyle=_abuiStyle - In the implementation block
@property (readonly) char shouldSaveAndRestoreState; 
@property (assign) void* savedPerson; 
@property (assign,nonatomic) char disableContactsWithoutHandles;                                             //@synthesize disableContactsWithoutHandles=_disableContactsWithoutHandles - In the implementation block
@property (assign,nonatomic) id<PHAddressBookControllerDelegate> addressBookControllerDelegate;              //@synthesize addressBookControllerDelegate=_addressBookControllerDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)tabBarSystemItem;
+(id)tabBarIconName;
+(int)tabViewType;
+(id)defaultPNGName;
+(SCD_Struct_Ph0)badge;
-(void)prepareForSnapshot;
-(void)setAddressBookControllerDelegate:(id<PHAddressBookControllerDelegate>)arg1 ;
-(void)setDisableContactsWithoutHandles:(char)arg1 ;
-(void)setAbuiStyle:(int)arg1 ;
-(void)_updatePickerPhoneNumber:(id)arg1 ;
-(void)_updatePickerBanner:(id)arg1 ;
-(void)_applicationDeactivated;
-(void)_restoreState;
-(void)_saveState;
-(id<PHAddressBookControllerDelegate>)addressBookControllerDelegate;
-(char)disableContactsWithoutHandles;
-(char)shouldSaveAndRestoreState;
-(void)setSavedPerson:(void*)arg1 ;
-(void*)savedPerson;
-(int)abuiStyle;
-(char)tabBarControllerShouldSelectViewController:(id)arg1 ;
-(void)dealloc;
-(id)popViewControllerAnimated:(char)arg1 ;
-(void)applicationWillSuspend;
-(void)loadView;
-(void)presentViewController:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)pushViewController:(id)arg1 animated:(char)arg2 ;
-(id)initWithStyle:(int)arg1 ;
-(void)handleURL:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(char)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(char)shouldSnapshot;
@end

