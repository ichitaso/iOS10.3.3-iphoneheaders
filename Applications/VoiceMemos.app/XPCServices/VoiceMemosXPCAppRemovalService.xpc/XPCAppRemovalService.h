/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/VoiceMemos.app/XPCServices/VoiceMemosXPCAppRemovalService.xpc/VoiceMemosXPCAppRemovalService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/LSAppRemovalServiceProtocol.h>

@class NSString;

@interface XPCAppRemovalService : NSObject <LSAppRemovalServiceProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_deleteAllIconsFiles;
-(id)_deleteMobileAssets;
-(void)removeAppWithReply:(/*^block*/id)arg1 ;
@end

