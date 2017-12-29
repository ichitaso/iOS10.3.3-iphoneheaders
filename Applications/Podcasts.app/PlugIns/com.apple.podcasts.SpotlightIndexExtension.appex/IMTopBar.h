/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, UIView, UIImage;


@protocol IMTopBar <NSObject>
@property (assign,nonatomic) char bottom; 
@property (nonatomic,retain) NSArray * leftItems; 
@property (nonatomic,retain) UIView * titleView; 
@property (nonatomic,retain) NSArray * rightItems; 
@property (nonatomic,retain) UIImage * shadowImage; 
@required
-(void)setLeftItems:(id)arg1 rightItems:(id)arg2;
-(UIImage *)shadowImage;
-(void)setShadowImage:(id)arg1;
-(UIView *)titleView;
-(void)setTitleView:(id)arg1;
-(id)backgroundImageForToolbarPosition:(int)arg1 barMetrics:(int)arg2;
-(void)setBackgroundImage:(id)arg1 forToolbarPosition:(int)arg2 barMetrics:(int)arg3;
-(NSArray *)leftItems;
-(NSArray *)rightItems;
-(void)setLeftItems:(id)arg1;
-(void)setRightItems:(id)arg1;
-(char)bottom;
-(void)setBottom:(char)arg1;

@end

