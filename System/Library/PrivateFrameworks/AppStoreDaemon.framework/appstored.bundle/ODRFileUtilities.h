/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:16 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ODRFileUtilities : NSObject
+(id)sharedInstance;
-(id)_realPathForURL:(id)arg1 ifChildOfURL:(id)arg2 ;
-(char)_itemExistsAtURL:(id)arg1 ;
-(char)validateDownloadAtURL:(id)arg1 error:(id*)arg2 ;
-(char)_traverseDirectory:(id)arg1 error:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(char)arg2 ;
-(id)_realPathWhatExistsInPath:(id)arg1 ;
@end

