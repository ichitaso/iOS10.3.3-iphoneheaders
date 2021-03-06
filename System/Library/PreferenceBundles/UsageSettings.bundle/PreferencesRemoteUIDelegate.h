/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RUIObjectModelDelegate.h>
#import <libobjc.A.dylib/RUILoaderDelegate.h>

@protocol DelayedPushDelegate;
@class UINavigationController, PSCloudStorageOffersManager, NSMutableArray, RUILoader, NSOperationQueue, PreferencesRemoteUIDelegateTableCellButton, NSString;

@interface PreferencesRemoteUIDelegate : NSObject <RUIObjectModelDelegate, RUILoaderDelegate> {

	UINavigationController* _navigationController;
	PSCloudStorageOffersManager* _storageOffersManager;
	NSMutableArray* _objectModels;
	RUILoader* _loader;
	NSMutableArray* _deleteLoaders;
	NSOperationQueue* _deleteQueue;
	PreferencesRemoteUIDelegateTableCellButton* _button;
	unsigned _forceActionSignal;
	char _cancelled;
	int _deleteAllDocumentsAttemptCount;
	id<DelayedPushDelegate> _delegate;
	RUILoader* _lastDocumentDeleteLoader;

}

@property (retain) RUILoader * lastDocumentDeleteLoader;                           //@synthesize lastDocumentDeleteLoader=_lastDocumentDeleteLoader - In the implementation block
@property (assign,nonatomic,__weak) id<DelayedPushDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadQuotaInfo;
-(void)loadQuotaInfo;
-(void)cleanupLoader;
-(void)reloadTopControllerWithAdditionalHeaders:(id)arg1 ;
-(void)popAndReloadFromRemoteUI:(char)arg1 additionalHeaders:(id)arg2 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 additionalHeaders:(id)arg3 ;
-(void)willShowController:(id)arg1 ;
-(void)deleteAllDocuments;
-(void)confirmDeleteWithTitle:(id)arg1 prompt:(id)arg2 explanation:(id)arg3 confirmationAction:(/*^block*/id)arg4 ;
-(void)confirmDeleteAll;
-(void)setLastDocumentDeleteLoader:(RUILoader *)arg1 ;
-(RUILoader *)lastDocumentDeleteLoader;
-(void)setDelegate:(id<DelayedPushDelegate>)arg1 ;
-(void)dealloc;
-(id<DelayedPushDelegate>)delegate;
-(unsigned)supportedInterfaceOrientations;
-(void)cancelRemoteUI;
-(id)initWithNavigationController:(id)arg1 ;
-(void)_popObjectModelAnimated:(char)arg1 ;
-(void)loadURL:(id)arg1 postBody:(id)arg2 ;
-(void)loader:(id)arg1 didFailWithError:(id)arg2 ;
-(void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(unsigned)arg3 ;
-(id)parentViewControllerForObjectModel:(id)arg1 ;
-(void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(char)arg3 ;
-(char)objectModel:(id)arg1 page:(id)arg2 deletedTableRow:(id)arg3 atIndexPath:(id)arg4 withURL:(id)arg5 httpMethod:(id)arg6 ;
-(void)objectModelPressedBack:(id)arg1 ;
-(void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3 ;
-(void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3 ;
@end

