/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:48 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSURetainedPointerKeyDictionary;

@interface TSULayerSaveRestore : NSObject {

	TSURetainedPointerKeyDictionary* _layerStates;

}

@property (nonatomic,retain) TSURetainedPointerKeyDictionary * layerStates;              //@synthesize layerStates=_layerStates - In the implementation block
-(TSURetainedPointerKeyDictionary *)layerStates;
-(void)setLayerStates:(TSURetainedPointerKeyDictionary *)arg1 ;
-(id)objectForLayer:(id)arg1 key:(id)arg2 ;
-(void)saveLayer:(id)arg1 ;
-(char)restoreLayer:(id)arg1 ;
-(void)dealloc;
@end
