/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIInterfaceActionPresenting;
@class UIView, UIViewController, NSString, UIImage, NSPointerArray, UIInterfaceActionRepresentationView, UIInterfaceActionVisualStyle, UIColor;

@interface UIInterfaceAction : NSObject <NSCopying> {

	char _enabled;
	char _preferred;
	char _focused;
	UIView* _customContentView;
	int _type;
	UIViewController* _customContentViewController;
	NSString* _title;
	int _titleAlignment;
	NSString* _classificationTitle;
	UIImage* _leadingImage;
	UIImage* _trailingImage;
	/*^block*/id _handler;
	NSPointerArray* _weakDisplayPropertyObservers;
	UIInterfaceActionRepresentationView* __visualRepresentation;
	id<_UIInterfaceActionPresenting> __presentingController;
	UIInterfaceActionVisualStyle* _visualStyle;
	UIColor* _titleTextColor;
	UIColor* _imageTintColor;
	CGSize _leadingImageLayoutSize;
	CGSize _trailingImageLayoutSize;

}

@property (nonatomic,retain) UIViewController * customContentViewController;                                                                   //@synthesize customContentViewController=_customContentViewController - In the implementation block
@property (nonatomic,copy) id handler;                                                                                                         //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) int type;                                                                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSPointerArray * weakDisplayPropertyObservers;                                                                  //@synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers - In the implementation block
@property (nonatomic,readonly) int _typeForDeterminingViewRepresentation; 
@property (nonatomic,readonly) UIView * customContentView;                                                                                     //@synthesize customContentView=_customContentView - In the implementation block
@property (assign,setter=_setVisualRepresentation:,nonatomic,__weak) UIInterfaceActionRepresentationView * _visualRepresentation;              //@synthesize _visualRepresentation=__visualRepresentation - In the implementation block
@property (assign,setter=_setPresentingController:,nonatomic,__weak) id<_UIInterfaceActionPresenting> _presentingController;                   //@synthesize _presentingController=__presentingController - In the implementation block
@property (assign,nonatomic) CGSize leadingImageLayoutSize;                                                                                    //@synthesize leadingImageLayoutSize=_leadingImageLayoutSize - In the implementation block
@property (assign,nonatomic) CGSize trailingImageLayoutSize;                                                                                   //@synthesize trailingImageLayoutSize=_trailingImageLayoutSize - In the implementation block
@property (assign,setter=_setIsPreferred:,getter=_isPreferred,nonatomic) char preferred;                                                       //@synthesize preferred=_preferred - In the implementation block
@property (assign,setter=_setIsFocused:,getter=_isFocused,nonatomic) char focused;                                                             //@synthesize focused=_focused - In the implementation block
@property (setter=_setVisualStyle:,getter=_visualStyle,nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;                           //@synthesize visualStyle=_visualStyle - In the implementation block
@property (setter=_setTitleTextColor:,getter=_titleTextColor,nonatomic,retain) UIColor * titleTextColor;                                       //@synthesize titleTextColor=_titleTextColor - In the implementation block
@property (setter=_setImageTintColor:,getter=_imageTintColor,nonatomic,retain) UIColor * imageTintColor;                                       //@synthesize imageTintColor=_imageTintColor - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) int titleAlignment;                                                                                               //@synthesize titleAlignment=_titleAlignment - In the implementation block
@property (nonatomic,copy) NSString * classificationTitle;                                                                                     //@synthesize classificationTitle=_classificationTitle - In the implementation block
@property (nonatomic,retain) UIImage * leadingImage;                                                                                           //@synthesize leadingImage=_leadingImage - In the implementation block
@property (nonatomic,retain) UIImage * trailingImage;                                                                                          //@synthesize trailingImage=_trailingImage - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                                                                                    //@synthesize enabled=_enabled - In the implementation block
+(id)actionWithTitle:(id)arg1 type:(int)arg2 handler:(/*^block*/id)arg3 ;
+(char)changedProperties:(id)arg1 containsAny:(id)arg2 ;
+(id)actionWithCustomContentViewController:(id)arg1 ;
+(id)actionWithCustomContentView:(id)arg1 ;
+(void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(char)arg1 ;
+(id)_observableDisplayProperties;
-(void)setTitle:(NSString *)arg1 ;
-(id)description;
-(NSString *)title;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(void)setTrailingImage:(UIImage *)arg1 ;
-(void)_setTitleTextColor:(id)arg1 ;
-(void)_setImageTintColor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_titleTextColor;
-(void)_addActionDisplayPropertyObserver:(id)arg1 ;
-(void)_removeActionDisplayPropertyObserver:(id)arg1 ;
-(id)_visualStyle;
-(CGSize)_layoutSizeForImageProperty:(id)arg1 ;
-(void)_setVisualStyle:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(char)_isPreferred;
-(char)_isFocused;
-(int)_typeForDeterminingViewRepresentation;
-(id)_imageTintColor;
-(int)titleAlignment;
-(void)_setIsPreferred:(char)arg1 ;
-(void)_invokeHandlerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_setIsFocused:(char)arg1 ;
-(void)setTitleAlignment:(int)arg1 ;
-(id)initWithTitle:(id)arg1 type:(int)arg2 customContentViewController:(id)arg3 customContentView:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)_notifyObserversVisualStyleDidChange;
-(void)_notifyObserversDidChangeActionProperty:(id)arg1 ;
-(UIViewController *)customContentViewController;
-(id<_UIInterfaceActionPresenting>)_presentingController;
-(void)setLeadingImage:(UIImage *)arg1 ;
-(UIView *)customContentView;
-(void)setLeadingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)leadingImageLayoutSize;
-(void)setTrailingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)trailingImageLayoutSize;
-(void)setCustomContentViewController:(UIViewController *)arg1 ;
-(NSString *)classificationTitle;
-(void)setClassificationTitle:(NSString *)arg1 ;
-(UIImage *)leadingImage;
-(UIImage *)trailingImage;
-(NSPointerArray *)weakDisplayPropertyObservers;
-(UIInterfaceActionRepresentationView *)_visualRepresentation;
-(void)_setVisualRepresentation:(id)arg1 ;
-(void)_setPresentingController:(id)arg1 ;
@end

