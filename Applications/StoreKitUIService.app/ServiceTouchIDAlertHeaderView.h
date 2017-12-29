/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUIService/StoreKitUIService-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, NSString, UIImage;

@interface ServiceTouchIDAlertHeaderView : UIView {

	UIImageView* _imageView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * image; 
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(void)shakeTitleView;
@end

