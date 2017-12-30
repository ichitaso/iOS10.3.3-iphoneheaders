/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilityBaseListController.h>
#import <AccessibilitySettings/AXEditableTableCellWithStepperDelegate.h>

@class PSSpecifier, NSString;

@interface TypingFeedbackController : AccessibilityBaseListController <AXEditableTableCellWithStepperDelegate> {

	PSSpecifier* _feedbackDelayPickerSpecifier;
	PSSpecifier* _groupSpecifier;

}

@property (nonatomic,retain) PSSpecifier * feedbackDelayPickerSpecifier;              //@synthesize feedbackDelayPickerSpecifier=_feedbackDelayPickerSpecifier - In the implementation block
@property (nonatomic,retain) PSSpecifier * groupSpecifier;                            //@synthesize groupSpecifier=_groupSpecifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_characterFeedbackSpecifiers;
-(void)setFeedbackDelayPickerSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)feedbackDelayPickerSpecifier;
-(void)_updateDelayPickerSpecifiers:(id)arg1 afterSpecifierWithIdentifier:(id)arg2 enabled:(char)arg3 ;
-(id)_delayPickerSpecifiers:(id)arg1 ;
-(double)minimumValueForSpecifier:(id)arg1 ;
-(double)maximumValueForSpecifier:(id)arg1 ;
-(double)stepValueForSpecifier:(id)arg1 ;
-(void)specifier:(id)arg1 setValue:(double)arg2 ;
-(id)stringValueForSpecifier:(id)arg1 ;
-(id)quickTypeWordFeedbackEnabled:(id)arg1 ;
-(void)setWordFeedbackEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setQuickTypeWordFeedbackEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setSpeakCorrectionsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)wordFeedbackEnabled:(id)arg1 ;
-(id)speakCorrectionsEnabled:(id)arg1 ;
-(void)setLetterFeedbackEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setPhoneticFeedbackEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)phoneticFeedbackEnabled:(id)arg1 ;
-(id)letterFeedbackEnabled:(id)arg1 ;
-(void)dealloc;
-(PSSpecifier *)groupSpecifier;
-(void)setGroupSpecifier:(PSSpecifier *)arg1 ;
-(double)valueForSpecifier:(id)arg1 ;
-(id)specifiers;
@end
