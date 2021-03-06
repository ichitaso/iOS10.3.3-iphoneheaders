/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol UIKBCacheableView <NSObject>
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) char cacheDeferable; 
@property (nonatomic,readonly) float cachedWidth; 
@property (nonatomic,readonly) char keepNonPersistent; 
@optional
-(void)drawContentsOfRenderers:(id)arg1;

@required
-(NSString *)cacheKey;
-(float)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1;
-(char)cacheDeferable;
-(char)keepNonPersistent;

@end

