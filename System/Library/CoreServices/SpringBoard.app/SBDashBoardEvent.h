/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface SBDashBoardEvent : NSObject {

	char _consumable;
	int _type;
	NSNumber* _value;

}

@property (assign,nonatomic) int type;                                         //@synthesize type=_type - In the implementation block
@property (assign,getter=isConsumable,nonatomic) char consumable;              //@synthesize consumable=_consumable - In the implementation block
@property (nonatomic,retain) NSNumber * value;                                 //@synthesize value=_value - In the implementation block
+(id)eventWithType:(int)arg1 ;
-(char)isConsumable;
-(void)setConsumable:(char)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

