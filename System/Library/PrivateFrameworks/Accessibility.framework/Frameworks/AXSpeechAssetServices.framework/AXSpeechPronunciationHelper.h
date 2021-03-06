/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:07 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpeechAssetServices/AXUIClientDelegate.h>

@class NSString;

@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate> {

	char _inSession;
	/*^block*/id _resultCallback;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(float)audioLevel;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned)arg3 error:(id*)arg4 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(id)_speechAssetUpdaterClient;
-(char)supportsPronunciationSessions;
-(void)startPronunciationSession:(id)arg1 resultCallback:(/*^block*/id)arg2 ;
-(void)stopPronunciationSession;
-(void)cancelPronunciationSession;
@end

