/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton, UIView;

@interface RidesAllowRouteSharingView : UIView {

	/*^block*/id _performAllowSharingCommand;
	UILabel* _detailLabel;
	UIButton* _allowActionButton;

}

@property (nonatomic,retain) UILabel * detailLabel;                                     //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,retain) UIButton * allowActionButton;                              //@synthesize allowActionButton=_allowActionButton - In the implementation block
@property (nonatomic,copy) id performAllowSharingCommand;                               //@synthesize performAllowSharingCommand=_performAllowSharingCommand - In the implementation block
@property (nonatomic,readonly) UIView * findAppsCommandPresentationSource; 
-(void)setAllowActionButton:(UIButton *)arg1 ;
-(UIButton *)allowActionButton;
-(UIView *)findAppsCommandPresentationSource;
-(void)allowRouteSharing:(id)arg1 ;
-(id)performAllowSharingCommand;
-(void)setPerformAllowSharingCommand:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(void)_setupViews;
-(void)_setupConstraints;
@end

