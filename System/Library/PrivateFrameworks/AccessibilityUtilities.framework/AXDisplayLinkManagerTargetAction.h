/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:51:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AXDisplayLinkManagerTargetAction : NSObject {

	id _target;
	SEL _actionSelector;
	unsigned _displayDidRefreshCount;

}

@property (nonatomic,retain) id target;                                    //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL actionSelector;                           //@synthesize actionSelector=_actionSelector - In the implementation block
@property (assign,nonatomic) unsigned displayDidRefreshCount;              //@synthesize displayDidRefreshCount=_displayDidRefreshCount - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setActionSelector:(SEL)arg1 ;
-(SEL)actionSelector;
-(unsigned)displayDidRefreshCount;
-(void)setDisplayDidRefreshCount:(unsigned)arg1 ;
-(id)initWithTarget:(id)arg1 actionSelector:(SEL)arg2 ;
-(void)displayDidRefresh:(id)arg1 ;
@end

