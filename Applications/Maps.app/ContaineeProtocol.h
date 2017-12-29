/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ContaineeProtocol <NSObject>
@property (assign,nonatomic) char allowsLimitedInteractionOnly; 
@property (assign,nonatomic,__weak) UIViewController*<ContainerProtocol> containerViewController; 
@property (assign,nonatomic) char presentedModally; 
@property (assign,nonatomic) char takesAvailableHeight; 
@optional
-(unsigned)defaultLayoutForStyle:(unsigned)arg1;
-(char)allowsLongPressToMarkLocation;
-(char)allowsQuickActionMenuInMap;
-(id)transitionController;

@required
-(void)willBecomeCurrent:(char)arg1;
-(void)willResignCurrent:(char)arg1;
-(void)willChangeLayout:(unsigned)arg1;
-(void)didChangeLayout:(unsigned)arg1;
-(void)willChangeContainerStyle:(unsigned)arg1;
-(void)didChangeContainerStyle:(unsigned)arg1;
-(void)closedBySwipe;
-(char)supportOverridenLayout;
-(char)supportDrag;
-(char)useDefaultLayout;
-(char)wantsDimming;
-(char)updateConstraintsForLayout:(unsigned)arg1;
-(char)updateHeightConstraintWithValue:(float)arg1;
-(float)heightForLayout:(unsigned)arg1;
-(unsigned)closestLayoutWithVelocity:(float)arg1 acceleration:(float)arg2 previousLayout:(unsigned)arg3;
-(char)allowsLimitedInteractionOnly;
-(void)setAllowsLimitedInteractionOnly:(char)arg1;
-(char)presentedModally;
-(char)takesAvailableHeight;
-(void)setTakesAvailableHeight:(char)arg1;
-(id)contentView;
-(id)headerView;
-(id)heightConstraint;
-(id)footerView;
-(void)setPresentedModally:(char)arg1;
-(UIViewController*<ContainerProtocol>)containerViewController;
-(void)setContainerViewController:(id)arg1;

@end

