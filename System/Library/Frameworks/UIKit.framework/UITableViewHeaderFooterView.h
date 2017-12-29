/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewSubviewReusing.h>

@protocol UITable, UITableConstants;
@class NSString, UIImage, UIView, _UITableViewHeaderFooterViewLabel, UIColor, UITableView, UILabel;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {

	int _tableViewStyle;
	UIImage* _backgroundImage;
	CGRect _frame;
	int _textAlignment;
	id<UITable> _tableView;
	float _maxTitleWidth;
	NSString* _reuseIdentifier;
	UIView* _backgroundView;
	_UITableViewHeaderFooterViewLabel* _label;
	_UITableViewHeaderFooterViewLabel* _detailLabel;
	UIView* _contentView;
	UIColor* _tintColor;
	UIEdgeInsets _separatorInset;
	id<UITableConstants> _constants;
	struct {
		unsigned isHeader : 1;
		unsigned labelBackgroundColorNeedsUpdate : 1;
		unsigned detailLabelBackgroundColorNeedsUpdate : 1;
		unsigned floating : 1;
		unsigned stripPadding : 1;
		unsigned isTopHeader : 1;
		unsigned didSetSectionHeader : 1;
		unsigned didSetupDefaults : 1;
	}  _headerFooterFlags;
	id<UITable> _table;

}

@property (assign,nonatomic,__weak) id<UITable> table;                                                                  //@synthesize table=_table - In the implementation block
@property (nonatomic,copy) NSString * reuseIdentifier;                                                                  //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (assign,setter=_setMarginWidth:,getter=_marginWidth,nonatomic) float marginWidth; 
@property (assign,setter=_setRightMarginWidth:,getter=_rightMarginWidth,nonatomic) float rightMarginWidth; 
@property (assign,setter=_setStripPadding:,getter=_stripPadding,nonatomic) char stripPadding; 
@property (assign,setter=_setTopHeader:,getter=_isTopHeader,nonatomic) char topHeader; 
@property (setter=_setConstants:,getter=_constants,nonatomic,retain) id<UITableConstants> constants; 
@property (assign,nonatomic) char floating; 
@property (assign,nonatomic) int tableViewStyle; 
@property (nonatomic,retain) UIImage * backgroundImage;                                                                 //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) char sectionHeader; 
@property (assign,nonatomic,__weak) UITableView * tableView; 
@property (assign,nonatomic) int textAlignment; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) float maxTitleWidth;                                                                       //@synthesize maxTitleWidth=_maxTitleWidth - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (nonatomic,readonly) UIView * contentView;                                                                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)defaultHeaderHeightForStyle:(int)arg1 ;
+(float)defaultFooterHeightForStyle:(int)arg1 ;
+(id)_defaultPlainHeaderFooterFont;
+(id)_defaultFontForHeaderFooterView:(id)arg1 ;
+(id)_defaultTextColorForTableViewStyle:(int)arg1 isSectionHeader:(char)arg2 ;
+(id)_defaultFontForTableViewStyle:(int)arg1 isSectionHeader:(char)arg2 ;
-(void)_cnui_applyContactStyle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setOpaque:(char)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CGRect)frame;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3 ;
-(void)layoutMarginsDidChange;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(char)_isTransparentFocusRegion;
-(void)setNeedsUpdateConstraints;
-(UIImage *)backgroundImage;
-(CGRect)_labelFrame;
-(void)setMaxTitleWidth:(float)arg1 ;
-(void)setFloating:(char)arg1 ;
-(void)setTableViewStyle:(int)arg1 ;
-(id)_constants;
-(void)_setConstants:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setSectionHeader:(char)arg1 ;
-(void)_setMarginWidth:(float)arg1 ;
-(void)_setRightMarginWidth:(float)arg1 ;
-(void)_setupLabelAppearance;
-(void)_setBackgroundViewColor:(id)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)reuseIdentifier;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)prepareForReuse;
-(void)setReuseIdentifier:(NSString *)arg1 ;
-(UILabel *)textLabel;
-(UILabel *)detailTextLabel;
-(void)_setTopHeader:(char)arg1 ;
-(void)_setStripPadding:(char)arg1 ;
-(UIView *)backgroundView;
-(void)_tableViewDidUpdateMarginWidth;
-(float)_marginWidth;
-(UITableView *)tableView;
-(int)textAlignment;
-(id<UITable>)table;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(int)tableViewStyle;
-(char)floating;
-(void)setTable:(id<UITable>)arg1 ;
-(CGSize)_sizeThatFits:(CGSize)arg1 stripPaddingForAbuttingView:(char)arg2 isTopHeader:(char)arg3 ;
-(float)_rightMarginWidth;
-(void)_setupBackgroundView;
-(char)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1 ;
-(void)_updateBackgroundImage;
-(float)maxTitleWidth;
-(void)_invalidateLabelBackgroundColor;
-(void)_invalidateDetailLabelBackgroundColor;
-(char)sectionHeader;
-(void)_setupDefaultsIfNecessary;
-(char)_useDetailText;
-(void)_updateLabelBackgroundColor;
-(void)_updateDetailLabelBackgroundColor;
-(id)_label:(char)arg1 ;
-(CGSize)_textSizeForWidth:(float)arg1 ;
-(CGSize)_detailTextSizeForWidth:(float)arg1 ;
-(CGRect)_backgroundRect;
-(void)_updateLayerContents;
-(void)_updateContentAndBackgroundView;
-(void)_updateLabelBackgroundColorIfNeeeded;
-(CGRect)_detailLabelFrame;
-(void)_updateDetailLabelBackgroundColorIfNeeded;
-(char)_stripPadding;
-(char)_isTopHeader;
@end

