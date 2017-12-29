/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <FaceTime/DialerLCDFieldDelegate.h>

@protocol DialerLCDFieldProtocol, TPDialerKeypadProtocol, DialerViewDelegate;
@class UIView, UIControl, NSString;

@interface PHAbstractDialerView : UIView <DialerLCDFieldDelegate> {

	char _inCallMode;
	UIView*<DialerLCDFieldProtocol> _lcdView;
	UIView*<TPDialerKeypadProtocol> _phonePadView;
	id<DialerViewDelegate> _delegate;
	UIControl* _addContactButton;
	UIControl* _callButton;
	UIControl* _deleteButton;

}

@property (assign,nonatomic) char inCallMode;                                           //@synthesize inCallMode=_inCallMode - In the implementation block
@property (nonatomic,retain) UIView*<DialerLCDFieldProtocol> lcdView;                   //@synthesize lcdView=_lcdView - In the implementation block
@property (nonatomic,retain) UIView*<TPDialerKeypadProtocol> phonePadView;              //@synthesize phonePadView=_phonePadView - In the implementation block
@property (assign,nonatomic) id<DialerViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIControl * addContactButton;                              //@synthesize addContactButton=_addContactButton - In the implementation block
@property (nonatomic,retain) UIControl * callButton;                                    //@synthesize callButton=_callButton - In the implementation block
@property (nonatomic,retain) UIControl * deleteButton;                                  //@synthesize deleteButton=_deleteButton - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLcdView:(UIView*<DialerLCDFieldProtocol>)arg1 ;
-(UIView*<DialerLCDFieldProtocol>)lcdView;
-(void)setPhonePadView:(UIView*<TPDialerKeypadProtocol>)arg1 ;
-(UIView*<TPDialerKeypadProtocol>)phonePadView;
-(char)inCallMode;
-(void)setInCallMode:(char)arg1 ;
-(UIControl *)addContactButton;
-(void)setAddContactButton:(UIControl *)arg1 ;
-(void)dialerField:(id)arg1 stringWasPasted:(id)arg2 ;
-(void)dialerLCDFieldTextDidChange:(id)arg1 ;
-(UIControl *)callButton;
-(void)setCallButton:(UIControl *)arg1 ;
-(void)setDelegate:(id<DialerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<DialerViewDelegate>)delegate;
-(UIControl *)deleteButton;
-(void)setDeleteButton:(UIControl *)arg1 ;
@end

