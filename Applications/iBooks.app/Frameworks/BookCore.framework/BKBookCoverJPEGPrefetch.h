/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/IMJPEGPrefetch.h>
#import <BookCore/BKBookCoverPrefetch.h>

@class NSURL, NSString;

@interface BKBookCoverJPEGPrefetch : IMJPEGPrefetch <BKBookCoverPrefetch> {

	NSURL* _cachedURL;

}

@property (nonatomic,retain) NSURL * cachedURL;                     //@synthesize cachedURL=_cachedURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)cachedURL;
-(void)setCachedURL:(NSURL *)arg1 ;
@end

