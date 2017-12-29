/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, UIViewController;

@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {

	NSString* _identifier;
	NSString* _segueClassName;
	UIViewController* _viewController;
	NSString* _destinationViewControllerIdentifier;
	char _performOnViewLoad;
	char _animates;

}

@property (assign,nonatomic) char performOnViewLoad;                                //@synthesize performOnViewLoad=_performOnViewLoad - In the implementation block
@property (assign,nonatomic) char animates;                                         //@synthesize animates=_animates - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)perform:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(char)performOnViewLoad;
-(id)_perform:(id)arg1 ;
-(id)_performWithDestinationViewController:(id)arg1 sender:(id)arg2 ;
-(/*^block*/id)newDefaultPerformHandlerForSegue:(id)arg1 ;
-(/*^block*/id)newDefaultPrepareHandlerForSegue:(id)arg1 ;
-(id)instantiateOrFindDestinationViewControllerWithSender:(id)arg1 ;
-(id)segueWithDestinationViewController:(id)arg1 ;
-(char)animates;
-(void)setPerformOnViewLoad:(char)arg1 ;
-(void)setAnimates:(char)arg1 ;
@end

