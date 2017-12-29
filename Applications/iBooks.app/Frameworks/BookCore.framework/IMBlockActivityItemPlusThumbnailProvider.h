/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BookCore-Structs.h>
#import <BookCore/IMBlockActivityItemProvider.h>

@interface IMBlockActivityItemPlusThumbnailProvider : IMBlockActivityItemProvider {

	/*^block*/id _thumbnailResolutionBlock;

}

@property (nonatomic,copy) id thumbnailResolutionBlock;              //@synthesize thumbnailResolutionBlock=_thumbnailResolutionBlock - In the implementation block
-(id)initWithUTI:(id)arg1 resolutionBlock:(/*^block*/id)arg2 thumbnailResolutionBlock:(/*^block*/id)arg3 ;
-(id)thumbnailResolutionBlock;
-(void)setThumbnailResolutionBlock:(id)arg1 ;
-(id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(CGSize)arg3 ;
@end

