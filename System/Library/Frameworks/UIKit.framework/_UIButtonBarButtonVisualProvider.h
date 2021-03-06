/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIButtonBarButtonVisualProvider : NSObject <NSCopying>
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)supportsBackButtons;
-(char)buttonSelectionState:(id)arg1 forRequestedState:(char)arg2 ;
-(char)buttonHighlitedState:(id)arg1 forRequestedState:(char)arg2 ;
-(char)buttonEnabledState:(id)arg1 forRequestedState:(char)arg2 ;
-(void)updateButton:(id)arg1 forSelectedState:(char)arg2 ;
-(void)updateButton:(id)arg1 forHighlightedState:(char)arg2 ;
-(void)updateButton:(id)arg1 forEnabledState:(char)arg2 ;
-(void)configureButton:(id)arg1 fromBarItem:(id)arg2 ;
-(void)updateButton:(id)arg1 toUseButtonShapes:(char)arg2 ;
-(void)button:(id)arg1 traitCollectionDidChange:(id)arg2 ;
-(CGSize)buttonIntrinsicContentSize:(id)arg1 ;
-(UIEdgeInsets)buttonAlignmentRectInsets:(id)arg1 ;
@end

