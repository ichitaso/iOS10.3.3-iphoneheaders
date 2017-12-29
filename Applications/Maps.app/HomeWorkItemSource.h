/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PersonalizedItemSource.h>

@protocol OS_dispatch_queue;
@class NSArray, NSObject, RTRoutineManager;

@interface HomeWorkItemSource : PersonalizedItemSource {

	NSArray* _items;
	NSObject*<OS_dispatch_queue> _lock;
	RTRoutineManager* _routineManager;
	char _routineEnabled;

}
-(void)personalizedItemDidChange:(id)arg1 ;
-(void)_geocodeAddress:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchHomeWorkLocations;
-(id)init;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(id)allItems;
@end
