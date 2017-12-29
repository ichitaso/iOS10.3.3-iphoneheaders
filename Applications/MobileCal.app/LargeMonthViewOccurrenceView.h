/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, LargeMonthViewOccurrence;

@interface LargeMonthViewOccurrenceView : UIView {

	CALayer* _glowLayer;
	CALayer* _contentLayer;
	LargeMonthViewOccurrence* _occurrence;

}

@property (nonatomic,retain) LargeMonthViewOccurrence * occurrence;              //@synthesize occurrence=_occurrence - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)displayLayer:(id)arg1 ;
-(LargeMonthViewOccurrence *)occurrence;
-(void)setOccurrence:(LargeMonthViewOccurrence *)arg1 ;
@end

