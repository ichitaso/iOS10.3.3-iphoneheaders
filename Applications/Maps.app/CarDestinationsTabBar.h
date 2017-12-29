/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIFocusEnvironment.h>

@protocol CarDestinationsTabBarDelegate, UIFocusItem;
@class NSArray, UIView, NSMapTable, NSMutableArray, NSString;

@interface CarDestinationsTabBar : UIView <UIFocusEnvironment> {

	char _loading;
	id<CarDestinationsTabBarDelegate> _delegate;
	NSArray* _items;
	id<UIFocusItem> _lastFocusedItem;
	unsigned _selectedTabIndex;
	UIView* _containerView;
	NSMapTable* _buttonsByItem;
	NSMutableArray* _buttons;

}

@property (nonatomic,retain) UIView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) NSMapTable * buttonsByItem;                                     //@synthesize buttonsByItem=_buttonsByItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;                                       //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic,__weak) id<UIFocusItem> lastFocusedItem;                         //@synthesize lastFocusedItem=_lastFocusedItem - In the implementation block
@property (assign,nonatomic,__weak) id<CarDestinationsTabBarDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) unsigned selectedTabIndex;                                      //@synthesize selectedTabIndex=_selectedTabIndex - In the implementation block
@property (assign,getter=isLoading,nonatomic) char loading;                                  //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
-(void)setSelectedTabIndex:(unsigned)arg1 ;
-(float)_spacingForItemCount:(unsigned)arg1 ;
-(id)_imageWithIcon:(id)arg1 backgroundColor:(id)arg2 ;
-(id)_backgroundImageWithColor:(id)arg1 ;
-(id)_tabImageWithIcon:(id)arg1 color:(id)arg2 backgroundColor:(id)arg3 ;
-(CGSize)_calculateSize:(CGSize)arg1 fittingSize:(CGSize)arg2 ;
-(id<UIFocusItem>)lastFocusedItem;
-(void)setLastFocusedItem:(id<UIFocusItem>)arg1 ;
-(unsigned)selectedTabIndex;
-(NSMapTable *)buttonsByItem;
-(void)setButtonsByItem:(NSMapTable *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CarDestinationsTabBarDelegate>)arg1 ;
-(id<CarDestinationsTabBarDelegate>)delegate;
-(UIView *)containerView;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)setContainerView:(UIView *)arg1 ;
-(NSArray *)preferredFocusEnvironments;
-(char)shouldUpdateFocusInContext:(id)arg1 ;
-(void)buttonTapped:(id)arg1 ;
-(void)setItems:(id)arg1 animated:(char)arg2 ;
-(char)isLoading;
-(NSMutableArray *)buttons;
-(void)setButtons:(NSMutableArray *)arg1 ;
-(void)setLoading:(char)arg1 ;
@end
