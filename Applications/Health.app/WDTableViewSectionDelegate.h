/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class WDControllerManager;


@protocol WDTableViewSectionDelegate <NSObject>
@property (retain) WDControllerManager * controllerManager; 
@required
-(WDControllerManager *)controllerManager;
-(void)setControllerManager:(id)arg1;
-(void)reloadSection:(unsigned)arg1 animated:(char)arg2;
-(id)indexPathForCell:(id)arg1;
-(void)pushViewController:(id)arg1;
-(void)reloadTable;

@end

