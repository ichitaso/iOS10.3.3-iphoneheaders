/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/AuxiliaryDebugViewController.h>
#import <Maps/NMMapsAppXPCInterface.h>

@class NSDictionary, GEOActiveTileGroup, NSXPCConnection;

@interface WatchDebugController : AuxiliaryDebugViewController <NMMapsAppXPCInterface> {

	NSDictionary* _debugInfo;
	GEOActiveTileGroup* _activeTileGroup;
	NSXPCConnection* _connection;

}
+(id)navigationDestinationTitle;
-(void)startDirectionsToPreviewRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)clearPreviewRouteWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateDirectionsStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)stopDirections;
-(void)updateDroppedPin:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
@end

