/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertController.h>

@class TUCall, TUHandle, NSString;

@interface PHDeclineWithActionController : UIAlertController {

	TUCall* _callToDecline;

}

@property (nonatomic,copy,readonly) TUHandle * recipientHandle; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,readonly) int addressBookIdentifier; 
@property (nonatomic,copy,readonly) NSString * dismissalAssertionReason; 
@property (retain) TUCall * callToDecline;                                            //@synthesize callToDecline=_callToDecline - In the implementation block
+(id)declineWithActionControllerWithCall:(id)arg1 ;
+(id)declineWithActionControllerWithCall:(id)arg1 title:(id)arg2 message:(id)arg3 ;
-(NSString *)dismissalAssertionReason;
-(TUCall *)callToDecline;
-(void)setCallToDecline:(TUCall *)arg1 ;
-(void)declineCall;
-(TUHandle *)recipientHandle;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(NSString *)displayName;
-(int)addressBookIdentifier;
@end

