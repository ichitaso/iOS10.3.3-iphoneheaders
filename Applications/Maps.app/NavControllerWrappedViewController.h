/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController, UIView, UINavigationController, NSLayoutConstraint, PassThroughView;

@interface NavControllerWrappedViewController : UIViewController {

	UIViewController* _contentViewController;
	float _topOffset;
	UIView* _passThruTargetView;
	UINavigationController* _navigationController;
	NSLayoutConstraint* _passThruViewHeightConstraint;
	PassThroughView* _passThruView;

}

@property (nonatomic,retain) NSLayoutConstraint * passThruViewHeightConstraint;              //@synthesize passThruViewHeightConstraint=_passThruViewHeightConstraint - In the implementation block
@property (nonatomic,retain) PassThroughView * passThruView;                                 //@synthesize passThruView=_passThruView - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;                     //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) float topOffset;                                                //@synthesize topOffset=_topOffset - In the implementation block
@property (assign,nonatomic,__weak) UIView * passThruTargetView;                             //@synthesize passThruTargetView=_passThruTargetView - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController;                //@synthesize navigationController=_navigationController - In the implementation block
-(void)setPassThruTargetView:(UIView *)arg1 ;
-(void)setTopOffset:(float)arg1 animated:(char)arg2 ;
-(float)_passThruViewHeight;
-(UIView *)passThruTargetView;
-(NSLayoutConstraint *)passThruViewHeightConstraint;
-(void)setPassThruViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(PassThroughView *)passThruView;
-(void)setPassThruView:(PassThroughView *)arg1 ;
-(UINavigationController *)navigationController;
-(UIViewController *)contentViewController;
-(void)viewDidLoad;
-(id)initWithContentViewController:(id)arg1 ;
-(float)topOffset;
-(void)setTopOffset:(float)arg1 ;
@end

