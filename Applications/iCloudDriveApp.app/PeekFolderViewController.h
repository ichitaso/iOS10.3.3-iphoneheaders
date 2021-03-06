/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iCloudDriveApp.app/iCloudDriveApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsUI/_UIDocumentListController.h>
#import <iCloudDriveApp/_UIDocumentListControllerPreviewViewController.h>

@class NSArray, NSString;

@interface PeekFolderViewController : _UIDocumentListController <_UIDocumentListControllerPreviewViewController> {

	NSArray* previewActionItems;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSArray * previewActionItems; 
-(NSArray *)previewActionItems;
-(id)initWithURL:(id)arg1 ;
-(void)setPreviewActionItems:(NSArray *)arg1 ;
-(char)shouldShowSearch;
@end

