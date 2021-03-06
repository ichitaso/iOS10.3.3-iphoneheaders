/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FaceTime/PHApplicationServices.h>

@class CNContactStore, VMVoicemailManager;

@interface MPApplicationServices : PHApplicationServices {

	CNContactStore* _suggestedContactStore;
	VMVoicemailManager* _voicemailManager;

}

@property (nonatomic,retain) CNContactStore * suggestedContactStore;              //@synthesize suggestedContactStore=_suggestedContactStore - In the implementation block
@property (nonatomic,retain) VMVoicemailManager * voicemailManager;               //@synthesize voicemailManager=_voicemailManager - In the implementation block
+(id)sharedInstance;
-(void)setSuggestedContactStore:(CNContactStore *)arg1 ;
-(id)init;
-(VMVoicemailManager *)voicemailManager;
-(void)setVoicemailManager:(VMVoicemailManager *)arg1 ;
-(CNContactStore *)suggestedContactStore;
@end

