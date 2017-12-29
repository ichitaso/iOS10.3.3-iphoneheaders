/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIViewController, UIAlertController, SetupChoiceController;

@interface SetupChoice : NSObject {

	NSString* _localizedTitle;
	UIViewController* _nextController;
	id _identifier;
	Class _nextControllerClass;
	/*^block*/id _condition;
	UIAlertController* _alertController;
	SetupChoiceController* _choiceController;

}

@property (nonatomic,copy) id condition;                                                   //@synthesize condition=_condition - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                          //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic,__weak) SetupChoiceController * choiceController;              //@synthesize choiceController=_choiceController - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                      //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,retain) Class nextControllerClass;                                    //@synthesize nextControllerClass=_nextControllerClass - In the implementation block
@property (nonatomic,retain) id identifier;                                                //@synthesize identifier=_identifier - In the implementation block
-(id)initWithChoiceID:(id)arg1 title:(id)arg2 nextControllerClass:(Class)arg3 ;
-(id)confirmationAcceptActionWithTitle:(id)arg1 style:(int)arg2 action:(/*^block*/id)arg3 ;
-(id)confirmationCancelActionWithTitle:(id)arg1 style:(int)arg2 action:(/*^block*/id)arg3 ;
-(void)setConfirmationAlert:(id)arg1 condition:(/*^block*/id)arg2 ;
-(void)setNextControllerClass:(Class)arg1 ;
-(SetupChoiceController *)choiceController;
-(void)runConfirmationIfNeeded;
-(Class)nextControllerClass;
-(void)setChoiceController:(SetupChoiceController *)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)condition;
-(void)setCondition:(id)arg1 ;
@end

