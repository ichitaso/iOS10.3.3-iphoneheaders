/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ActionControl <NSObject>
@property (assign,nonatomic,__weak) id<ActionCoordination> coordinator; 
@property (nonatomic,readonly) char isActive; 
@required
-(void)setCoordinator:(id)arg1;
-(char)isActive;
-(void)deactivate;
-(id<ActionCoordination>)coordinator;

@end

