/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, _UIImageViewPretiledImageCacheKey;

@interface _UIImageViewPretiledImageWrapper : NSObject {

	UIImage* _pretiledImage;
	_UIImageViewPretiledImageCacheKey* _cacheKey;

}

@property (nonatomic,readonly) UIImage * pretiledImage;              //@synthesize pretiledImage=_pretiledImage - In the implementation block
+(id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(UIImage *)pretiledImage;
@end

