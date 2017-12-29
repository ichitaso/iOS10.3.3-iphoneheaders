/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol UITextFieldDelegate;
@class NSString, UITextField;

@interface MapSearchBar : UIView {

	NSString* placeholder;
	UITextField* fmfSearchField;
	id<UITextFieldDelegate> fmfSearchFieldDelegate;

}

@property (nonatomic,retain) NSString * placeholder; 
@property (nonatomic,retain) UITextField * fmfSearchField; 
@property (assign,nonatomic,__weak) id<UITextFieldDelegate> fmfSearchFieldDelegate; 
-(UITextField *)fmfSearchField;
-(void)setFmfSearchFieldDelegate:(id<UITextFieldDelegate>)arg1 ;
-(void)setFmfSearchField:(UITextField *)arg1 ;
-(id<UITextFieldDelegate>)fmfSearchFieldDelegate;
-(void)awakeFromNib;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
@end

