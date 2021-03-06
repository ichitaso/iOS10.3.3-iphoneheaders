/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSlideShow.app/PlugIns/com.apple.social.StreamShareService.appex/com.apple.social.StreamShareService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.social.StreamShareService/com.apple.social.StreamShareService-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <libobjc.A.dylib/PUPhotoStreamsAlbumsTableViewControllerDelegate.h>
#import <libobjc.A.dylib/PUPhotoStreamCreateTitleDelegate.h>
#import <libobjc.A.dylib/PUCloudSharedCreateAlbumViewControllerDelegate.h>
#import <libobjc.A.dylib/PUVideoTrimQueueControllerDelegate.h>

@class NSArray, PUVideoTrimQueueController, NSString;

@interface PUStreamShareServiceViewController : SLComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, PUVideoTrimQueueControllerDelegate> {

	NSObject* _selectedAlbum;
	NSArray* _actions;
	NSObject* _albumList;
	char _inCreateNewAlbum;
	NSArray* _recipients;
	char _shouldShowPost;
	PUVideoTrimQueueController* _trimController;
	char _addToExistingWorkflow;
	NSString* _albumTitle;

}

@property (assign,nonatomic) char addToExistingWorkflow;              //@synthesize addToExistingWorkflow=_addToExistingWorkflow - In the implementation block
@property (nonatomic,retain) NSString * albumTitle;                   //@synthesize albumTitle=_albumTitle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadItemForTypeIdentifier:(id)arg1 fromItemProvider:(id)arg2 ;
-(char)URLIsAssetsLibrary:(id)arg1 ;
-(char)URLIsMediaType:(id)arg1 ;
-(void)cancel;
-(id)title;
-(void)viewDidLoad;
-(void)send;
-(void)didSelectPost;
-(void)controllerWillCreateNewAlbum:(id)arg1 ;
-(void)controller:(id)arg1 didSelectAlbum:(NSObject*)arg2 ;
-(void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2 ;
-(void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2 ;
-(void)setAlbumTitle:(NSString *)arg1 ;
-(void)albumStreamingCreateViewController:(id)arg1 didSucceed:(char)arg2 ;
-(void)titleControllerDidCancel:(id)arg1 ;
-(void)titleController:(id)arg1 didSetTitle:(id)arg2 ;
-(void)_pushTitleController;
-(id)albumListAction;
-(id)sheetActions;
-(void)failWithError:(id)arg1 ;
-(char)addToExistingWorkflow;
-(void)setAddToExistingWorkflow:(char)arg1 ;
-(NSString *)albumTitle;
@end

