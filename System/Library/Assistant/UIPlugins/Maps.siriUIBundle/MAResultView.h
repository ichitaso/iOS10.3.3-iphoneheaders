/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIControl.h>

@class MKMapItem, _MKUILabel, UIImageView, UIButton, SiriUIKeyline, NSLayoutConstraint, NSArray, NSURLSessionDataTask, SALocalSearchMapItem, CLLocation;

@interface MAResultView : UIControl {

	id _notificationHandler;
	MKMapItem* _placeDataMapItem;
	_MKUILabel* _nameLabel;
	_MKUILabel* _detailLine1aLabel;
	_MKUILabel* _detailLine1bLabel;
	_MKUILabel* _detailLine2Label;
	UIImageView* _imageView;
	UIButton* _button;
	SiriUIKeyline* _bottomKeyline;
	NSLayoutConstraint* _imageSizeConstraint;
	NSArray* _baselineConstraintsDetailLine1ToName;
	NSArray* _baselineConstraintsDetailLine2ToLine1;
	NSURLSessionDataTask* _imageDownloadTask;
	char _hideBottomKeyline;
	char _locationDetailPreferred;
	SALocalSearchMapItem* _mapItem;
	CLLocation* _referenceLocation;
	int _displayFormat;
	/*^block*/id _blockOnButtonTappedForSARResult;
	double _fallbackDistance;

}

@property (nonatomic,retain) SALocalSearchMapItem * mapItem;                                             //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) CLLocation * referenceLocation;                                             //@synthesize referenceLocation=_referenceLocation - In the implementation block
@property (assign,nonatomic) double fallbackDistance;                                                    //@synthesize fallbackDistance=_fallbackDistance - In the implementation block
@property (nonatomic,readonly) float preferredHeight; 
@property (assign,getter=isBottomKeylineHidden,nonatomic) char hideBottomKeyline;                        //@synthesize hideBottomKeyline=_hideBottomKeyline - In the implementation block
@property (assign,getter=isLocationDetailPreferred,nonatomic) char locationDetailPreferred;              //@synthesize locationDetailPreferred=_locationDetailPreferred - In the implementation block
@property (assign,nonatomic) int displayFormat;                                                          //@synthesize displayFormat=_displayFormat - In the implementation block
@property (nonatomic,copy) id blockOnButtonTappedForSARResult;                                           //@synthesize blockOnButtonTappedForSARResult=_blockOnButtonTappedForSARResult - In the implementation block
@property (getter=isDisplayForSingleResult,nonatomic,readonly) char displayForSingleResult; 
@property (getter=isDisplayForSAR,nonatomic,readonly) char displayForSAR; 
+(float)preferredHeightForMapItem:(id)arg1 ;
+(id)_makeLabelWithFont:(id)arg1 textColor:(id)arg2 ;
+(id)_minorFont;
+(id)_majorFont;
+(char)requiresConstraintBasedLayout;
-(char)isBottomKeylineHidden;
-(char)isDisplayForSingleResult;
-(void)_updateImageViewSize;
-(char)isLocationDetailPreferred;
-(void)_updateDetailLine2HidingReviews:(char)arg1 hidingRating:(char)arg2 ;
-(void)_updateDetailLine1;
-(void)_updateHorizontalCompressionResistanceForLabels;
-(void)setHideBottomKeyline:(char)arg1 ;
-(id)blockOnButtonTappedForSARResult;
-(void)setLocationDetailPreferred:(char)arg1 ;
-(id)_distanceString;
-(char)isDisplayForSAR;
-(void)setBlockOnButtonTappedForSARResult:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(float)preferredHeight;
-(CLLocation *)referenceLocation;
-(void)setReferenceLocation:(CLLocation *)arg1 ;
-(double)fallbackDistance;
-(void)setFallbackDistance:(double)arg1 ;
-(void)_updateSubviews;
-(SALocalSearchMapItem *)mapItem;
-(void)setMapItem:(SALocalSearchMapItem *)arg1 ;
-(void)_updateImage;
-(void)setDisplayFormat:(int)arg1 ;
-(void)_buttonTapped;
-(int)displayFormat;
@end

