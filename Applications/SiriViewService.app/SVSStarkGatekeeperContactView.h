/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface SVSStarkGatekeeperContactView : UIView {

	UILabel* _nameLabel;
	UIImageView* _photoImageView;
	UIImageView* _appIconImageView;

}

@property (getter=_nameLabel,nonatomic,readonly) UILabel * nameLabel;                                //@synthesize nameLabel=_nameLabel - In the implementation block
@property (getter=_photoImageView,nonatomic,readonly) UIImageView * photoImageView;                  //@synthesize photoImageView=_photoImageView - In the implementation block
@property (getter=_appIconImageView,nonatomic,readonly) UIImageView * appIconImageView;              //@synthesize appIconImageView=_appIconImageView - In the implementation block
+(id)associatedDataStore;
-(id)initWithSms:(id)arg1 ;
-(id)initWithMessageIntent:(id)arg1 ;
-(void)_configureWithDisplayName:(id)arg1 contactPhoto:(id)arg2 contactPhotoURL:(id)arg3 appImage:(id)arg4 nameComponents:(id)arg5 ;
-(id)_photoImageView;
-(id)_appIconImageView;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_nameLabel;
@end
