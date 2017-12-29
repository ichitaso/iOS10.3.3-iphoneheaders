/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/COSSetupPageViewController.h>

@class NSString, UIImage;

@interface COSAboutViewController : COSSetupPageViewController {

	NSString* _titleString;
	UIImage* _headerGlyph;
	/*^block*/id _onDismiss;

}

@property (copy) id onDismiss;                                    //@synthesize onDismiss=_onDismiss - In the implementation block
@property (nonatomic,retain) NSString * titleString;              //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) UIImage * headerGlyph;               //@synthesize headerGlyph=_headerGlyph - In the implementation block
-(void)setHeaderGlyph:(UIImage *)arg1 ;
-(void)presentWithController:(id)arg1 ;
-(UIImage *)headerGlyph;
-(void)presentWithController:(id)arg1 onDismiss:(/*^block*/id)arg2 ;
-(id)onDismiss;
-(void)setOnDismiss:(id)arg1 ;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)donePressed;
@end

