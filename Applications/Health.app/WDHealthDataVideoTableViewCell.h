/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIStackView, NSString, UILabel, UIImageView, UIActivityIndicatorView;

@interface WDHealthDataVideoTableViewCell : UITableViewCell {

	UIStackView* _cellStackView;
	NSString* _descriptionText;
	UILabel* _descriptionLabel;
	UIImageView* _smallPlayButtonImageView;
	UIActivityIndicatorView* _activityIndicator;
	int _state;

}

@property (assign,nonatomic) int state;              //@synthesize state=_state - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(int)state;
-(void)setState:(int)arg1 ;
-(id)initWithText:(id)arg1 ;
-(void)setupUI;
@end

