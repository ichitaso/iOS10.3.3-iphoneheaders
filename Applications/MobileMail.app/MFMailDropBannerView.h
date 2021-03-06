/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFMessageHeaderViewBlock.h>

@protocol MFMailDropBannerDelegate;
@class UILabel, UIButton, MFProgressView, NSLayoutConstraint, NSMutableArray, MFMailDropMetadata, NSProgress;

@interface MFMailDropBannerView : MFMessageHeaderViewBlock {

	char _hasLoaded;
	UILabel* _expirationLabel;
	UILabel* _downloadLabel;
	UIButton* _downloadIcon;
	MFProgressView* _progressView;
	NSLayoutConstraint* _iconWrapperWidth;
	NSLayoutConstraint* _labelFirstBaseline;
	NSLayoutConstraint* _expirationFirstBaseline;
	NSLayoutConstraint* _expirationBottom;
	NSMutableArray* _childProgresses;
	char _hasDataLocally;
	MFMailDropMetadata* _metaData;
	NSProgress* _downloadProgress;
	unsigned _bannerState;
	unsigned _totalAttachmentSize;
	id<MFMailDropBannerDelegate> _delegate;

}

@property (nonatomic,retain) NSProgress * downloadProgress;                      //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (nonatomic,retain) MFMailDropMetadata * metaData;                      //@synthesize metaData=_metaData - In the implementation block
@property (assign,nonatomic) unsigned bannerState;                               //@synthesize bannerState=_bannerState - In the implementation block
@property (assign,nonatomic) char hasDataLocally;                                //@synthesize hasDataLocally=_hasDataLocally - In the implementation block
@property (assign,nonatomic) unsigned totalAttachmentSize;                       //@synthesize totalAttachmentSize=_totalAttachmentSize - In the implementation block
@property (assign,nonatomic) id<MFMailDropBannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_setupDownloadLabel;
-(void)_setupExpirationLabel;
-(void)_setupDownloadIcon;
-(void)_updateBannerToState:(unsigned)arg1 ;
-(char)_shouldDisplayProgress;
-(void)setHasDataLocally:(char)arg1 ;
-(void)setMetaData:(MFMailDropMetadata *)arg1 ;
-(void)setSeparatorIsHidden:(char)arg1 ;
-(void)setTotalAttachmentSize:(unsigned)arg1 ;
-(void)associateAttachment:(id)arg1 ;
-(char)shouldPresent;
-(unsigned)bannerState;
-(void)setBannerState:(unsigned)arg1 ;
-(char)hasDataLocally;
-(unsigned)totalAttachmentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MFMailDropBannerDelegate>)arg1 ;
-(void)dealloc;
-(id<MFMailDropBannerDelegate>)delegate;
-(void)reset;
-(void)updateConstraints;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(MFMailDropMetadata *)metaData;
-(NSProgress *)downloadProgress;
-(void)setDownloadProgress:(NSProgress *)arg1 ;
-(void)startDownload:(id)arg1 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
@end

