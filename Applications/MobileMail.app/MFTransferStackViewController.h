/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIViewController.h>
#import <MobileMail/StackDelegate.h>
#import <MobileMail/StackDataSource.h>

@protocol MFScheduler, MFTransferStackControllerDelegate;
@class UIView, NSMutableDictionary, StackController, _MFStackContainerView, UIColor, CNContactStore, NSString;

@interface MFTransferStackViewController : UIViewController <StackDelegate, StackDataSource> {

	UIView* _defaultItemSnapshotView;
	id<MFScheduler> _messageLoadScheduler;
	NSMutableDictionary* _loadingContexts;
	NSMutableDictionary* _cancellationTokens;
	/*^block*/id _removeStackedViewsAnimationCompletionBlock;
	StackController* _stackController;
	id<MFTransferStackControllerDelegate> _delegate;
	_MFStackContainerView* _stackContainerView;
	unsigned _transferOptions;
	UIColor* _conversationColor;
	CNContactStore* _contactStore;

}

@property (nonatomic,retain) _MFStackContainerView * stackContainerView;                  //@synthesize stackContainerView=_stackContainerView - In the implementation block
@property (nonatomic,retain) UIColor * conversationColor;                                 //@synthesize conversationColor=_conversationColor - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                               //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) StackController * stackController;                         //@synthesize stackController=_stackController - In the implementation block
@property (assign,nonatomic) id<MFTransferStackControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned transferOptions;                                    //@synthesize transferOptions=_transferOptions - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeStackedViewsAnimated:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)displayStackedViewsForMessages:(id)arg1 animated:(char)arg2 ;
-(void)setTransferOptions:(unsigned)arg1 ;
-(_MFStackContainerView *)stackContainerView;
-(void)stackControllerWillStartStackingViews:(id)arg1 ;
-(id)stackContainerViewForStackController:(id)arg1 ;
-(UIEdgeInsets)stackContainerViewEdgeInsetsForStackController:(id)arg1 ;
-(id)defaultItemForStackController:(id)arg1 ;
-(void)stackControllerDidStopStackingViews:(id)arg1 ;
-(id)stackController:(id)arg1 viewForItem:(id)arg2 ;
-(char)stackController:(id)arg1 isDataLoadedForItem:(id)arg2 inView:(id)arg3 ;
-(void)stackController:(id)arg1 loadDataForItem:(id)arg2 inView:(id)arg3 ;
-(void)stackController:(id)arg1 willRemoveViewForItem:(id)arg2 ;
-(void)_updateStackController;
-(char)_isStackControllerVisible;
-(unsigned)transferOptions;
-(id)_titleForTransferOptions:(unsigned)arg1 ;
-(CGRect)_stackItemRect;
-(UIColor *)conversationColor;
-(StackController *)stackController;
-(void)setStackContainerView:(_MFStackContainerView *)arg1 ;
-(void)setConversationColor:(UIColor *)arg1 ;
-(void)setDelegate:(id<MFTransferStackControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MFTransferStackControllerDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(void)_updateTitleAnimated:(char)arg1 ;
@end

