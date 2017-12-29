/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemTableViewCell.h>

@class ASUpdateCellLayout;

@interface ASUpdateTableViewCell : SKUIItemTableViewCell {

	ASUpdateCellLayout* _layout;

}

@property (nonatomic,readonly) ASUpdateCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(void)configureForItem:(id)arg1 rowIndex:(int)arg2 textLayout:(id)arg3 numberOfLines:(int)arg4 isPad:(char)arg5 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(ASUpdateCellLayout *)layout;
-(void)configureForItem:(id)arg1 rowIndex:(int)arg2 ;
@end
