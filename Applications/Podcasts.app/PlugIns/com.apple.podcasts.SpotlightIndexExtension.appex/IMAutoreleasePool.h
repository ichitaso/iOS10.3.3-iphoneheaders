/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAutoreleasePool;

@interface IMAutoreleasePool : NSObject {

	NSAutoreleasePool* _pool;
	int _count;
	int _maxCount;
	id _target;
	SEL _action;
	void* _context;

}

@property (nonatomic,readonly) int count;               //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) int maxCount;              //@synthesize maxCount=_maxCount - In the implementation block
-(void)_resetPool;
-(void)setTarget:(id)arg1 action:(SEL)arg2 context:(void*)arg3 ;
-(void)increaseCount;
-(id)init;
-(void)dealloc;
-(int)count;
-(int)maxCount;
-(void)setMaxCount:(int)arg1 ;
@end
