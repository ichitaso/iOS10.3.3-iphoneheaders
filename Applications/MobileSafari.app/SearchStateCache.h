/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface SearchStateCache : NSObject {

	NSMapTable* _cache;

}
-(id)cachedCompletionListForTabDocument:(id)arg1 ;
-(void)cacheAcceptanceOfCompletionItem:(id)arg1 withCompletionList:(id)arg2 forTabDocument:(id)arg3 ;
-(void)removeCachedSearchStateForTabDocument:(id)arg1 ;
@end

