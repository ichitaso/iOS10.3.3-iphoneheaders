/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDashBoardPresentationProviding.h>
#import <UIKit/UICoordinateSpace.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol UICoordinateSpace;
@class NSArray, NSMutableArray, NSString;

@interface SBDashBoardPresentation : NSObject <SBDashBoardPresentationProviding, UICoordinateSpace, NSCopying> {

	NSMutableArray* _regions;
	id<UICoordinateSpace> _coordinateSpace;
	NSString* _identifier;

}

@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;                            //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,copy,readonly) NSArray * regions;                                                //@synthesize regions=_regions - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                                     //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) id<UICoordinateSpace> presentationCoordinateSpace; 
@property (nonatomic,copy,readonly) NSArray * presentationRegions; 
@property (nonatomic,readonly) CGRect bounds; 
+(id)presentationWithCoordinateSpace:(id)arg1 ;
+(id)presentationForProvider:(id)arg1 ;
+(id)presentation;
-(UIEdgeInsets)suggestedInsetsForPreferredContentFrame:(CGRect)arg1 ;
-(id<UICoordinateSpace>)presentationCoordinateSpace;
-(NSArray *)presentationRegions;
-(char)intersectsCoordinateSpace:(id)arg1 ;
-(void)unionPresentation:(id)arg1 ;
-(id)firstRegionIntersectingCoordinateSpace:(id)arg1 ;
-(id)presentationForRole:(int)arg1 ;
-(id)firstRegionIntersectingCoordinateSpace:(id)arg1 excludingRegionsWithRole:(int)arg2 ;
-(id)regionsIntersectingCoordinateSpace:(id)arg1 ;
-(id)init;
-(CGRect)bounds;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)identifier;
-(id<UICoordinateSpace>)coordinateSpace;
-(void)reset;
-(CGRect)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2 ;
-(void)addRegion:(id)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2 ;
-(void)addRegions:(id)arg1 ;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(NSArray *)regions;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

