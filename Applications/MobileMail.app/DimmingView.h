/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@interface DimmingView : UIView {

	id _delegate;

}

@property (assign,nonatomic) id delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char transparent; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)setTransparent:(char)arg1 ;
-(char)transparent;
@end

