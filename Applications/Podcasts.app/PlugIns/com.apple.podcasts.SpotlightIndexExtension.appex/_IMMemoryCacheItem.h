/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _IMMemoryCacheItem : NSObject {

	id _item;
	unsigned _cost;
	unsigned long long _timeStamp;
	NSString* _keyString;
	char _conformsToProtocol;

}

@property (nonatomic,retain) id item;                                   //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) unsigned cost;                             //@synthesize cost=_cost - In the implementation block
@property (assign,nonatomic) unsigned long long timeStamp;              //@synthesize timeStamp=_timeStamp - In the implementation block
@property (nonatomic,copy) NSString * key;                              //@synthesize keyString=_keyString - In the implementation block
@property (assign,nonatomic) char conformsToProtocol;                   //@synthesize conformsToProtocol=_conformsToProtocol - In the implementation block
+(id)cacheItemWithItem:(id)arg1 key:(id)arg2 cost:(unsigned)arg3 ;
-(void)setCost:(unsigned)arg1 ;
-(void)setConformsToProtocol:(char)arg1 ;
-(char)conformsToProtocol;
-(NSString *)key;
-(void)dealloc;
-(id)description;
-(id)item;
-(void)setItem:(id)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)timeStamp;
-(void)setTimeStamp:(unsigned long long)arg1 ;
-(unsigned)cost;
@end

