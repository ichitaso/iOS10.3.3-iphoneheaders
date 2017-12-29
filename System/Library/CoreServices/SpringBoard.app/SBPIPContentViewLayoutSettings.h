/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableArray;

@interface SBPIPContentViewLayoutSettings : NSObject {

	int _position;
	float _size;
	NSMutableArray* _observers;

}

@property (assign,nonatomic) int position; 
@property (assign,nonatomic) float size; 
+(int)currentContentViewPosition;
+(CGSize)currentContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)defaultContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)minimumContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(CGSize)maximumContentViewSizeForAspectRatio:(CGSize)arg1 ;
+(void)setContentViewPosition:(int)arg1 ;
+(void)addObserver:(id)arg1 ;
+(void)removeObserver:(id)arg1 ;
+(void)setContentViewSize:(CGSize)arg1 ;
+(id)_sharedInstance;
-(id)init;
-(float)size;
-(void)setSize:(float)arg1 ;
-(void)setPosition:(int)arg1 ;
-(int)position;
-(void)_addObserver:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(void)_notifyObservers;
@end

