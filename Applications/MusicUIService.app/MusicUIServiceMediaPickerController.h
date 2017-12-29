/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MusicUIService.app/MusicUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPServiceMediaPickerController.h>
#import <MusicUIService/MusicMediaPickerDelegate.h>

@class NSString, MusicMediaPickerNavigationController;

@interface MusicUIServiceMediaPickerController : UIViewController <MPServiceMediaPickerController, MusicMediaPickerDelegate> {

	char _allowsPickingMultipleItems;
	char _showsCloudItems;
	char _showsItemsWithProtectedAssets;
	char _shouldPreventShowingTextServices;
	unsigned _mediaTypes;
	NSString* _prompt;
	MusicMediaPickerNavigationController* _navigationController;

}

@property (nonatomic,retain) MusicMediaPickerNavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (assign,nonatomic) char shouldPreventShowingTextServices;                                    //@synthesize shouldPreventShowingTextServices=_shouldPreventShowingTextServices - In the implementation block
@property (assign,nonatomic) unsigned mediaTypes;                                                      //@synthesize mediaTypes=_mediaTypes - In the implementation block
@property (assign,nonatomic) char allowsPickingMultipleItems;                                          //@synthesize allowsPickingMultipleItems=_allowsPickingMultipleItems - In the implementation block
@property (assign,nonatomic) char showsCloudItems;                                                     //@synthesize showsCloudItems=_showsCloudItems - In the implementation block
@property (assign,nonatomic) char showsItemsWithProtectedAssets;                                       //@synthesize showsItemsWithProtectedAssets=_showsItemsWithProtectedAssets - In the implementation block
@property (nonatomic,copy) NSString * prompt;                                                          //@synthesize prompt=_prompt - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_updateLibraryFiltering;
-(char)shouldPreventShowingTextServices;
-(void)_addNavigationControllerIfNecessary;
-(id)_clientViewControllerProxy;
-(void)setShouldPreventShowingTextServices:(char)arg1 ;
-(char)_canShowTextServices;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(MusicMediaPickerNavigationController *)navigationController;
-(void)viewDidLoad;
-(void)setMediaTypes:(unsigned)arg1 ;
-(unsigned)mediaTypes;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(void)setNavigationController:(MusicMediaPickerNavigationController *)arg1 ;
-(void)serviceMediaPickerSetPrompt:(id)arg1 ;
-(void)serviceMediaPickerSetAllowsPickingMultipleItems:(char)arg1 ;
-(void)serviceMediaPickerSetShowsCloudItems:(char)arg1 ;
-(void)serviceMediaPickerSetShowsItemsWithProtectedAssets:(char)arg1 ;
-(void)serviceMediaPickerSetMediaTypes:(unsigned)arg1 ;
-(void)serviceMediaPickerSetShouldPreventShowingTextServices:(char)arg1 ;
-(char)allowsPickingMultipleItems;
-(void)setAllowsPickingMultipleItems:(char)arg1 ;
-(char)showsCloudItems;
-(char)showsItemsWithProtectedAssets;
-(void)setShowsItemsWithProtectedAssets:(char)arg1 ;
-(void)setShowsCloudItems:(char)arg1 ;
-(void)mediaPickerNavigationController:(id)arg1 didFinishWithSelectedEntities:(id)arg2 ;
@end

