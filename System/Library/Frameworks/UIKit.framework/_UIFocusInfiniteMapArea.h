/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIFocusMapArea.h>

@class NSString;

@interface _UIFocusInfiniteMapArea : NSObject <_UIFocusMapArea>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGRect frame; 
+(id)sharedInstance;
-(CGRect)frame;
-(char)intersectsRect:(CGRect)arg1 ;
-(char)intersectsRegion:(id)arg1 ;
-(id)intersectionWithRegion:(id)arg1 ;
@end

