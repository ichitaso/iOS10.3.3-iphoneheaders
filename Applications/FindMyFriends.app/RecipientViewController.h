/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyFriends/FindMyFriends-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MFComposeHeaderViewDelegate.h>
#import <libobjc.A.dylib/MFComposeRecipientTextViewDelegate.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol RecipientSelectionControllerDelegate, RecipientDetailProviderDelegate;
@class MFComposeRecipientTextView, UIScrollView, UIView, NSMutableSet, NSMutableDictionary, NSString;

@interface RecipientViewController : UIViewController <MFComposeHeaderViewDelegate, MFComposeRecipientTextViewDelegate, CNContactPickerDelegate, UINavigationControllerDelegate> {

	char _outOfNetworkAlertShown;
	char _isPhoneNumberRecipientAllowed;
	char _temporaryAllowPhoneNumbers;
	id<RecipientSelectionControllerDelegate> _recipientDelegate;
	id<RecipientDetailProviderDelegate> _recipientDetailsDelegate;
	MFComposeRecipientTextView* _recipientView;
	UIScrollView* _recipientContainerScrollView;
	UIView* _bottomBorderView;
	NSMutableSet* _inNetworkHandles;
	NSMutableDictionary* _handleToUIDMap;
	NSMutableSet* _qualifiedFMFHandleSet;

}

@property (nonatomic,retain) MFComposeRecipientTextView * recipientView;                                       //@synthesize recipientView=_recipientView - In the implementation block
@property (nonatomic,retain) UIScrollView * recipientContainerScrollView;                                      //@synthesize recipientContainerScrollView=_recipientContainerScrollView - In the implementation block
@property (nonatomic,retain) UIView * bottomBorderView;                                                        //@synthesize bottomBorderView=_bottomBorderView - In the implementation block
@property (nonatomic,retain) NSMutableSet * inNetworkHandles;                                                  //@synthesize inNetworkHandles=_inNetworkHandles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handleToUIDMap;                                             //@synthesize handleToUIDMap=_handleToUIDMap - In the implementation block
@property (nonatomic,retain) NSMutableSet * qualifiedFMFHandleSet;                                             //@synthesize qualifiedFMFHandleSet=_qualifiedFMFHandleSet - In the implementation block
@property (assign,nonatomic) char isPhoneNumberRecipientAllowed;                                               //@synthesize isPhoneNumberRecipientAllowed=_isPhoneNumberRecipientAllowed - In the implementation block
@property (assign,nonatomic) char temporaryAllowPhoneNumbers;                                                  //@synthesize temporaryAllowPhoneNumbers=_temporaryAllowPhoneNumbers - In the implementation block
@property (assign,nonatomic,__weak) id<RecipientSelectionControllerDelegate> recipientDelegate;                //@synthesize recipientDelegate=_recipientDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<RecipientDetailProviderDelegate> recipientDetailsDelegate;              //@synthesize recipientDetailsDelegate=_recipientDetailsDelegate - In the implementation block
@property (assign,nonatomic) char outOfNetworkAlertShown;                                                      //@synthesize outOfNetworkAlertShown=_outOfNetworkAlertShown - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRecipientDelegate:(id<RecipientSelectionControllerDelegate>)arg1 ;
-(void)setRecipientDetailsDelegate:(id<RecipientDetailProviderDelegate>)arg1 ;
-(void)setOutOfNetworkAlertShown:(char)arg1 ;
-(void)addRecipientWithHandle:(id)arg1 withUID:(id)arg2 ;
-(id)recipientHandles;
-(char)emailHandleIsSignedInUser:(id)arg1 ;
-(void)clearTextField;
-(void)textFieldShouldResignFirstResponder;
-(void)textFieldShouldBecomeFirstResponder;
-(id)uidForRecipientHandle:(id)arg1 ;
-(id<RecipientDetailProviderDelegate>)recipientDetailsDelegate;
-(void)setIsPhoneNumberRecipientAllowed:(char)arg1 ;
-(void)recipientViewTapped;
-(void)setRecipientContainerScrollView:(UIScrollView *)arg1 ;
-(void)setBottomBorderView:(UIView *)arg1 ;
-(id<RecipientSelectionControllerDelegate>)recipientDelegate;
-(UIScrollView *)recipientContainerScrollView;
-(void)setTemporaryAllowPhoneNumbers:(char)arg1 ;
-(char)shouldAllowAddRecipient;
-(NSMutableDictionary *)handleToUIDMap;
-(id)unformattedRecipientHandles;
-(NSMutableSet *)qualifiedFMFHandleSet;
-(char)isHandleInNetwork:(id)arg1 ;
-(id)unformatHandle:(id)arg1 ;
-(void)updateAtoms;
-(void)displayOutOfNetworkAlert;
-(id)identifierForAddress:(id)arg1 forContact:(id)arg2 ;
-(void)checkRecipientsInNetwork;
-(char)isPhoneNumberRecipientAllowed;
-(char)temporaryAllowPhoneNumbers;
-(char)outOfNetworkAlertShown;
-(void)prefillRecipientWithHandle:(id)arg1 withUID:(id)arg2 ;
-(id)recipientFMFHandles;
-(NSMutableSet *)inNetworkHandles;
-(UIView *)bottomBorderView;
-(void)setInNetworkHandles:(NSMutableSet *)arg1 ;
-(void)setHandleToUIDMap:(NSMutableDictionary *)arg1 ;
-(void)setQualifiedFMFHandleSet:(NSMutableSet *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)peoplePicker;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(void)setRecipientView:(MFComposeRecipientTextView *)arg1 ;
-(MFComposeRecipientTextView *)recipientView;
-(id)recipients;
-(void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(void)composeRecipientView:(id)arg1 textDidChange:(id)arg2 ;
-(void)composeRecipientViewRequestAddRecipient:(id)arg1 ;
-(void)composeRecipientViewDidFinishPickingRecipient:(id)arg1 ;
-(void)composeHeaderView:(id)arg1 didChangeSize:(CGSize)arg2 ;
@end

