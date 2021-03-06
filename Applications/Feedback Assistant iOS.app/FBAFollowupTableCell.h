/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface FBAFollowupTableCell : UITableViewCell {

	UILabel* _promptLabel;
	UILabel* _responseLabel;

}

@property (assign,nonatomic,__weak) UILabel * promptLabel;                //@synthesize promptLabel=_promptLabel - In the implementation block
@property (assign,nonatomic,__weak) UILabel * responseLabel;              //@synthesize responseLabel=_responseLabel - In the implementation block
-(UILabel *)responseLabel;
-(void)setResponseLabel:(UILabel *)arg1 ;
-(void)setPromptLabel:(UILabel *)arg1 ;
-(UILabel *)promptLabel;
@end

