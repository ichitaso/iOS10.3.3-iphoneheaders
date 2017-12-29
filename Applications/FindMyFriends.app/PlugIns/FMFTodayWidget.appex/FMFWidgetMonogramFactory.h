/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/PlugIns/FMFTodayWidget.appex/FMFTodayWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface FMFWidgetMonogramFactory : NSObject {

	NSMutableDictionary* _heightToMonogrammerCache;

}

@property (nonatomic,retain) NSMutableDictionary * heightToMonogrammerCache;              //@synthesize heightToMonogrammerCache=_heightToMonogrammerCache - In the implementation block
+(id)sharedInstance;
-(id)contactForHandle:(id)arg1 keysToFetch:(id)arg2 ;
-(id)monogramForHandle:(id)arg1 height:(id)arg2 ;
-(id)_monogramForHandle:(id)arg1 height:(id)arg2 ;
-(id)monogrammerForHeight:(id)arg1 ;
-(id)_contactForHandle:(id)arg1 ;
-(id)_contactWithImagePreferred:(id)arg1 ;
-(NSMutableDictionary *)heightToMonogrammerCache;
-(void)setHeightToMonogrammerCache:(NSMutableDictionary *)arg1 ;
@end

