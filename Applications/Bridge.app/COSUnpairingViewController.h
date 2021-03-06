/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>

@class NSString, UILabel, UIActivityIndicatorView;

@interface COSUnpairingViewController : COSSetupPageViewController {

	NSString* _titleString;
	UILabel* _headerLabel;
	UILabel* _activityLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) NSString * titleString;                                   //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                    //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * activityLabel;                                  //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(void)presentWithController:(id)arg1 ;
-(void)setActivityLabel:(UILabel *)arg1 ;
-(id)init;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(UILabel *)headerLabel;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)activityLabel;
@end

