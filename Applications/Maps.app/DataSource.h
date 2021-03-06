/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DataSourceDelegate;
#import <Maps/Maps-Structs.h>
@class ListInteractionSession, NSDate, NSMutableDictionary;

@interface DataSource : NSObject {

	ListInteractionSession* _currentListInteractionSession;
	NSDate* _dateActive;
	NSMutableDictionary* _proactiveItemAddDates;
	char _active;
	id<DataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char active;                                         //@synthesize active=_active - In the implementation block
-(id)objectsForAnalytics;
-(id)searchTextForAnalyics;
-(void)sendCurrentListSession;
-(int)listInteractionSessionType;
-(void)selectAtIndexPath:(id)arg1 ;
-(void)sendAnalyticsForDataAtIndexPath:(id)arg1 object:(id)arg2 action:(int)arg3 logContext:(id)arg4 ;
-(void)setDelegate:(id<DataSourceDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<DataSourceDelegate>)delegate;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(char)active;
-(void)setActive:(char)arg1 ;
-(id)objectAtIndexPath:(id)arg1 ;
@end

