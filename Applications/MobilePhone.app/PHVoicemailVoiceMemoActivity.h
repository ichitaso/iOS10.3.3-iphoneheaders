/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class VMVoicemail;

@interface PHVoicemailVoiceMemoActivity : UIActivity {

	VMVoicemail* _voicemail;

}

@property (nonatomic,retain) VMVoicemail * voicemail;              //@synthesize voicemail=_voicemail - In the implementation block
+(int)activityCategory;
-(VMVoicemail *)voicemail;
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setVoicemail:(VMVoicemail *)arg1 ;
-(id)initWithVoicemail:(id)arg1 ;
@end
