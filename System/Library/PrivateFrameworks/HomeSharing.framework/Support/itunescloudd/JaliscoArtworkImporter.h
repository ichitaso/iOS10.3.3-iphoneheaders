/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:56 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudArtworkImporter.h>

@interface JaliscoArtworkImporter : CloudArtworkImporter
-(void)_importOriginalItemArtwork;
-(void)_importOriginalScreenshots;
-(void)importAllItemArtworkAndScreenshots;
-(id)init;
-(void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
