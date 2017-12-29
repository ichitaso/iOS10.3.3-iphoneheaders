/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuGesturesSheetBase.h>

@protocol SCATMenuPanItemsViewDelegate;
@interface SCATModernMenuGesturePanSheet : SCATModernMenuGesturesSheetBase {

	id<SCATMenuPanItemsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<SCATMenuPanItemsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(void)setDelegate:(id<SCATMenuPanItemsViewDelegate>)arg1 ;
-(id<SCATMenuPanItemsViewDelegate>)delegate;
@end
