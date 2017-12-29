/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileNotes/MobileNotes-Structs.h>
@class UIViewController, UITableView, NSDictionary, NSCache;

@interface ICNotesListCellHandler : NSObject {

	UIViewController* _viewController;
	UITableView* _tableView;
	float _imageHeight;
	NSDictionary* _identifierNibDictionary;
	NSDictionary* _sizingCells;
	NSCache* _thumbnailCache;
	NSCache* _notesListCellDataCache;

}

@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                               //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) float imageHeight;                                     //@synthesize imageHeight=_imageHeight - In the implementation block
@property (nonatomic,copy) NSDictionary * identifierNibDictionary;                  //@synthesize identifierNibDictionary=_identifierNibDictionary - In the implementation block
@property (nonatomic,copy) NSDictionary * sizingCells;                              //@synthesize sizingCells=_sizingCells - In the implementation block
@property (nonatomic,retain) NSCache * thumbnailCache;                              //@synthesize thumbnailCache=_thumbnailCache - In the implementation block
@property (nonatomic,retain) NSCache * notesListCellDataCache;                      //@synthesize notesListCellDataCache=_notesListCellDataCache - In the implementation block
+(id)thumbnailFetchOperationQueue;
-(NSCache *)notesListCellDataCache;
-(void)setNotesListCellDataCache:(NSCache *)arg1 ;
-(id)newIdentifierNibDictionary;
-(void)registerNibsForTableView:(id)arg1 ;
-(void)addIdentifierNibToDictionary:(id)arg1 ;
-(NSDictionary *)identifierNibDictionary;
-(NSDictionary *)sizingCells;
-(id)newSizingCells;
-(void)setSizingCells:(NSDictionary *)arg1 ;
-(id)sizingCellForCellClass:(Class)arg1 ;
-(float)rowHeightForCellClass:(Class)arg1 ;
-(Class)uniformRowHeightCellClass;
-(void)updateTableViewRowHeight;
-(void)copySizingInfoToCell:(id)arg1 ;
-(id)dequeueReusableSizingUpdatedCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(void)cancelThumbnailFetchOperationForNoteIdentifier:(id)arg1 ;
-(id)initWithViewController:(id)arg1 tableView:(id)arg2 ;
-(void)updateForContentSizeCategoryChange;
-(id)cellForNote:(id)arg1 searchResult:(id)arg2 atIndexPath:(id)arg3 ;
-(id)emptyCellForIndexPath:(id)arg1 ;
-(void)updateThumbnailForNote:(id)arg1 inCell:(id)arg2 ;
-(void)prefetchCellsForNoteIdentifiers:(id)arg1 ;
-(void)cancelPrefetchCellsForNoteIdentifiers:(id)arg1 ;
-(void)invalidateCachedThumbnailForNote:(id)arg1 ;
-(void)invalidateAllCachedThumbnails;
-(void)setIdentifierNibDictionary:(NSDictionary *)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(float)screenScale;
-(NSCache *)thumbnailCache;
-(void)setThumbnailCache:(NSCache *)arg1 ;
-(void)setImageHeight:(float)arg1 ;
-(float)imageHeight;
-(CGSize)thumbnailSize;
@end

