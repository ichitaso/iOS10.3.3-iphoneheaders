/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIViewLFLDChangeRecord.h>

@class NSISVariable, UIView;

@interface _UIViewLFLDVariableChangeRecord : _UIViewLFLDChangeRecord {

	NSISVariable* _variable;
	float _value;
	UIView* _variableDelegate;

}

@property (nonatomic,readonly) NSISVariable * variable;                //@synthesize variable=_variable - In the implementation block
@property (nonatomic,readonly) float value;                            //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) UIView * variableDelegate;              //@synthesize variableDelegate=_variableDelegate - In the implementation block
-(id)description;
-(float)value;
-(id)initWithVariable:(id)arg1 inLayoutEngine:(id)arg2 ;
-(NSISVariable *)variable;
-(UIView *)variableDelegate;
@end

