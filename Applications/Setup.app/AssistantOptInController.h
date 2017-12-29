/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/VTUIEnrollTrainingViewControllerDelegate.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class VTUIEnrollTrainingViewController, NSString;

@interface AssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BuddyController> {

	VTUIEnrollTrainingViewController* _enrollmentController;
	char _didOfferVoiceTrigger;
	id<BuddyControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)controllerNeedsToRun;
+(void)skip;
-(void)controllerWasPopped;
-(char)controllerAllowsNavigatingBack;
-(void)_removeSiriPanesFromNavHierarchy;
-(id)init;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(id<BuddyControllerDelegate>)delegate;
-(id)viewController;
-(void)setAssistantEnabled:(char)arg1 ;
-(void)skipSetup;
-(void)showLearnMore;
-(void)continueSetup;
@end
