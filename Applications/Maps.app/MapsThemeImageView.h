/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>
#import <Maps/MapsTheming.h>

@class NSString;

@interface MapsThemeImageView : UIImageView <MapsTheming> {

	/*^block*/id _imageProvider;

}

@property (nonatomic,copy) id imageProvider;                        //@synthesize imageProvider=_imageProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTheme;
-(void)willMoveToWindow:(id)arg1 ;
-(id)imageProvider;
-(void)setImageProvider:(id)arg1 ;
-(void)_updateImage;
@end

