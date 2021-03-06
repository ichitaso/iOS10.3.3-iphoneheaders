/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/PersonalizedItemSource.h>

@class SelectedLabelMarkerItem, MKMapItem, VKLabelMarker, NSSet;

@interface SelectedLabelMarkerItemSource : PersonalizedItemSource {

	SelectedLabelMarkerItem* _selectedLabelMarkerItem;
	MKMapItem* _selectedMapItem;

}

@property (nonatomic,retain) VKLabelMarker * selectedLabelMarker; 
@property (nonatomic,retain) MKMapItem * selectedMapItem;                                 //@synthesize selectedMapItem=_selectedMapItem - In the implementation block
@property (nonatomic,readonly) id<PersonalizedItem> selectedLabelMarkerItem; 
@property (nonatomic,readonly) NSSet * keys; 
-(void)setSelectedLabelMarker:(VKLabelMarker *)arg1 ;
-(void)setSelectedMapItem:(MKMapItem *)arg1 ;
-(id<PersonalizedItem>)selectedLabelMarkerItem;
-(MKMapItem *)selectedMapItem;
-(char)isEmpty;
-(NSSet *)keys;
-(VKLabelMarker *)selectedLabelMarker;
-(id)allItems;
@end

