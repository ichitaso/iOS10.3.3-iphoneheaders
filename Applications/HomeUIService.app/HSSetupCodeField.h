/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUIService/HomeUIService-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol HSSetupCodeFieldDelegate;
@class NSArray, HSSetupCodeFieldItem, UITextField, NSString;

@interface HSSetupCodeField : UIView <UITextFieldDelegate> {

	id<HSSetupCodeFieldDelegate> _delegate;
	NSArray* _items;
	HSSetupCodeFieldItem* _activeItem;
	float _itemSpacing;
	float _sectionSpacing;
	NSArray* _itemSequence;
	UITextField* _hiddenInputField;

}

@property (nonatomic,retain) NSArray * itemSequence;                                    //@synthesize itemSequence=_itemSequence - In the implementation block
@property (assign,nonatomic,__weak) HSSetupCodeFieldItem * activeItem;                  //@synthesize activeItem=_activeItem - In the implementation block
@property (nonatomic,retain) UITextField * hiddenInputField;                            //@synthesize hiddenInputField=_hiddenInputField - In the implementation block
@property (assign,nonatomic,__weak) id<HSSetupCodeFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * items;                                         //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) float itemSpacing;                                         //@synthesize itemSpacing=_itemSpacing - In the implementation block
@property (assign,nonatomic) float sectionSpacing;                                      //@synthesize sectionSpacing=_sectionSpacing - In the implementation block
@property (nonatomic,readonly) NSString * setupCode; 
@property (getter=isComplete,nonatomic,readonly) char complete; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)hideKeypad;
-(void)showKeypad;
-(void)fieldTapped:(id)arg1 ;
-(HSSetupCodeFieldItem *)activeItem;
-(void)setActiveItem:(HSSetupCodeFieldItem *)arg1 ;
-(UITextField *)hiddenInputField;
-(NSArray *)itemSequence;
-(void)_activateNext;
-(void)_activateLast;
-(void)setItemSequence:(NSArray *)arg1 ;
-(void)setHiddenInputField:(UITextField *)arg1 ;
-(id)init;
-(void)setDelegate:(id<HSSetupCodeFieldDelegate>)arg1 ;
-(id<HSSetupCodeFieldDelegate>)delegate;
-(NSArray *)items;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(float)itemSpacing;
-(void)setItemSpacing:(float)arg1 ;
-(void)clear;
-(void)_prepareConstraints;
-(char)isComplete;
-(NSString *)setupCode;
-(float)sectionSpacing;
-(void)setSectionSpacing:(float)arg1 ;
@end

