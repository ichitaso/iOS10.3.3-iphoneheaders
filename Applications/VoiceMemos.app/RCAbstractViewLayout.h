/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/VoiceMemos.app/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UILayoutGuide, NSArray, UIView;

@interface RCAbstractViewLayout : NSObject {

	char _enabled;
	char _hidden;
	UILayoutGuide* _guide;
	NSArray* _views;
	float _horizontalContentMargin;
	UIView* _hostView;
	float _alpha;
	NSArray* _guideLayoutConstraints;

}

@property (nonatomic,readonly) NSArray * guideLayoutConstraints;              //@synthesize guideLayoutConstraints=_guideLayoutConstraints - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * guide;                         //@synthesize guide=_guide - In the implementation block
@property (nonatomic,readonly) NSArray * views;                               //@synthesize views=_views - In the implementation block
@property (assign,nonatomic) float horizontalContentMargin;                   //@synthesize horizontalContentMargin=_horizontalContentMargin - In the implementation block
@property (nonatomic,readonly) UIView * hostView;                             //@synthesize hostView=_hostView - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden;                     //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) float alpha;                                     //@synthesize alpha=_alpha - In the implementation block
-(void)_performWithLoadedViews:(char)arg1 block:(/*^block*/id)arg2 ;
-(void)loadViewsIfNecessary;
-(void)loadGuideConstraintsIfNecessary;
-(NSArray *)guideLayoutConstraints;
-(void)setHorizontalContentMargin:(float)arg1 ;
-(void)insertIntoHostView:(id)arg1 ;
-(void)removeFromHostView;
-(UILayoutGuide *)guide;
-(float)horizontalContentMargin;
-(id)init;
-(void)setHidden:(char)arg1 ;
-(char)isHidden;
-(void)setAlpha:(float)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(float)alpha;
-(void)prepareForReuse;
-(UIView *)hostView;
-(NSArray *)views;
@end

