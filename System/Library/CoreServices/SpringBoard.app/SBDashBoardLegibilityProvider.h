/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBWallpaperObserver.h>

@protocol SBDashBoardLegibilityProviderDelegate;
@class SBWallpaperController, NSString;

@interface SBDashBoardLegibilityProvider : NSObject <SBWallpaperObserver> {

	id<SBDashBoardLegibilityProviderDelegate> _delegate;
	SBWallpaperController* _wallpaperController;

}

@property (nonatomic,retain) SBWallpaperController * wallpaperController;                            //@synthesize wallpaperController=_wallpaperController - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardLegibilityProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)wallpaperDidChangeForVariant:(int)arg1 ;
-(void)wallpaperLegibilitySettingsDidChange:(id)arg1 forVariant:(int)arg2 ;
-(id)initWithWallpaperController:(id)arg1 ;
-(id)_wallpaperLegibilitySettings;
-(id)currentLegibilitySettings;
-(SBWallpaperController *)wallpaperController;
-(void)setWallpaperController:(SBWallpaperController *)arg1 ;
-(id)init;
-(void)setDelegate:(id<SBDashBoardLegibilityProviderDelegate>)arg1 ;
-(id<SBDashBoardLegibilityProviderDelegate>)delegate;
-(void)_notifyDelegate;
@end

