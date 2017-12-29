/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface RAPInstructionIncorrectView : UIView {

	UIImageView* _chevronView;
	int _displayMode;
	/*^block*/id _tapblock;
	UIImageView* _flagView;

}

@property (assign,nonatomic) int displayMode;                       //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,copy) id tapblock;                             //@synthesize tapblock=_tapblock - In the implementation block
@property (nonatomic,readonly) UIImageView * flagView;              //@synthesize flagView=_flagView - In the implementation block
-(void)showFlag:(char)arg1 ;
-(id)tapblock;
-(void)setTapblock:(id)arg1 ;
-(UIImageView *)flagView;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)displayMode;
-(void)setDisplayMode:(int)arg1 ;
-(void)viewTapped;
@end

