/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/Health
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WDVideoURLManager : NSObject
+(char)isVideoPlaybackEnabled;
+(void)fetchURLForVideoWithIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
+(void)_fetchPreferredURLForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_parseJSON:(id)arg1 ;
+(id)preferredLanguageFromLanguages:(id)arg1 languagePreferences:(id)arg2 ;
+(id)_baseURLForIdentifier:(id)arg1 ;
+(void)_fetchRawManifestForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

