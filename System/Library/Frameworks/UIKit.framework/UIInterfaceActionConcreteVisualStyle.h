/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInterfaceActionConcreteVisualStyleImplInternal.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface UIInterfaceActionConcreteVisualStyle : NSObject <UIInterfaceActionConcreteVisualStyleImplInternal, NSCopying>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)actionPropertiesAffectingImageViewStyling;
-(void)configureAttributesForImageView:(id)arg1 imageProperty:(id)arg2 actionViewState:(id)arg3 ;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(UIEdgeInsets)actionSequenceEdgeInsets;
-(CGSize)minimumActionContentSize;
-(id)newSectionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)defaultScreen;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(id)actionTitleLabelColorForViewState:(id)arg1 ;
-(id)actionViewStateForAttachingToActionRepresentationView:(id)arg1 ;
-(float)actionTitleLabelMinimumScaleFactor;
-(float)contentCornerRadius;
-(UIEdgeInsets)contentMargin;
-(float)horizontalImageContentSpacing;
-(float)verticalImageContentSpacing;
-(float)actionSectionSpacing;
-(CGSize)maximumActionGroupContentSize;
-(char)selectByPressGestureRequired;
-(char)selectionFeedbackEnabled;
-(id)newActionBackgroundViewForViewState:(id)arg1 ;
-(id)newGroupBackgroundViewWithGroupViewState:(id)arg1 ;
-(id)actionClassificationLabelFontForViewState:(id)arg1 ;
-(id)actionClassificationLabelColorForViewState:(id)arg1 ;
-(id)actionImageViewTintColorForImageProperty:(id)arg1 actionViewState:(id)arg2 ;
-(void)configureAttributesForTitleLabel:(id)arg1 classificationLabel:(id)arg2 actionViewState:(id)arg3 ;
-(id)actionPropertiesAffectingLabelStyling;
-(void)configureAttributesForActionRepresentationView:(id)arg1 actionViewState:(id)arg2 ;
-(id)actionPropertiesAffectingActionRepresentationViewStyling;
-(void)configureAttributesForActionScrollView:(id)arg1 groupViewState:(id)arg2 ;
-(id)actionGroupPropertiesAffectingActionsScrollViewStyling;
-(void)configureForPresentingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(void)configureForDismissingGroupView:(id)arg1 alongsideTransitionCoordinator:(id)arg2 ;
-(id)newRepresentationViewForAction:(id)arg1 ;
@end
