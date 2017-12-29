/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewCellLayoutManager.h>

@interface CenteringCellLayoutManager : UITableViewCellLayoutManager {

	float _maximumCellContentWidth;
	UIEdgeInsets _minimumHorizontalMargins;

}

@property (assign,nonatomic) float maximumCellContentWidth;                      //@synthesize maximumCellContentWidth=_maximumCellContentWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets minimumHorizontalMargins;              //@synthesize minimumHorizontalMargins=_minimumHorizontalMargins - In the implementation block
+(id)layoutManagerForTableViewCellStyle:(int)arg1 ;
-(void)setMinimumHorizontalMargins:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)minimumHorizontalMargins;
-(id)initWithTableViewCellStyle:(int)arg1 ;
-(CGRect)_adjustedContentViewFrame:(CGRect)arg1 cell:(id)arg2 rowWidth:(float)arg3 accessoryViewFrame:(CGRect)arg4 ;
-(CGRect)_offsetAccessoryViewFrame:(CGRect)arg1 forCell:(id)arg2 ;
-(UIEdgeInsets)_marginForRowWith:(float)arg1 ;
-(float)maximumCellContentWidth;
-(void)setMaximumCellContentWidth:(float)arg1 ;
-(CGRect)contentEndingRectForCell:(id)arg1 forNewEditingState:(char)arg2 ;
-(CGRect)contentRectForCell:(id)arg1 forState:(unsigned)arg2 rowWidth:(float)arg3 ;
-(CGRect)accessoryEndingRectForCell:(id)arg1 forNewEditingState:(char)arg2 showingDeleteConfirmation:(char)arg3 ;
-(CGRect)accessoryStartingRectForCell:(id)arg1 forNewEditingState:(char)arg2 showingDeleteConfirmation:(char)arg3 ;
-(CGRect)contentStartingRectForCell:(id)arg1 forNewEditingState:(char)arg2 ;
@end

