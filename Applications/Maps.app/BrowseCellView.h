/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UITableViewCell.h>

@class BrowseView;

@interface BrowseCellView : UITableViewCell {

	BrowseView* _browseView;

}

@property (nonatomic,retain) BrowseView * browseView;              //@synthesize browseView=_browseView - In the implementation block
-(BrowseView *)browseView;
-(void)setBrowseView:(BrowseView *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

