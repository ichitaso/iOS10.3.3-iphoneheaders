/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADFileManager : NSObject
+(id)tarGzForUrl:(id)arg1 ;
+(id)urlByRemovingComponentsBefore:(id)arg1 source:(id)arg2 inclusive:(char)arg3 ;
+(id)lsDir:(id)arg1 ;
+(id)userLibraryDirectoryForApp:(id)arg1 ;
+(id)tarGzForUrl:(id)arg1 validatesUrl:(char)arg2 ;
+(id)lsDir:(id)arg1 sorted:(char)arg2 ;
+(char)isValidUrl:(id)arg1 ;
+(id)findAllItems:(id)arg1 includeDirs:(char)arg2 ;
+(id)dirForTarGz:(id)arg1 ;
+(char)copyAllFilesFromDir:(id)arg1 toDir:(id)arg2 ;
+(id)findAllfiles:(id)arg1 ;
@end

