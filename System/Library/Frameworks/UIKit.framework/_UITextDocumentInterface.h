/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewControllerInterface.h>
#import <UIKit/UITextDocumentProxy.h>

@protocol _UITextDocumentInterfaceDelegate;
@class NSString, UITextInputMode, _UIInputViewControllerState, _UIInputViewControllerOutput, TIKeyboardOutput, TIDocumentState, TITextInputTraits;

@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy> {

	id<_UITextDocumentInterfaceDelegate> _delegate;
	_UIInputViewControllerState* _controllerState;
	_UIInputViewControllerOutput* _controllerOutput;
	TIKeyboardOutput* _keyboardOutput;

}

@property (getter=_controllerState,nonatomic,retain) _UIInputViewControllerState * controllerState;                 //@synthesize controllerState=_controllerState - In the implementation block
@property (getter=_controllerOutput,nonatomic,retain) _UIInputViewControllerOutput * controllerOutput;              //@synthesize controllerOutput=_controllerOutput - In the implementation block
@property (getter=_documentState,nonatomic,readonly) TIDocumentState * documentState; 
@property (getter=_textInputTraits,nonatomic,readonly) TITextInputTraits * textInputTraits; 
@property (getter=_keyboardOutput,nonatomic,readonly) TIKeyboardOutput * keyboardOutput;                            //@synthesize keyboardOutput=_keyboardOutput - In the implementation block
@property (assign,getter=_delegate,nonatomic) id<_UITextDocumentInterfaceDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int autocapitalizationType; 
@property (assign,nonatomic) int autocorrectionType; 
@property (assign,nonatomic) int spellCheckingType; 
@property (assign,nonatomic) int keyboardType; 
@property (assign,nonatomic) int keyboardAppearance; 
@property (assign,nonatomic) int returnKeyType; 
@property (assign,nonatomic) char enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) char secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,readonly) char hasText; 
@property (nonatomic,readonly) NSString * documentContextBeforeInput; 
@property (nonatomic,readonly) NSString * documentContextAfterInput; 
@property (nonatomic,readonly) UITextInputMode * documentInputMode; 
-(void)setDelegate:(id<_UITextDocumentInterfaceDelegate>)arg1 ;
-(void)dealloc;
-(id)_delegate;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(char)hasText;
-(int)autocapitalizationType;
-(int)autocorrectionType;
-(int)spellCheckingType;
-(int)keyboardType;
-(int)keyboardAppearance;
-(int)returnKeyType;
-(char)enablesReturnKeyAutomatically;
-(char)isSecureTextEntry;
-(NSString *)textContentType;
-(id)_textInputTraits;
-(UITextInputMode *)documentInputMode;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)setForwardingInterface:(id)arg1 ;
-(id)_controllerState;
-(void)_createControllerOutputIfNecessary;
-(id)_documentState;
-(void)_willPerformOutputOperation;
-(id)_controllerOutput;
-(void)_didPerformOutputOperation;
-(void)adjustTextPositionByCharacterOffset:(int)arg1 ;
-(void)setControllerState:(_UIInputViewControllerState *)arg1 ;
-(void)setControllerOutput:(_UIInputViewControllerOutput *)arg1 ;
-(NSString *)documentContextBeforeInput;
-(NSString *)documentContextAfterInput;
-(void)_setPrimaryLanguage:(id)arg1 ;
-(void)_setShouldDismiss;
-(void)_setShouldAdvanceInputMode;
-(void)_setInputModeList:(int)arg1 touchBegan:(double)arg2 fromLocation:(CGPoint)arg3 updatePoint:(CGPoint)arg4 ;
-(id)_keyboardOutput;
@end

