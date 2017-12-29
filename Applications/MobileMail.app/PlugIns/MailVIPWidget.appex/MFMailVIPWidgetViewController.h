/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/PlugIns/MailVIPWidget.appex/MailVIPWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailVIPWidget/MailVIPWidget-Structs.h>
#import <UIKit/UIViewController.h>
#import <FMFTodayWidget/NCWidgetProviding.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@class UICollectionView, MFMailVIPWidgetContentUnavailableView, NSString;

@interface MFMailVIPWidgetViewController : UIViewController <NCWidgetProviding, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UICollectionView* _avatarCollectionView;
	int _displayMode;
	MFMailVIPWidgetContentUnavailableView* _contentUnavailableView;

}

@property (nonatomic,retain) UICollectionView * avatarCollectionView;                                     //@synthesize avatarCollectionView=_avatarCollectionView - In the implementation block
@property (assign,nonatomic) int displayMode;                                                             //@synthesize displayMode=_displayMode - In the implementation block
@property (nonatomic,retain) MFMailVIPWidgetContentUnavailableView * contentUnavailableView;              //@synthesize contentUnavailableView=_contentUnavailableView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAvatarCollectionView:(UICollectionView *)arg1 ;
-(UICollectionView *)avatarCollectionView;
-(void)_setContentUnavailableViewVisible:(char)arg1 ;
-(unsigned)_maxItemsPerRow;
-(void)_addVIPsButtonTapped:(id)arg1 ;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(int)displayMode;
-(MFMailVIPWidgetContentUnavailableView *)contentUnavailableView;
-(void)setContentUnavailableView:(MFMailVIPWidgetContentUnavailableView *)arg1 ;
-(void)setDisplayMode:(int)arg1 ;
-(void)widgetActiveDisplayModeDidChange:(int)arg1 withMaximumSize:(CGSize)arg2 ;
@end

