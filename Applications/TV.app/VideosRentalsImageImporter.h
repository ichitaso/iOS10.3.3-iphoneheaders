/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/TV.app/TV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface VideosRentalsImageImporter : NSObject {

	NSMutableDictionary* _mutableFetchStates;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned _operationCount;

}
-(char)_canImportArtworkForRental:(id)arg1 ;
-(void)_importImageData:(id)arg1 forRental:(id)arg2 ;
-(void)_failedImageImportForRental:(id)arg1 ;
-(void)_decrementOperationCount;
-(void)_incrementOperationCount;
-(void)enqueueRentalForImageFetch:(id)arg1 ;
-(char)rentalNeedsImage:(id)arg1 ;
-(id)init;
@end

