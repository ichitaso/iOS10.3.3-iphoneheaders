/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage, UIColor, NSString;


@protocol ACMExternalUIControllerProtocol <ACMUIControllerProtocol>
@property (assign,nonatomic) unsigned signInStyle; 
@property (nonatomic,retain) UIImage * logoImage; 
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) NSString * accountNameFieldPlaceholder; 
@property (assign,nonatomic) CGPoint widgetPosition; 
@property (nonatomic,retain) NSString * widgetAccountLabel; 
@property (nonatomic,retain) id signInButton; 
@property (nonatomic,retain) id cancelButton; 
@property (assign,nonatomic) int widgetPasswordReturnKeyType; 
@property (assign,nonatomic) char shouldAuthenticateOnUserInput; 
@property (assign,nonatomic) NSString * password; 
@required
-(void)setBackgroundColor:(id)arg1;
-(UIColor *)backgroundColor;
-(void)setCancelButton:(id)arg1;
-(id)cancelButton;
-(id)signInButton;
-(void)setLogoImage:(id)arg1;
-(UIImage *)logoImage;
-(void)setWidgetPosition:(CGPoint)arg1;
-(void)setWidgetAccountLabel:(id)arg1;
-(void)setWidgetPasswordReturnKeyType:(int)arg1;
-(void)setSignInButton:(id)arg1;
-(void)setShouldAuthenticateOnUserInput:(char)arg1;
-(void)setAccountNameFieldPlaceholder:(id)arg1;
-(void)setSignInStyle:(unsigned)arg1;
-(unsigned)signInStyle;
-(NSString *)accountNameFieldPlaceholder;
-(CGPoint)widgetPosition;
-(int)widgetPasswordReturnKeyType;
-(NSString *)widgetAccountLabel;
-(char)shouldAuthenticateOnUserInput;
-(NSString *)password;
-(void)setPassword:(id)arg1;

@end

