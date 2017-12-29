/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/ACSportsUIController.h>
#import <Sports/ACSportsMatchupViewDelegate.h>

@class ACSportsMatchupView, SAUIAppPunchOut;

@interface ACSportsMatchupDetailsUIController : ACSportsUIController <ACSportsMatchupViewDelegate> {

	ACSportsMatchupView* _matchupView;
	SAUIAppPunchOut* _snippetAppPunchOut;

}
-(char)_useFooterForPunchout;
-(void)matchupViewWantsPunchOut:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(id)initWithSnippet:(id)arg1 ;
-(Class)footerViewClass;
-(float)desiredHeightForFooterView;
-(Class)headerViewClass;
@end
