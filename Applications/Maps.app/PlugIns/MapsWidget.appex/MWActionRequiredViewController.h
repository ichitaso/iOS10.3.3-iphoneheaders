/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <MapsWidget/MWWidgetProviding.h>

@protocol MWActionRequiredViewControllerDelegate;
@class UIView, UITapGestureRecognizer, NSString;

@interface MWActionRequiredViewController : UIViewController <MWWidgetProviding> {

	unsigned _actionType;
	id<MWActionRequiredViewControllerDelegate> _delegate;
	UIView* _actionView;
	UITapGestureRecognizer* _tapRecognizer;

}

@property (nonatomic,retain) UIView * actionView;                                                     //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapRecognizer;                                  //@synthesize tapRecognizer=_tapRecognizer - In the implementation block
@property (assign,nonatomic) unsigned actionType;                                                     //@synthesize actionType=_actionType - In the implementation block
@property (assign,nonatomic,__weak) id<MWActionRequiredViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int largestAvailableDisplayMode; 
-(void)setActionView:(UIView *)arg1 ;
-(void)_askToEnableLocationServices:(id)arg1 ;
-(void)_tappedIntro:(id)arg1 ;
-(void)setDelegate:(id<MWActionRequiredViewControllerDelegate>)arg1 ;
-(id<MWActionRequiredViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)setActionType:(unsigned)arg1 ;
-(UITapGestureRecognizer *)tapRecognizer;
-(unsigned)actionType;
-(void)setTapRecognizer:(UITapGestureRecognizer *)arg1 ;
-(void)_updateUI;
-(void)widgetPerformUpdateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(CGSize)arg2 ;
-(int)largestAvailableDisplayMode;
-(UIView *)actionView;
@end

