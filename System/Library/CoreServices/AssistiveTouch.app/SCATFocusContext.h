/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SCATElement;
@class SCATElementManager, AXElementGroup;

@interface SCATFocusContext : NSObject <NSCopying> {

	char _firstInSequence;
	char _shouldResumeFromMenuDismissal;
	char _shouldBeTrackedByZoom;
	char _shouldSuppressAudioOutput;
	char _shouldDeferFocusToNativeFocusElement;
	id<SCATElement> _element;
	int _selectBehavior;
	SCATElementManager* _elementManager;
	id<SCATElement> _menuElement;

}

@property (nonatomic,retain) id<SCATElement> element;                                    //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) SCATElementManager * elementManager;                        //@synthesize elementManager=_elementManager - In the implementation block
@property (assign,nonatomic) int selectBehavior;                                         //@synthesize selectBehavior=_selectBehavior - In the implementation block
@property (assign,getter=isFirstInSequence,nonatomic) char firstInSequence;              //@synthesize firstInSequence=_firstInSequence - In the implementation block
@property (assign,nonatomic) char shouldResumeFromMenuDismissal;                         //@synthesize shouldResumeFromMenuDismissal=_shouldResumeFromMenuDismissal - In the implementation block
@property (nonatomic,retain) id<SCATElement> menuElement;                                //@synthesize menuElement=_menuElement - In the implementation block
@property (nonatomic,readonly) AXElementGroup * parentGroup; 
@property (nonatomic,readonly) char isGroup; 
@property (assign,nonatomic) char shouldBeTrackedByZoom;                                 //@synthesize shouldBeTrackedByZoom=_shouldBeTrackedByZoom - In the implementation block
@property (assign,nonatomic) char shouldSuppressAudioOutput;                             //@synthesize shouldSuppressAudioOutput=_shouldSuppressAudioOutput - In the implementation block
@property (assign,nonatomic) char shouldDeferFocusToNativeFocusElement;                  //@synthesize shouldDeferFocusToNativeFocusElement=_shouldDeferFocusToNativeFocusElement - In the implementation block
+(id)focusContextWithElement:(id)arg1 elementManager:(id)arg2 selectBehavior:(int)arg3 options:(int)arg4 ;
+(id)adHocFocusContext:(id)arg1 ;
+(int)_behaviorForElement:(id)arg1 manager:(id)arg2 ;
+(id)focusContextSelf;
+(id)focusContextAutomatic;
+(id)menuOnlyFocusContext:(id)arg1 ;
-(void)setFirstInSequence:(char)arg1 ;
-(void)setShouldSuppressAudioOutput:(char)arg1 ;
-(int)selectBehavior;
-(void)setMenuElement:(id<SCATElement>)arg1 ;
-(id)elemLog;
-(id<SCATElement>)menuElement;
-(char)waitsForSelectAction;
-(char)isFirstInSequence;
-(char)shouldBeTrackedByZoom;
-(id)initWithElement:(id)arg1 elementManager:(id)arg2 selectBehavior:(int)arg3 ;
-(void)setShouldResumeFromMenuDismissal:(char)arg1 ;
-(void)setSelectBehavior:(int)arg1 ;
-(void)setShouldBeTrackedByZoom:(char)arg1 ;
-(char)shouldResumeFromMenuDismissal;
-(id)_descriptionForSelectBehavior:(int)arg1 ;
-(char)shouldDeferFocusToNativeFocusElement;
-(char)shouldSuppressAudioOutput;
-(void)setShouldDeferFocusToNativeFocusElement:(char)arg1 ;
-(SCATElementManager *)elementManager;
-(void)setElementManager:(SCATElementManager *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)containsPoint:(CGPoint)arg1 ;
-(char)isGroup;
-(id<SCATElement>)element;
-(void)setElement:(id<SCATElement>)arg1 ;
-(AXElementGroup *)parentGroup;
@end

