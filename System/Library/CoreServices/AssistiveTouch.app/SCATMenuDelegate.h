/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCATMenuDelegate <NSObject>
@required
-(char)canSearchForControllableDevicesWithMenu:(id)arg1;
-(char)canReturnControlToMasterDevice:(id)arg1;
-(id)interDeviceCommunicatorForMenu:(id)arg1;
-(void)returnControlToMasterDevice:(id)arg1;
-(void)didStartSysdiagnoseForMenu:(id)arg1;
-(void)menu:(id)arg1 didCompleteSysdiagnoseWithSuccess:(char)arg2;
-(void)menu:(id)arg1 activateRecipe:(id)arg2;
-(CGRect*)menu:(id)arg1 rectToClearForFingersWithGestureSheet:(char)arg2;
-(id)exitActionElementForFingersInMenu:(id)arg1;
-(char)shouldShowAppWideScrollActionsInMenu:(id)arg1;
-(id)menu:(id)arg1 tapContextItemForSheet:(id)arg2;
-(id)menu:(id)arg1 tapAndHoldContextItemForSheet:(id)arg2;
-(char)shouldAddItemSpecificMenuOptionsToMenu:(id)arg1;
-(int)itemMenuStateForMenu:(id)arg1;
-(void)menu:(id)arg1 showTypingCandidates:(id)arg2;
-(id)gesturesSheetForMenu:(id)arg1;
-(void)menu:(id)arg1 showAlternateKeysForKey:(id)arg2;
-(void)menu:(id)arg1 setItemMenuState:(int)arg2;
-(void)menu:(id)arg1 showScrollViewPickerForScrollViews:(id)arg2 elementsToScroll:(id)arg3 scrollAction:(int)arg4;
-(void)didPressScreenChangingButtonInMenu:(id)arg1;
-(void)searchForControllableDevicesWithMenu:(id)arg1;

@end

