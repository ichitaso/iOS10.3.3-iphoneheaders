/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKit/UIView.h>

@class _UIBackdropView, UIView, SKUIClientContext, UISegmentedControl, UISearchBar, UIButton, UILabel, UIControl, NSString;

@interface ASPurchasedHeaderView : UIView {

	_UIBackdropView* _backdropView;
	UIView* _borderView;
	SKUIClientContext* _clientContext;
	UISegmentedControl* _filterLocalAppsControl;
	UISearchBar* _searchBar;
	char _searchBarHidden;
	UIButton* _sortButton;
	UILabel* _sortByLabel;

}

@property (nonatomic,readonly) _UIBackdropView * backdropView;                           //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) SKUIClientContext * clientContext;                          //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) UIControl * filterLocalAppsControl;                       //@synthesize filterLocalAppsControl=_filterLocalAppsControl - In the implementation block
@property (assign,nonatomic) char filtersLocalApps; 
@property (nonatomic,readonly) UIControl * sortTypeControl;                              //@synthesize sortButton=_sortButton - In the implementation block
@property (nonatomic,copy) NSString * sortTypeTitle; 
@property (nonatomic,readonly) UISearchBar * searchBar; 
@property (assign,getter=isSearchBarHidden,nonatomic) char searchBarHidden;              //@synthesize searchBarHidden=_searchBarHidden - In the implementation block
-(UIControl *)filterLocalAppsControl;
-(UIControl *)sortTypeControl;
-(void)setFiltersLocalApps:(char)arg1 ;
-(void)setSearchBarHidden:(char)arg1 ;
-(void)setSortTypeTitle:(NSString *)arg1 ;
-(char)filtersLocalApps;
-(char)isSearchBarHidden;
-(NSString *)sortTypeTitle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UISearchBar *)searchBar;
-(_UIBackdropView *)backdropView;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(SKUIClientContext *)clientContext;
@end

