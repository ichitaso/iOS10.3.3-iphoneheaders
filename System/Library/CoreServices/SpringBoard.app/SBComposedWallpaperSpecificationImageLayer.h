/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBComposedWallpaperSpecificationLayer.h>

@class NSURL;

@interface SBComposedWallpaperSpecificationImageLayer : SBComposedWallpaperSpecificationLayer {

	NSURL* _imageURL;
	int _sizingMode;

}

@property (nonatomic,copy,readonly) NSURL * imageURL;              //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,readonly) int sizingMode;                     //@synthesize sizingMode=_sizingMode - In the implementation block
+(id)imageURLForLayerDictionary:(id)arg1 ;
+(int)sizingModeForLayerDictionary:(id)arg1 ;
+(id)layerWithImageURL:(id)arg1 sizingMode:(int)arg2 ;
-(id)initWithLayerDictionary:(id)arg1 ;
-(id)referencedAssetURLs;
-(id)initWithImageURL:(id)arg1 sizingMode:(int)arg2 ;
-(int)sizingMode;
-(id)init;
-(id)propertyListRepresentation;
-(NSURL *)imageURL;
@end

