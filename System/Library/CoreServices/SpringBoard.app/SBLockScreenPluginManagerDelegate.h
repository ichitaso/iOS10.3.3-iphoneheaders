/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:50 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBLockScreenPluginManagerDelegate <NSObject>
@required
-(void)pluginManager:(id)arg1 didLoadPlugin:(id)arg2;
-(void)pluginManager:(id)arg1 willUnloadPlugin:(id)arg2;
-(void)pluginManager:(id)arg1 activePluginDidChange:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidUpdateAppearance:(id)arg2;
-(void)pluginManager:(id)arg1 displayedPluginDidChangeFromPlugin:(id)arg2 toPlugin:(id)arg3;
-(char)pluginManager:(id)arg1 plugin:(id)arg2 handleAction:(id)arg3;

@end

