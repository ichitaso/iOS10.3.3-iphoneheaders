/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CHIconParameters : NSObject {

	char _needsWatchIcon;
	NSString* _bundleID;
	float _preferredAppStoreIconWidth;

}

@property (assign,nonatomic) char needsWatchIcon;                           //@synthesize needsWatchIcon=_needsWatchIcon - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                           //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) float preferredAppStoreIconWidth;              //@synthesize preferredAppStoreIconWidth=_preferredAppStoreIconWidth - In the implementation block
-(void)setPreferredAppStoreIconWidth:(float)arg1 ;
-(float)preferredAppStoreIconWidth;
-(char)needsWatchIcon;
-(void)setNeedsWatchIcon:(char)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
@end

