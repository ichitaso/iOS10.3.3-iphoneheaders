/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class BuddyAppleIDTableCellCanvasView;

@interface BuddyAppleIDTableCell : UITableViewCell {

	BuddyAppleIDTableCellCanvasView* _canvasView;

}

@property (nonatomic,readonly) unsigned columnCount; 
+(float)textBoundingWidthForCellWidth:(float)arg1 columnCount:(unsigned)arg2 ;
+(float)heightForText:(id)arg1 cellWidth:(float)arg2 columnCount:(unsigned)arg3 ;
+(void)initialize;
+(id)textAttributes;
+(id)stringDrawingContext;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 columnCount:(unsigned)arg3 ;
-(id)serviceInfoAtIndex:(unsigned)arg1 ;
-(void)setServiceInfo:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(unsigned)columnCount;
@end

