/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/UploadSessionDelegate.h>

@class NSMutableArray, NSString;

@interface UploadManager : NSObject <UploadSessionDelegate> {

	NSMutableArray* _uploadSessions;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)uploadFiles:(id)arg1 toRadar:(id)arg2 identifier:(id)arg3 urgency:(int)arg4 extraHTTPHeaders:(id)arg5 ;
-(void)uploadFiles:(id)arg1 toURL:(id)arg2 toRadar:(id)arg3 identifier:(id)arg4 urgency:(int)arg5 extraHTTPHeaders:(id)arg6 ;
-(void)uploadSessionCompleted:(id)arg1 ;
-(void)uploadSessionFailed:(id)arg1 ;
-(void)uploadFiles:(id)arg1 to:(id)arg2 identifier:(id)arg3 urgency:(int)arg4 extraHTTPHeaders:(id)arg5 ;
@end

