/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, UIWindow;

@interface SBSheetController : NSObject {

	NSMutableDictionary* _appToSheetMap;
	UIWindow* _presentationWindow;

}
+(id)sharedInstance;
-(char)isShowingSheets;
-(id)applicationForTopSheet;
-(void)dismissAllSheets;
-(void)dismissSheetsForApplication:(id)arg1 ;
-(void)dismissRemoteViewIdentifier:(id)arg1 forApplication:(id)arg2 animated:(char)arg3 ;
-(void)_tearDownSheet:(id)arg1 ;
-(void)presentSheetView:(id)arg1 animated:(char)arg2 ;
-(void)dismissSheetView:(id)arg1 animated:(char)arg2 ;
-(void)sendStatusBarOrientationWillChangeToSheets:(int)arg1 duration:(float)arg2 ;
-(char)sheetWantsProgress;
-(char)presentRemoteViewIdentifier:(id)arg1 asSheetForApplication:(id)arg2 requireTopApplication:(char)arg3 animated:(char)arg4 ;
-(id)init;
-(char)isShowingSheetsForApplication:(id)arg1 ;
@end

