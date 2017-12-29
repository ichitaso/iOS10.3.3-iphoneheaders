/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <assistivetouchd/assistivetouchd-Structs.h>
@interface HNDPointHolder : NSObject {

	float _orbValue;
	CGPoint _point;

}

@property (assign,nonatomic) float orbValue;              //@synthesize orbValue=_orbValue - In the implementation block
@property (assign,nonatomic) CGPoint point;               //@synthesize point=_point - In the implementation block
+(id)pointHolderWithPoint:(CGPoint)arg1 orbValue:(float)arg2 ;
+(id)pointHolderWithPoint:(CGPoint)arg1 ;
-(CGPoint)point;
-(void)setPoint:(CGPoint)arg1 ;
-(float)orbValue;
-(void)setOrbValue:(float)arg1 ;
@end

