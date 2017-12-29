/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/_MKUserTrackingButton.h>
#import <Maps/MapsButtonMiniBarSupport.h>

@interface MapsUserTrackingButton : _MKUserTrackingButton <MapsButtonMiniBarSupport> {

	char _shouldInvertSelectionColor;
	char shouldInvertSelectionColor;

}

@property (assign) char shouldInvertSelectionColor; 
+(id)buttonWithUserTrackingView:(id)arg1 ;
-(char)shouldInvertSelectionColor;
-(void)updateSelectedTintColor;
-(void)setShouldInvertSelectionColor:(char)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)tintColorDidChange;
-(CGRect)_selectedIndicatorBounds;
-(void)setSelected:(char)arg1 ;
-(id)_selectedIndicatorViewWithImage:(id)arg1 ;
-(float)_selectedIndicatorAlpha;
@end

