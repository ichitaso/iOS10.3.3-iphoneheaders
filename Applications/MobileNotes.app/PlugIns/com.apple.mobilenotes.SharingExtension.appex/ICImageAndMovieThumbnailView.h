/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/com.apple.mobilenotes.SharingExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.mobilenotes.SharingExtension/com.apple.mobilenotes.SharingExtension-Structs.h>
#import <UIKit/UIView.h>

@class NSLayoutConstraint, ICLabel, NSMutableDictionary, UIImageView, UIImage, UIColor;

@interface ICImageAndMovieThumbnailView : UIView {

	char _showAsMovie;
	char _hairlineWidthUnitIsInPoint;
	char _forceSquareImageAspectRatio;
	char _showMovieDuration;
	unsigned _imageScaling;
	UIColor* _borderColor;
	unsigned _hairlineEdges;
	unsigned _edgesToRemoveStartPoint;
	unsigned _edgesToRemoveEndPoint;
	float _mininumScaleFactor;
	UIImageView* _imageView;
	NSLayoutConstraint* _imageViewLeftLayoutConstraint;
	NSLayoutConstraint* _imageViewRightLayoutConstraint;
	NSLayoutConstraint* _imageViewBottomLayoutConstraint;
	NSLayoutConstraint* _imageViewTopLayoutConstraint;
	UIImageView* _movieFooter;
	ICLabel* _movieDurationLabel;
	NSMutableDictionary* _hairlineLayers;
	NSMutableDictionary* _hairlineColors;
	SCD_Struct_IC5 _movieDuration;

}

@property (nonatomic,retain) UIImageView * imageView;                                           //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewLeftLayoutConstraint;                //@synthesize imageViewLeftLayoutConstraint=_imageViewLeftLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewRightLayoutConstraint;               //@synthesize imageViewRightLayoutConstraint=_imageViewRightLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewBottomLayoutConstraint;              //@synthesize imageViewBottomLayoutConstraint=_imageViewBottomLayoutConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewTopLayoutConstraint;                 //@synthesize imageViewTopLayoutConstraint=_imageViewTopLayoutConstraint - In the implementation block
@property (nonatomic,retain) UIImageView * movieFooter;                                         //@synthesize movieFooter=_movieFooter - In the implementation block
@property (nonatomic,retain) ICLabel * movieDurationLabel;                                      //@synthesize movieDurationLabel=_movieDurationLabel - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hairlineLayers;                              //@synthesize hairlineLayers=_hairlineLayers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hairlineColors;                              //@synthesize hairlineColors=_hairlineColors - In the implementation block
@property (assign,nonatomic) char showMovieDuration;                                            //@synthesize showMovieDuration=_showMovieDuration - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) unsigned imageScaling;                                             //@synthesize imageScaling=_imageScaling - In the implementation block
@property (assign,nonatomic) float imageInset; 
@property (assign,nonatomic) char showAsMovie;                                                  //@synthesize showAsMovie=_showAsMovie - In the implementation block
@property (assign,nonatomic) SCD_Struct_IC5 movieDuration;                                      //@synthesize movieDuration=_movieDuration - In the implementation block
@property (assign,nonatomic) float cornerRadius; 
@property (nonatomic,retain) UIColor * borderColor;                                             //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) char hairlineWidthUnitIsInPoint;                                   //@synthesize hairlineWidthUnitIsInPoint=_hairlineWidthUnitIsInPoint - In the implementation block
@property (assign,nonatomic) unsigned hairlineEdges;                                            //@synthesize hairlineEdges=_hairlineEdges - In the implementation block
@property (assign,nonatomic) unsigned edgesToRemoveStartPoint;                                  //@synthesize edgesToRemoveStartPoint=_edgesToRemoveStartPoint - In the implementation block
@property (assign,nonatomic) unsigned edgesToRemoveEndPoint;                                    //@synthesize edgesToRemoveEndPoint=_edgesToRemoveEndPoint - In the implementation block
@property (assign,nonatomic) float mininumScaleFactor;                                          //@synthesize mininumScaleFactor=_mininumScaleFactor - In the implementation block
@property (assign,nonatomic) char forceSquareImageAspectRatio;                                  //@synthesize forceSquareImageAspectRatio=_forceSquareImageAspectRatio - In the implementation block
-(id)initWithFrame:(CGRect)arg1 showMovieDuration:(char)arg2 ;
-(void)setHairlineLayers:(NSMutableDictionary *)arg1 ;
-(void)setHairlineColors:(NSMutableDictionary *)arg1 ;
-(void)setMininumScaleFactor:(float)arg1 ;
-(void)setForceSquareImageAspectRatio:(char)arg1 ;
-(void)setImageViewLeftLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewRightLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewTopLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setImageViewBottomLayoutConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageViewLeftLayoutConstraint;
-(NSLayoutConstraint *)imageViewRightLayoutConstraint;
-(NSLayoutConstraint *)imageViewTopLayoutConstraint;
-(NSLayoutConstraint *)imageViewBottomLayoutConstraint;
-(char)showAsMovie;
-(void)setupMovieFooter;
-(char)usesSeparateLayersForHairlines;
-(void)updateHairlineFrames;
-(void)setMovieFooter:(UIImageView *)arg1 ;
-(UIImageView *)movieFooter;
-(char)showMovieDuration;
-(void)setMovieDurationLabel:(ICLabel *)arg1 ;
-(ICLabel *)movieDurationLabel;
-(void)updateDurationLabel;
-(void)updateHairline;
-(NSMutableDictionary *)hairlineColors;
-(SCD_Struct_IC5)movieDuration;
-(unsigned)hairlineEdges;
-(char)usesSeparateLayerForHairlineEdge:(unsigned)arg1 ;
-(NSMutableDictionary *)hairlineLayers;
-(float)hairlineWidthInPoint;
-(char)hairlineWidthUnitIsInPoint;
-(unsigned)edgesToRemoveStartPoint;
-(unsigned)edgesToRemoveEndPoint;
-(id)hairlineLayerForEdge:(unsigned)arg1 ;
-(CGRect)frameByApplyingVerticalReductionTo:(CGRect)arg1 edge:(unsigned)arg2 ;
-(CGRect)frameByApplyingHorizontalReductionTo:(CGRect)arg1 edge:(unsigned)arg2 ;
-(float)imageInset;
-(void)setImageInset:(float)arg1 ;
-(void)setShowAsMovie:(char)arg1 ;
-(void)setMovieDuration:(SCD_Struct_IC5)arg1 ;
-(void)setHairlineColor:(UIColor*)arg1 forEdges:(unsigned)arg2 ;
-(void)setHairlineEdges:(unsigned)arg1 ;
-(void)setEdgesToRemoveStartPoint:(unsigned)arg1 ;
-(void)setEdgesToRemoveEndPoint:(unsigned)arg1 ;
-(void)setHairlineWidthUnitIsInPoint:(char)arg1 ;
-(float)mininumScaleFactor;
-(char)forceSquareImageAspectRatio;
-(void)setShowMovieDuration:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(float)arg1 ;
-(float)cornerRadius;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)image;
-(void)setBorderColor:(UIColor *)arg1 ;
-(UIImageView *)imageView;
-(UIColor *)borderColor;
-(void)commonInit;
-(void)setImageView:(UIImageView *)arg1 ;
-(float)pixelWidth;
-(unsigned)imageScaling;
-(void)setImageScaling:(unsigned)arg1 ;
-(float)backingScale;
@end

