/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SiriUIContentLabel, SiriUIKeyline, SAUIAppPunchOut;

@interface SiriGuideAppPunchoutCell : SiriUIClearBackgroundCell {

	SiriUIContentLabel* _nameLabel;
	char _hasCreatedConstraints;
	SiriUIKeyline* _bottomKeyline;
	SAUIAppPunchOut* _punchOut;

}

@property (nonatomic,copy) SAUIAppPunchOut * punchOut;              //@synthesize punchOut=_punchOut - In the implementation block
+(float)heightOfCell;
+(id)reuseIdentifier;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(void)prepareForReuse;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

