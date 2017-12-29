/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, ProminentActionButton;

@interface RidesharingOnboardingView : UIView {

	unsigned _purpose;
	NSString* _destinationName;
	NSString* _appName;
	/*^block*/id _performProminentCommand;
	/*^block*/id _performDetailCommand;
	UILabel* _label;
	ProminentActionButton* _prominentButton;
	ProminentActionButton* _detailButton;

}

@property (nonatomic,retain) UILabel * label;                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) ProminentActionButton * prominentButton;              //@synthesize prominentButton=_prominentButton - In the implementation block
@property (nonatomic,retain) ProminentActionButton * detailButton;                 //@synthesize detailButton=_detailButton - In the implementation block
@property (nonatomic,readonly) unsigned purpose;                                   //@synthesize purpose=_purpose - In the implementation block
@property (nonatomic,copy) NSString * destinationName;                             //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,copy) NSString * appName;                                     //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) id performProminentCommand;                             //@synthesize performProminentCommand=_performProminentCommand - In the implementation block
@property (nonatomic,copy) id performDetailCommand;                                //@synthesize performDetailCommand=_performDetailCommand - In the implementation block
-(id)initWithFrame:(CGRect)arg1 onboardingPurpose:(unsigned)arg2 ;
-(void)_configureTitles;
-(id)termsTextForPurpose:(unsigned)arg1 ;
-(id)actionButtonTextForPurpose:(unsigned)arg1 ;
-(id)detailButtonTextForPurpose:(unsigned)arg1 ;
-(void)_performPrimaryAction:(id)arg1 ;
-(void)_performSecondaryAction:(id)arg1 ;
-(id)performProminentCommand;
-(void)setPerformProminentCommand:(id)arg1 ;
-(id)performDetailCommand;
-(void)setPerformDetailCommand:(id)arg1 ;
-(ProminentActionButton *)prominentButton;
-(void)setProminentButton:(ProminentActionButton *)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(NSString *)destinationName;
-(void)setDestinationName:(NSString *)arg1 ;
-(unsigned)purpose;
-(NSString *)appName;
-(void)setAppName:(NSString *)arg1 ;
-(void)setDetailButton:(ProminentActionButton *)arg1 ;
-(ProminentActionButton *)detailButton;
-(void)_setupViews;
-(void)_setupConstraints;
@end

