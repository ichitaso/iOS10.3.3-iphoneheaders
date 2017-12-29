/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class UIView, UIViewController, ICAttachment;

@interface ICMarkupActivity : UIActivity {

	UIView* _fromView;
	UIViewController* _presentingViewController;
	ICAttachment* _attachment;
	/*^block*/id _frameBlock;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic,__weak) UIView * fromView;                                        //@synthesize fromView=_fromView - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,retain) ICAttachment * attachment;                                       //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,copy) id frameBlock;                                                     //@synthesize frameBlock=_frameBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                //@synthesize completionBlock=_completionBlock - In the implementation block
-(void)setFrameBlock:(id)arg1 ;
-(id)frameBlock;
-(id)initFromView:(id)arg1 presentingViewController:(id)arg2 frameBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(UIViewController *)presentingViewController;
-(UIView *)fromView;
-(id)activityType;
-(id)activityTitle;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setFromView:(UIView *)arg1 ;
-(id)activityImage;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
@end

