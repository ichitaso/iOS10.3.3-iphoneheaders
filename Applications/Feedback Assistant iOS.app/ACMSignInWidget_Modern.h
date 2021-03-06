/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Feedback Assistant iOS/ACMSignInWidgetProtocol.h>

@protocol ACMSignInWidgetDelegate;
@class UIView, UIColor, UITextField, NSString, NSDictionary, UIButton;

@interface ACMSignInWidget_Modern : NSObject <UITextFieldDelegate, ACMSignInWidgetProtocol> {

	char _shouldAuthenticateOnUserInput;
	char _hideTopSeparator;
	char _hideMargin;
	id<ACMSignInWidgetDelegate> _delegate;
	UIView* _view;
	UIColor* _backgroundColor;
	UITextField* _accountField;
	UITextField* _passwordField;
	NSString* _accountLabelText;
	NSDictionary* _placeholderAttributes;
	UIButton* _accountClearButton;
	UIButton* _passwordClearButton;
	CGPoint _position;

}

@property (nonatomic,retain) UIButton * accountClearButton;                     //@synthesize accountClearButton=_accountClearButton - In the implementation block
@property (nonatomic,retain) UIButton * passwordClearButton;                    //@synthesize passwordClearButton=_passwordClearButton - In the implementation block
@property (assign,nonatomic) char hideTopSeparator;                             //@synthesize hideTopSeparator=_hideTopSeparator - In the implementation block
@property (assign,nonatomic) char hideMargin;                                   //@synthesize hideMargin=_hideMargin - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<ACMSignInWidgetDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * view;                                   //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) UITextField * accountField;                      //@synthesize accountField=_accountField - In the implementation block
@property (nonatomic,readonly) UITextField * passwordField;                     //@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) NSString * accountLabelText;                       //@synthesize accountLabelText=_accountLabelText - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                         //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) NSDictionary * placeholderAttributes;              //@synthesize placeholderAttributes=_placeholderAttributes - In the implementation block
@property (assign,nonatomic) char shouldAuthenticateOnUserInput;                //@synthesize shouldAuthenticateOnUserInput=_shouldAuthenticateOnUserInput - In the implementation block
@property (assign,nonatomic) CGPoint position;                                  //@synthesize position=_position - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<ACMSignInWidgetDelegate>)arg1 ;
-(void)dealloc;
-(id<ACMSignInWidgetDelegate>)delegate;
-(UIView *)view;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(char)textFieldShouldClear:(id)arg1 ;
-(char)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)passwordField;
-(UITextField *)accountField;
-(NSString *)accountLabelText;
-(void)setAccountLabelText:(NSString *)arg1 ;
-(void)setShouldAuthenticateOnUserInput:(char)arg1 ;
-(UIButton *)accountClearButton;
-(UIButton *)passwordClearButton;
-(void)setAccountClearButton:(UIButton *)arg1 ;
-(void)setPasswordClearButton:(UIButton *)arg1 ;
-(char)hideMargin;
-(char)hideTopSeparator;
-(void)applyPlaceholderAttributes;
-(NSDictionary *)placeholderAttributes;
-(id)clearButtonImage;
-(void)clearTextField:(id)arg1 ;
-(void)touchIn:(id)arg1 ;
-(void)touchOut:(id)arg1 ;
-(id)createClearButtonForEditField:(id)arg1 ;
-(void)disableControls:(char)arg1 ;
-(char)shouldAuthenticateOnUserInput;
-(void)setPlaceholderAttributes:(NSDictionary *)arg1 ;
-(void)setHideTopSeparator:(char)arg1 ;
-(void)setHideMargin:(char)arg1 ;
-(float)leftMargin;
-(id)textFieldFont;
@end

