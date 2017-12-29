/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMGridViewUpdateItem : NSObject {

	int _action;
	unsigned _index;

}

@property (assign,nonatomic) int action;                  //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) unsigned index;              //@synthesize index=_index - In the implementation block
-(int)compareIndexes:(id)arg1 ;
-(id)initWithAction:(int)arg1 forIndex:(unsigned)arg2 ;
-(int)inverseCompareIndexes:(id)arg1 ;
-(int)action;
-(void)setAction:(int)arg1 ;
-(unsigned)index;
-(void)setIndex:(unsigned)arg1 ;
@end

