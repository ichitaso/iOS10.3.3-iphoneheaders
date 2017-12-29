/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <vot/VOTElementAspect.h>

@class NSString;

@interface VOTElementSnapshot : NSObject <VOTElementAspect> {

	NSString* _label;
	NSString* _value;
	unsigned long long _traits;
	NSRange _rowRange;
	CGRect _frame;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * label; 
@property (nonatomic,readonly) NSString * value; 
@property (nonatomic,readonly) unsigned long long traits; 
@property (nonatomic,readonly) NSRange rowRange; 
@property (nonatomic,readonly) CGRect frame; 
-(id)initWithLabel:(id)arg1 value:(id)arg2 traits:(unsigned long long)arg3 rowRange:(NSRange)arg4 frame:(CGRect)arg5 ;
-(NSRange)rowRange;
-(void)dealloc;
-(CGRect)frame;
-(NSString *)description;
-(NSString *)value;
-(NSString *)label;
-(unsigned long long)traits;
@end

