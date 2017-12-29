/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFMessageHeaderViewBlock.h>

@protocol MFLoadRemoteImagesBannerViewDelegate;
@class MessageSuggestionTitleControl;

@interface MFLoadRemoteImagesBannerView : MFMessageHeaderViewBlock {

	MessageSuggestionTitleControl* _titleControl;
	id<MFLoadRemoteImagesBannerViewDelegate> _delegate;

}

@property (assign,nonatomic) id<MFLoadRemoteImagesBannerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setSeparatorDrawsFlushWithTrailingEdge:(char)arg1 ;
-(void)setSeparatorDrawsFlushWithLeadingEdge:(char)arg1 ;
-(void)_loadAllImagesButtonWasTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MFLoadRemoteImagesBannerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MFLoadRemoteImagesBannerViewDelegate>)delegate;
-(void)_setupConstraints;
@end

