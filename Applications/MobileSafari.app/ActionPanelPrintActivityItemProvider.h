/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/ActionPanelActivityItemProvider.h>

@class _SFPrintController, UIPrintPageRenderer;

@interface ActionPanelPrintActivityItemProvider : ActionPanelActivityItemProvider {

	_SFPrintController* _printController;
	UIPrintPageRenderer* _printPageRenderer;
	char _hasReservedPrintInteractionController;

}

@property (nonatomic,readonly) char hasReservedPrintInteractionController;              //@synthesize hasReservedPrintInteractionController=_hasReservedPrintInteractionController - In the implementation block
-(id)initWithTabDocument:(id)arg1 ;
-(char)hasReservedPrintInteractionController;
-(id)initWithPlaceholderItem:(id)arg1 tabDocument:(id)arg2 ;
-(id)item;
@end
