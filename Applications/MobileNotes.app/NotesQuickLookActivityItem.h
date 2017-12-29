/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NotesQuickLookActivityItemDelegate;
@class NSArray;

@interface NotesQuickLookActivityItem : NSObject {

	NSArray* _previewItems;
	unsigned _firstItemIndex;
	id<NotesQuickLookActivityItemDelegate> _delegate;

}

@property (nonatomic,retain) NSArray * previewItems;                                              //@synthesize previewItems=_previewItems - In the implementation block
@property (assign,nonatomic) unsigned firstItemIndex;                                             //@synthesize firstItemIndex=_firstItemIndex - In the implementation block
@property (assign,nonatomic,__weak) id<NotesQuickLookActivityItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(unsigned)firstItemIndex;
-(void)setFirstItemIndex:(unsigned)arg1 ;
-(void)setDelegate:(id<NotesQuickLookActivityItemDelegate>)arg1 ;
-(id<NotesQuickLookActivityItemDelegate>)delegate;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(NSArray *)previewItems;
@end

