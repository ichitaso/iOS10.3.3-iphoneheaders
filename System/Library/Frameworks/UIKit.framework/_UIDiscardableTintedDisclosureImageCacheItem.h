/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSDiscardableContent.h>

@class UIImage, UIColor;

@interface _UIDiscardableTintedDisclosureImageCacheItem : NSObject <NSDiscardableContent> {

	UIImage* _tintedImage;
	UIColor* _tintColor;
	struct {
		unsigned isDiscarded : 1;
		unsigned isPressed : 1;
		unsigned useCount;
	}  _flags;

}

@property (nonatomic,readonly) UIImage * tintedImage;              //@synthesize tintedImage=_tintedImage - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(UIColor *)tintColor;
-(id)_tintedDisclosureImage:(char)arg1 ;
-(char)beginContentAccess;
-(void)endContentAccess;
-(void)discardContentIfPossible;
-(char)isContentDiscarded;
-(id)initWithPressed:(char)arg1 tintColor:(id)arg2 ;
-(UIImage *)tintedImage;
@end

