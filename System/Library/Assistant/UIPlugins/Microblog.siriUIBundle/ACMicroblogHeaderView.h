/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUIReusableHeaderView.h>

@class UIImageView;

@interface ACMicroblogHeaderView : SiriUIReusableHeaderView {

	UIImageView* _imageMaskView;
	int _type;

}

@property (assign,nonatomic) int type;              //@synthesize type=_type - In the implementation block
-(void)layoutSubviews;
-(void)setType:(int)arg1 ;
-(int)type;
@end

