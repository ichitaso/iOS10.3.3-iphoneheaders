/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateSCATMenuLayout.h>

@class SCATModernMenuSheet, UIImage, NSString;

@interface SCATModernMenuSheetCollectionViewController : UICollectionViewController <UICollectionViewDelegateSCATMenuLayout> {

	SCATModernMenuSheet* _menuSheet;
	unsigned _visibleItemOffset;
	UIImage* _defaultBackgroundImage;
	UIImage* _pressedBackgroundImage;
	UIImage* _dimmedBackgroundImage;

}

@property (assign,nonatomic) unsigned visibleItemOffset;                    //@synthesize visibleItemOffset=_visibleItemOffset - In the implementation block
@property (nonatomic,retain) UIImage * defaultBackgroundImage;              //@synthesize defaultBackgroundImage=_defaultBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * pressedBackgroundImage;              //@synthesize pressedBackgroundImage=_pressedBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * dimmedBackgroundImage;               //@synthesize dimmedBackgroundImage=_dimmedBackgroundImage - In the implementation block
@property (assign,nonatomic) SCATModernMenuSheet * menuSheet;               //@synthesize menuSheet=_menuSheet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showMoreItemsButtonWasActivated;
-(id)menuSheetForCollectionView:(id)arg1 ;
-(SCATModernMenuSheet *)menuSheet;
-(CGSize)sizeForItemTitleTextAtIndexPath:(id)arg1 withMaxSize:(CGSize)arg2 ;
-(void)setPressedBackgroundImage:(UIImage *)arg1 ;
-(void)setDefaultBackgroundImage:(UIImage *)arg1 ;
-(void)setDimmedBackgroundImage:(UIImage *)arg1 ;
-(UIImage *)dimmedBackgroundImage;
-(UIImage *)defaultBackgroundImage;
-(UIImage *)pressedBackgroundImage;
-(void)setMenuSheet:(SCATModernMenuSheet *)arg1 ;
-(unsigned)visibleItemOffset;
-(void)adjustVisibleItemOffsetForPageBoundary;
-(void)reloadCollectionView;
-(void)setVisibleItemOffset:(unsigned)arg1 ;
-(id)titleTextForItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
@end

