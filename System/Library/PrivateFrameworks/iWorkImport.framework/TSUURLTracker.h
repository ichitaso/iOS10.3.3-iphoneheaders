/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:37 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUURLTrackerFilePresenter, NSURL;

@interface TSUURLTracker : NSObject {

	TSUURLTrackerFilePresenter* _filePresenter;

}

@property (copy,readonly) NSURL * URL; 
-(id)init;
-(void)dealloc;
-(id)description;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(void)stop;
-(NSURL *)URL;
-(void)start;
-(id)initWithURL:(id)arg1 ;
@end

