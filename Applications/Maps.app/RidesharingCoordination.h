/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AppCoordinator;


@protocol RidesharingCoordination <NSObject>
@property (assign,nonatomic,__weak) AppCoordinator * appCoordinator; 
@required
-(AppCoordinator *)appCoordinator;
-(void)setAppCoordinator:(id)arg1;
-(void)presentDetailsPickingWithProvider:(id)arg1;
-(void)presentExpirationAlertControllerWithProvider:(id)arg1;
-(void)presentCurrentRideWithProvider:(id)arg1;
-(void)viewController:(id)arg1 requestRideWithProvider:(id)arg2;
-(void)viewController:(id)arg1 cancelRequest:(id)arg2;
-(void)viewController:(id)arg1 contactDriver:(id)arg2;
-(void)viewController:(id)arg1 minimizeConfirmation:(id)arg2;
-(void)viewControllerRideCompletionAction:(id)arg1;
-(void)viewControllerNeedsRebooking:(id)arg1;
-(void)viewController:(id)arg1 presentErrorAlertIfNeeded:(id)arg2;

@end

