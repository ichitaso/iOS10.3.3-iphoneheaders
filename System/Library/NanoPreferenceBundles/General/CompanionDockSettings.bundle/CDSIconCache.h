/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/NanoPreferenceBundles/General/CompanionDockSettings.bundle/CompanionDockSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface CDSIconCache : NSObject {

	NSCache* _cache;

}
+(id)sharedIconCache;
-(id)_loadMMappedImageWithName:(id)arg1 ;
-(void)_writeMMappedImage:(id)arg1 withName:(id)arg2 ;
-(id)iconForName:(id)arg1 fallBackToPersistentStoreIfNecessary:(char)arg2 ;
-(void)setIcon:(id)arg1 forName:(id)arg2 ;
-(id)init;
-(id)_path;
-(id)_pathForIconName:(id)arg1 ;
@end

