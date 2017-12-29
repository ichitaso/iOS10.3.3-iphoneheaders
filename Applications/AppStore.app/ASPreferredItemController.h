/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIItemStateCenterObserver.h>
#import <AppStore/ASPreferredItemControllerProtocol.h>

@protocol OS_dispatch_queue, ASPreferredItemControllerDelegate;
@class NSObject, NSMapTable, NSString;

@interface ASPreferredItemController : NSObject <SKUIItemStateCenterObserver, ASPreferredItemControllerProtocol> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id<ASPreferredItemControllerDelegate> _delegate;
	NSMapTable* _mapTable;

}

@property (nonatomic,retain) NSMapTable * mapTable;                                              //@synthesize mapTable=_mapTable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<ASPreferredItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)preferredItemForCategory:(id)arg1 ;
-(void)_getItemForCategory:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
-(void)setDelegate:(id<ASPreferredItemControllerDelegate>)arg1 ;
-(id<ASPreferredItemControllerDelegate>)delegate;
-(void)cleanup;
-(void)setMapTable:(NSMapTable *)arg1 ;
-(NSMapTable *)mapTable;
-(void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2 ;
-(void)flushCache;
@end

