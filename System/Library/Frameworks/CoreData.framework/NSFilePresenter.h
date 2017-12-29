/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, NSOperationQueue;


@protocol NSFilePresenter <NSObject>
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@optional
-(void)relinquishPresentedItemToReader:(/*^block*/id)arg1;
-(void)relinquishPresentedItemToWriter:(/*^block*/id)arg1;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/id)arg1;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1;
-(void)presentedItemDidMoveToURL:(id)arg1;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1;
-(void)presentedItemDidLoseVersion:(id)arg1;
-(void)presentedItemDidResolveConflictVersion:(id)arg1;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)presentedSubitemDidAppearAtURL:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2;
-(void)presentedSubitemDidChangeAtURL:(id)arg1;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2;
-(NSURL *)primaryPresentedItemURL;

@required
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;

@end

