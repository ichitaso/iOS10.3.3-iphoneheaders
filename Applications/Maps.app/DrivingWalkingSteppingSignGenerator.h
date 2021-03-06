/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <Maps/TrackingSteppingSignGenerator.h>

@protocol CellVendor;
@class NSMutableDictionary, Route, NSArray, NSMutableArray, NavPrimarySignView, NSMapTable, NSString;

@interface DrivingWalkingSteppingSignGenerator : NSObject <TrackingSteppingSignGenerator> {

	NSMutableDictionary* _signHeightCache;
	NSMutableDictionary* _signBottomDistanceCache;
	char _forNavigating;
	int _matchedSignIndex;
	Route* _route;
	NSArray* _stepsWithCorrespondingSigns;
	id<CellVendor> _cellVendor;
	unsigned _signLayout;
	NSMutableArray* _signs;
	NavPrimarySignView* _steppingSizingView;
	NSMutableDictionary* _vendedCells;
	NSMapTable* _cellToIndexPathMapping;

}

@property (nonatomic,retain) NSMutableArray * signs;                               //@synthesize signs=_signs - In the implementation block
@property (nonatomic,retain) NavPrimarySignView * steppingSizingView;              //@synthesize steppingSizingView=_steppingSizingView - In the implementation block
@property (assign,nonatomic) char forNavigating;                                   //@synthesize forNavigating=_forNavigating - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * vendedCells;                    //@synthesize vendedCells=_vendedCells - In the implementation block
@property (nonatomic,retain) NSMapTable * cellToIndexPathMapping;                  //@synthesize cellToIndexPathMapping=_cellToIndexPathMapping - In the implementation block
@property (nonatomic,readonly) Route * route;                                      //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) NSArray * stepsWithCorrespondingSigns;              //@synthesize stepsWithCorrespondingSigns=_stepsWithCorrespondingSigns - In the implementation block
@property (assign,nonatomic,__weak) id<CellVendor> cellVendor;                     //@synthesize cellVendor=_cellVendor - In the implementation block
@property (assign,nonatomic) unsigned signLayout;                                  //@synthesize signLayout=_signLayout - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) int numberOfSigns; 
@property (assign,nonatomic) int matchedSignIndex;                                 //@synthesize matchedSignIndex=_matchedSignIndex - In the implementation block
-(int)numberOfSigns;
-(int)signIndexForStepIndex:(int)arg1 ;
-(void)updateDistance:(double)arg1 forStepAtIndex:(int)arg2 ;
-(int)matchedSignIndex;
-(void)setMatchedSignIndex:(int)arg1 ;
-(id)stepAtSignIndex:(int)arg1 ;
-(id)signAtIndex:(int)arg1 ;
-(id)auxViewAtIndex:(int)arg1 ;
-(int)signIndexForStep:(id)arg1 ;
-(CGSize)sizeForSignAtIndex:(int)arg1 fittingSize:(CGSize)arg2 ;
-(float)distanceFromPageControlBaselineToBottomOfSignAtIndex:(int)arg1 fittingSize:(CGSize)arg2 ;
-(float)distanceFromPageControlBaselineToTopOfAuxView;
-(void)rectForSignAtIndex:(int)arg1 currentStepIndex:(unsigned)arg2 handler:(/*^block*/id)arg3 ;
-(id<CellVendor>)cellVendor;
-(void)setCellVendor:(id<CellVendor>)arg1 ;
-(void)invalidateSizeCaches;
-(id)initWithRoute:(id)arg1 usedForWalkingNavigation:(char)arg2 ;
-(void)_configureWithRoute:(id)arg1 ;
-(void)_configureSign:(id)arg1 withStep:(id)arg2 ;
-(void)_configureSign:(id)arg1 forSteppingWithStep:(id)arg2 ;
-(void)configureNavSignView:(id)arg1 withSign:(id)arg2 ;
-(id)_distanceTextForStep:(id)arg1 ;
-(id)_distanceTextForStep:(id)arg1 distance:(double)arg2 ;
-(void)_resetDistanceForSignAtIndex:(int)arg1 ;
-(id)lastVendedSignCellAtIndex:(int)arg1 ;
-(id)currentViewStateForSignAtIndex:(int)arg1 ;
-(NSArray *)stepsWithCorrespondingSigns;
-(unsigned)signLayout;
-(void)setSignLayout:(unsigned)arg1 ;
-(NSMutableArray *)signs;
-(void)setSigns:(NSMutableArray *)arg1 ;
-(NavPrimarySignView *)steppingSizingView;
-(void)setSteppingSizingView:(NavPrimarySignView *)arg1 ;
-(char)forNavigating;
-(void)setForNavigating:(char)arg1 ;
-(NSMutableDictionary *)vendedCells;
-(void)setVendedCells:(NSMutableDictionary *)arg1 ;
-(NSMapTable *)cellToIndexPathMapping;
-(void)setCellToIndexPathMapping:(NSMapTable *)arg1 ;
-(Route *)route;
@end

