/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:35:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/AccessibilityBundles/ScreenSharing.axuiservice/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <UIKit/UIViewController.h>

@protocol OS_dispatch_semaphore, AXUIService;
@class NSObject, UIImage, SSUICursorView;

@interface SSUICursorViewController : UIViewController {

	int counter;
	NSObject*<OS_dispatch_semaphore> blinker;
	UIImage* arrowImage;
	UIImage* leftarrowImage;
	char _flipped;
	char _rotated;
	UIImage* upArrowImage;
	UIImage* downArrowImage;
	UIImage* currentArrowImage;
	int currentColor;
	id<AXUIService> _axuiService;
	SSUICursorView* _cursorView;
	CGPathRef _cursorPath;
	CGRect _cursorFrame;

}

@property (nonatomic,retain) SSUICursorView * cursorView;              //@synthesize cursorView=_cursorView - In the implementation block
@property (assign,nonatomic) CGRect cursorFrame;                       //@synthesize cursorFrame=_cursorFrame - In the implementation block
@property (nonatomic,retain) CGPathRef cursorPath;                     //@synthesize cursorPath=_cursorPath - In the implementation block
@property (retain) UIImage * arrowImage; 
@property (retain) UIImage * leftarrowImage; 
@property (retain) UIImage * upArrowImage; 
@property (retain) UIImage * downArrowImage; 
@property (retain) UIImage * currentArrowImage; 
@property (assign) int currentColor; 
@property (assign) char flipped;                                       //@synthesize flipped=_flipped - In the implementation block
@property (assign) char rotated;                                       //@synthesize rotated=_rotated - In the implementation block
@property (assign,nonatomic) id<AXUIService> axuiService;              //@synthesize axuiService=_axuiService - In the implementation block
@property (assign,nonatomic) char cursorHidden; 
+(id)transformImage:(id)arg1 flip:(char)arg2 rotate:(char)arg3 ;
+(id)serviceBundle;
-(SSUICursorView *)cursorView;
-(void)_updateCursorPath;
-(void)setCursorView:(SSUICursorView *)arg1 ;
-(void)setCursorPath:(CGPathRef)arg1 ;
-(void)setCursorHidden:(char)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 ;
-(CGRect)cursorFrame;
-(CGPathRef)cursorPath;
-(void)setAxuiService:(id<AXUIService>)arg1 ;
-(id<AXUIService>)axuiService;
-(id)initWithAXUIService:(id)arg1 ;
-(void)setCurrentArrowImage:(UIImage *)arg1 ;
-(void)setLeftarrowImage:(UIImage *)arg1 ;
-(void)setUpArrowImage:(UIImage *)arg1 ;
-(void)setDownArrowImage:(UIImage *)arg1 ;
-(void)_updateCursorFrameAnimated:(char)arg1 ;
-(void)setFrameOriginWithPoint:(CGPoint)arg1 ;
-(void)strokeCore:(char)arg1 rotate:(char)arg2 ;
-(void)setCursorFrame:(CGRect)arg1 animated:(char)arg2 ;
-(UIImage *)currentArrowImage;
-(void)setCursorPath:(CGPathRef)arg1 withColor:(int)arg2 flipped:(char)arg3 rotated:(char)arg4 ;
-(UIImage *)downArrowImage;
-(char)cursorHidden;
-(UIImage *)arrowImage;
-(UIImage *)leftarrowImage;
-(UIImage *)upArrowImage;
-(char)rotated;
-(void)setArrowImage:(UIImage *)arg1 ;
-(char)flipped;
-(void)setFlipped:(char)arg1 ;
-(void)dealloc;
-(void)stroke;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setRotated:(char)arg1 ;
-(int)currentColor;
-(void)setCurrentColor:(int)arg1 ;
@end

