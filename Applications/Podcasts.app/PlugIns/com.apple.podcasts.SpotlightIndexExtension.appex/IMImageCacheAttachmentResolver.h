/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/IMAttachmentResolving.h>

@class IMImageCache, NSString;

@interface IMImageCacheAttachmentResolver : NSObject <IMAttachmentResolving> {

	IMImageCache* _imageCache;

}

@property (nonatomic,retain) IMImageCache * imageCache;              //@synthesize imageCache=_imageCache - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)canResolveAttachmentInfo:(id)arg1 ;
-(char)supportsAttachmentResolvingOption:(int)arg1 ;
-(void)resolveAttachmentInfo:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(IMImageCache *)imageCache;
-(void)setImageCache:(IMImageCache *)arg1 ;
@end

