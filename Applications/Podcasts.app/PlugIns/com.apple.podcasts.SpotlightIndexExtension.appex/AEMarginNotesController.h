/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <com.apple.podcasts.SpotlightIndexExtension/com.apple.podcasts.SpotlightIndexExtension-Structs.h>
@class NSMutableDictionary, NSArray;

@interface AEMarginNotesController : NSObject {

	NSMutableDictionary* mMarginNoteLayers;
	CGRect mOwnerFrame;

}

@property (assign,setter=imaxSetAccessibilityDelegate:,nonatomic) id<AEMarginNotesControllerAccessibilityDelegate> imaxAccessibilityDelegate; 
@property (nonatomic,retain) NSMutableDictionary * marginNoteLayers; 
@property (assign,nonatomic) CGSize ownerSize; 
@property (assign,nonatomic) CGRect ownerFrame; 
@property (nonatomic,readonly) NSArray * layers; 
-(void)setMarginNoteLayers:(NSMutableDictionary *)arg1 ;
-(CGRect)ownerFrame;
-(void)setOwnerFrame:(CGRect)arg1 ;
-(NSMutableDictionary *)marginNoteLayers;
-(id)marginNoteAtPoint:(CGPoint)arg1 ;
-(id)p_imageForMarginNote:(id)arg1 ;
-(CGSize)ownerSize;
-(void)p_updateLayerLayout;
-(id)p_highlightedImageForMarginNote:(id)arg1 ;
-(void)setOwnerSize:(CGSize)arg1 ;
-(char)hasMarginNoteAtPoint:(CGPoint)arg1 ;
-(void)addMarginNote:(id)arg1 ;
-(void)removeMarginNote:(id)arg1 ;
-(void)highlightLayerOfNote:(id)arg1 ;
-(void)unhighlightLayerOfNote:(id)arg1 ;
-(id<AEMarginNotesControllerAccessibilityDelegate>)imaxAccessibilityDelegate;
-(void)imaxSetAccessibilityDelegate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSArray *)layers;
@end

