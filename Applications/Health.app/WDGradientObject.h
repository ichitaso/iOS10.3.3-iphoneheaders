/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Health/Health-Structs.h>
@class NSArray;

@interface WDGradientObject : NSObject {

	NSArray* _colors;
	NSArray* _locations;

}

@property (nonatomic,readonly) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)gradientWithColors:(id)arg1 locations:(id)arg2 ;
+(id)gradientWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(float*)_locationsArray;
-(CGGradientRef)newGradientRef;
-(char)isValid;
-(NSArray *)colors;
-(NSArray *)locations;
-(id)initWithColors:(id)arg1 locations:(id)arg2 ;
@end

