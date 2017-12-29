/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FaceTime.app/FaceTime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/FaceTime-Structs.h>
#import <ContactsUI/CNContactNavigationController.h>
#import <libobjc.A.dylib/CNContactNavigationControllerDelegate.h>
#import <FaceTime/PhoneTabViewController.h>

@protocol PHContactsControllerDelegate;
@class NSString, CNContact;

@interface PHContactsViewController : CNContactNavigationController <CNContactNavigationControllerDelegate, PhoneTabViewController> {

	char _disableContactsWithoutHandles;
	char _shouldFetchTelephoneNumber;
	id<PHContactsControllerDelegate> _contactsControllerDelegate;
	int _style;
	NSString* _telephoneNumber;

}

@property (assign) int style;                                                                          //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char shouldFetchTelephoneNumber;                                          //@synthesize shouldFetchTelephoneNumber=_shouldFetchTelephoneNumber - In the implementation block
@property (nonatomic,copy) NSString * telephoneNumber;                                                 //@synthesize telephoneNumber=_telephoneNumber - In the implementation block
@property (readonly) char shouldSaveAndRestoreState; 
@property (retain) CNContact * savedPerson; 
@property (assign,nonatomic) char disableContactsWithoutHandles;                                       //@synthesize disableContactsWithoutHandles=_disableContactsWithoutHandles - In the implementation block
@property (assign,nonatomic) id<PHContactsControllerDelegate> contactsControllerDelegate;              //@synthesize contactsControllerDelegate=_contactsControllerDelegate - In the implementation block
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
-(void)addNotificationObservers;
-(void)setDisableContactsWithoutHandles:(char)arg1 ;
-(void)_restoreState;
-(char)disableContactsWithoutHandles;
-(char)shouldSaveAndRestoreState;
-(void)setSavedPerson:(CNContact *)arg1 ;
-(CNContact *)savedPerson;
-(void)removeNotificationObservers;
-(void)fetchPreferences;
-(void)fetchTelephoneNumber;
-(char)shouldFetchTelephoneNumber;
-(id<PHContactsControllerDelegate>)contactsControllerDelegate;
-(void)setShouldFetchTelephoneNumber:(char)arg1 ;
-(void)setTelephoneNumber:(NSString *)arg1 ;
-(void)phoneApplicationPreferencesChanged:(id)arg1 ;
-(void)phoneApplicationLocaleChanged:(id)arg1 ;
-(void)setContactsControllerDelegate:(id<PHContactsControllerDelegate>)arg1 ;
-(char)tabBarControllerShouldSelectViewController:(id)arg1 ;
-(void)dealloc;
-(int)style;
-(void)viewWillAppear:(char)arg1 ;
-(void)setStyle:(int)arg1 ;
-(void)viewDidLoad;
-(id)initWithStyle:(int)arg1 ;
-(void)handleURL:(id)arg1 ;
-(void)contactNavigationControllerDidCancel:(id)arg1 ;
-(char)contactNavigationController:(id)arg1 canSelectContact:(id)arg2 ;
-(char)contactNavigationController:(id)arg1 shouldShowCardForContact:(id)arg2 ;
-(char)contactNavigationController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2 ;
-(NSString *)telephoneNumber;
-(char)shouldSnapshot;
@end

