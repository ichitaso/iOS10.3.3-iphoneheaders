/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/com.apple.mobilenotes.SharingExtension-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface ICTintedLayer : CALayer {

	UIColor* _tintColor;
	id _originalContents;

}

@property (nonatomic,retain) id originalContents;              //@synthesize originalContents=_originalContents - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
-(id)originalContents;
-(void)setOriginalContents:(id)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setContents:(id)arg1 ;
-(void)updateContents;
@end
