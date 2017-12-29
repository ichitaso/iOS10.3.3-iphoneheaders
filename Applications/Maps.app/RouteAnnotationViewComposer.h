/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@interface RouteAnnotationViewComposer : NSObject
+(void)configureView:(id)arg1 withRoute:(id)arg2 selected:(char)arg3 ;
+(void)updateView:(id)arg1 withSelected:(char)arg2 hasTolls:(char)arg3 ;
+(void)updateView:(id)arg1 withOrientation:(int)arg2 ;
+(CGSize)maxAnnotationViewSizeForRoutes:(id)arg1 ;
+(id)_calloutViewItemWithRoute:(id)arg1 selected:(char)arg2 scale:(float)arg3 ;
+(id)_calloutInteriorViewForRoute:(id)arg1 selected:(char)arg2 ;
+(id)_titleForRoute:(id)arg1 ;
+(id)_imageForRoute:(id)arg1 selected:(char)arg2 ;
+(id)_fillColorForSelected:(char)arg1 ;
+(id)_textColorForSelected:(char)arg1 ;
+(id)_strokeColorForSelected:(char)arg1 ;
@end

