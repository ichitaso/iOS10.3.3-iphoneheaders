/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@class TrayCollectionViewFlowLayoutConfiguration;

@interface TrayCollectionViewFlowLayout : UICollectionViewFlowLayout {

	TrayCollectionViewFlowLayoutConfiguration* _configuration;

}

@property (nonatomic,readonly) TrayCollectionViewFlowLayoutConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(void)_updateAttributesForBounds:(CGRect)arg1 ;
-(void)prepareLayout;
-(TrayCollectionViewFlowLayoutConfiguration *)configuration;
-(id)initWithConfiguration:(id)arg1 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end
