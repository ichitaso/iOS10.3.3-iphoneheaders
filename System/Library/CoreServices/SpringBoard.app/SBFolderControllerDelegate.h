/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBFolderControllerDelegate <NSObject>
@optional
-(void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1;

@required
-(Class)controllerClassForFolder:(id)arg1;
-(char)folderController:(id)arg1 draggedIconDidPauseAtLocation:(CGPoint)arg2 inListView:(id)arg3;
-(char)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
-(char)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
-(void)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
-(void)folderControllerShouldBeginEditing:(id)arg1;
-(void)folderControllerDidEndScrolling:(id)arg1;

@end

