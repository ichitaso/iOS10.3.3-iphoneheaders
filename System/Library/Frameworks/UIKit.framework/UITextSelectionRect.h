/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UITextSelectionRectImpl;

@interface UITextSelectionRect : NSObject

@property (getter=_isImpl,nonatomic,readonly) UITextSelectionRectImpl * isImpl; 
@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) int writingDirection; 
@property (nonatomic,readonly) char containsStart; 
@property (nonatomic,readonly) char containsEnd; 
@property (nonatomic,readonly) char isVertical; 
+(char)startIsHorizontal:(id)arg1 ;
+(CGRect)startEdgeFromRects:(id)arg1 ;
+(CGRect)endEdgeFromRects:(id)arg1 ;
+(char)endIsHorizontal:(id)arg1 ;
+(id)startRectFromRects:(id)arg1 ;
+(id)endRectFromRects:(id)arg1 ;
-(CGRect)rect;
-(id)range;
-(int)writingDirection;
-(char)containsStart;
-(char)containsEnd;
-(char)isVertical;
-(id)_isImpl;
@end
