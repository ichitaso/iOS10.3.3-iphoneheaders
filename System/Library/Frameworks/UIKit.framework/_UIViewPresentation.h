/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, NSArray;


@protocol _UIViewPresentation <NSObject>
@property (nonatomic,__weak,readonly) UIView * view; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) CGRect frame; 
@property (nonatomic,retain) NSArray * subviews; 
@property (nonatomic,retain) id<_UIViewPresentation> superview; 
@required
-(id<_UIViewPresentation>)superview;
-(void)removeFromSuperview;
-(void)addSubview:(id)arg1;
-(CGRect)bounds;
-(void)setFrame:(CGRect)arg1;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1;
-(UIView *)view;
-(NSArray *)subviews;
-(void)setPosition:(CGPoint)arg1;
-(CGPoint)position;
-(void)setSubviews:(id)arg1;
-(void)setSuperview:(id)arg1;

@end

