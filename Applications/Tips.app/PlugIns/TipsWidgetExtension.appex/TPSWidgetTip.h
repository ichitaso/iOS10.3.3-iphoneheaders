/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsWidgetExtension.appex/TipsWidgetExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsWidgetExtension/TipsWidgetExtension-Structs.h>
#import <Tips/TPSTip.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDate;

@interface TPSWidgetTip : TPSTip <NSCopying, NSCoding> {

	unsigned _displayReason;
	int _displayCount;
	NSDate* _displayDate;

}

@property (assign,nonatomic) unsigned displayReason;              //@synthesize displayReason=_displayReason - In the implementation block
@property (assign,nonatomic) int displayCount;                    //@synthesize displayCount=_displayCount - In the implementation block
@property (nonatomic,retain) NSDate * displayDate;                //@synthesize displayDate=_displayDate - In the implementation block
-(void)setDisplayReason:(unsigned)arg1 ;
-(unsigned)displayReason;
-(int)displayCount;
-(void)setDisplayCount:(int)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)displayDate;
-(void)setDisplayDate:(NSDate *)arg1 ;
@end

