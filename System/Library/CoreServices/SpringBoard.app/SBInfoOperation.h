/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBInfoOperation : NSObject {

	id _operand;
	NSString* _label;

}

@property (nonatomic,readonly) id operand;              //@synthesize operand=_operand - In the implementation block
+(id)operationWithOperand:(id)arg1 label:(id)arg2 ;
-(id)initWithOperand:(id)arg1 label:(id)arg2 ;
-(id)operand;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
@end

