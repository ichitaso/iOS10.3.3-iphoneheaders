/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary;

@interface MFMessageViewControllerReuseQueue : NSObject {

	NSMutableOrderedSet* _keyOrdering;
	NSMutableDictionary* _messageViewControllers;
	unsigned _generatedMessageViewControllersCount;

}

@property (nonatomic,retain) NSMutableOrderedSet * keyOrdering;                          //@synthesize keyOrdering=_keyOrdering - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * messageViewControllers;               //@synthesize messageViewControllers=_messageViewControllers - In the implementation block
@property (assign,nonatomic) unsigned generatedMessageViewControllersCount;              //@synthesize generatedMessageViewControllersCount=_generatedMessageViewControllersCount - In the implementation block
-(id)dequeueMessageViewControllerForLoadingContext:(id)arg1 ;
-(void)enqueueMessageViewController:(id)arg1 ;
-(unsigned)generatedMessageViewControllersCount;
-(NSMutableOrderedSet *)keyOrdering;
-(NSMutableDictionary *)messageViewControllers;
-(id)_dequeueMessageViewControllerForKey:(id)arg1 ;
-(id)_dequeueLeastRecentlyUsedMessageViewController;
-(void)setGeneratedMessageViewControllersCount:(unsigned)arg1 ;
-(void)_evictLeastRecentlyUsedMessageViewControllers;
-(void)setKeyOrdering:(NSMutableOrderedSet *)arg1 ;
-(void)setMessageViewControllers:(NSMutableDictionary *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(void)drain;
@end

