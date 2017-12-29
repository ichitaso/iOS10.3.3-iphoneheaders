/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIApplicationShortcutItem, BrowserController;

@interface ApplicationShortcutController : NSObject {

	UIApplicationShortcutItem* _showReadingListShortcutItem;
	UIApplicationShortcutItem* _showBookmarksShortcutItem;
	UIApplicationShortcutItem* _newPrivateTabShortcutItem;
	UIApplicationShortcutItem* _newTabShortcutItem;
	BrowserController* _browserController;

}

@property (assign,nonatomic,__weak) BrowserController * browserController;              //@synthesize browserController=_browserController - In the implementation block
-(id)_shortcutItems;
-(void)updateShortcutItemsIfNeeded;
-(char)handleShortcutItemWithType:(id)arg1 ;
-(void)setBrowserController:(BrowserController *)arg1 ;
-(BrowserController *)browserController;
-(id)_shortcutItemWithType:(id)arg1 iconTemplate:(id)arg2 ;
-(void)_openNewEmptyTabWithURLFieldFocused:(char)arg1 privateBrowsingState:(int)arg2 ;
-(void)_showBookmarksPanelWithSelectedCollection:(id)arg1 ;
-(id)init;
@end

