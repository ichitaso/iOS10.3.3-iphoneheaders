/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface RouteNotAvailableView : UIView {

	unsigned _mode;
	UILabel* _messageLabel;

}

@property (assign,nonatomic) unsigned mode;              //@synthesize mode=_mode - In the implementation block
-(void)layoutToFitSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(id)_messageLabel;
-(void)_updateLabelText;
@end

