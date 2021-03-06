/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/MobileStoreSettings.bundle/MobileStoreSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class StoreSettingsLinkButton, NSString;

@interface SUSettingsLinkHeaderFooterView : UIView <PSHeaderFooterView> {

	StoreSettingsLinkButton* _linkButton;
	NSString* _linkURLBagKey;

}
+(id)groupSpecifierWithFooterLinkWithTitle:(id)arg1 URLBagKey:(id)arg2 ;
+(id)linkAttributedStringWithTitle:(id)arg1 highlighted:(char)arg2 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)_buttonAction:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(float)preferredHeightForWidth:(float)arg1 ;
@end

