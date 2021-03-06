/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBWorkspaceEntity.h>

@class SBAlert;

@interface SBWorkspaceAlert : SBWorkspaceEntity {

	SBAlert* _alert;

}

@property (nonatomic,retain) SBAlert * alert;                 //@synthesize alert=_alert - In the implementation block
@property (nonatomic,readonly) Class alertClass; 
+(id)entityForAlert:(id)arg1 ;
-(char)representsAlertOfClass:(Class)arg1 ;
-(id)representedDisplay;
-(Class)alertClass;
-(/*^block*/id)_generator;
-(char)isAlertEntity;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAlert:(id)arg1 ;
-(SBAlert *)alert;
-(void)setAlert:(SBAlert *)arg1 ;
@end

