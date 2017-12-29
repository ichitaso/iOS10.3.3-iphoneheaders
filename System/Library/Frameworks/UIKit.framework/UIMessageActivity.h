/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class MFMessageComposeViewController;

@interface UIMessageActivity : UIActivity {

	char _sourceIsManaged;
	MFMessageComposeViewController* _messageComposeViewController;

}

@property (nonatomic,retain) MFMessageComposeViewController * messageComposeViewController;              //@synthesize messageComposeViewController=_messageComposeViewController - In the implementation block
@property (assign,nonatomic) char sourceIsManaged;                                                       //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
+(int)activityCategory;
+(id)applicationBundleID;
-(void)dealloc;
-(void)_cleanup;
-(char)sourceIsManaged;
-(id)activityType;
-(id)_activityImage;
-(id)_activitySettingsImage;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setSourceIsManaged:(char)arg1 ;
-(id)activityViewController;
-(void)setMessageComposeViewController:(MFMessageComposeViewController *)arg1 ;
-(MFMessageComposeViewController *)messageComposeViewController;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
@end

