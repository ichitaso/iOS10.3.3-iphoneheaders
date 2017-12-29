/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Route, TransitDirectionsListDataSourceBuilder, NSArray;

@interface TransitDirectionsListDataSource : NSObject {

	Route* _route;
	float _listWidthForLeadingInset;
	float _transitDirectionsListInstructionsLeadingInset;
	TransitDirectionsListDataSourceBuilder* _dataSourceBuilder;

}

@property (nonatomic,readonly) NSArray * _transitDirectionsListItems; 
@property (nonatomic,retain) TransitDirectionsListDataSourceBuilder * dataSourceBuilder;              //@synthesize dataSourceBuilder=_dataSourceBuilder - In the implementation block
@property (nonatomic,__weak,readonly) Route * route;                                                  //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) float transitDirectionsListInstructionsLeadingInset;                   //@synthesize transitDirectionsListInstructionsLeadingInset=_transitDirectionsListInstructionsLeadingInset - In the implementation block
-(TransitDirectionsListDataSourceBuilder *)dataSourceBuilder;
-(void)measureShieldWidthForListWidth:(float)arg1 ;
-(void)refreshItemInstructionStrings;
-(void)updateForClusteredLegSelectedRideIndexChange;
-(void)_rebuildItems;
-(id)_expandedItemsIndices;
-(void)_expandItemsAtIndices:(id)arg1 ;
-(void)resetArtworkSize;
-(id)transitSegmentSectionRanges;
-(int)numberofItemsInSection:(int)arg1 ;
-(int)numberofItemsInSection:(int)arg1 forceExpandItems:(char)arg2 ;
-(id)itemAtIndexPath:(id)arg1 forceExpandItems:(char)arg2 ;
-(id)_itemAtIndexPath:(id)arg1 currentPosition:(unsigned)arg2 inItems:(id)arg3 forceExpandItems:(char)arg4 ;
-(float)transitDirectionsListInstructionsLeadingInset;
-(void)setDataSourceBuilder:(TransitDirectionsListDataSourceBuilder *)arg1 ;
-(NSArray *)_transitDirectionsListItems;
-(int)numberOfSections;
-(Route *)route;
-(id)initWithRoute:(id)arg1 ;
-(id)itemAtIndexPath:(id)arg1 ;
@end

