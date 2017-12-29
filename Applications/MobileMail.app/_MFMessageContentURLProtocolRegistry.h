/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock, NSMapTable;

@interface _MFMessageContentURLProtocolRegistry : NSObject {

	NSLock* _lock;
	NSMapTable* _storage;

}

@property (nonatomic,readonly) NSMapTable * storage;              //@synthesize storage=_storage - In the implementation block
+(id)sharedRegistry;
-(id)URLForLoadingContext:(id)arg1 scheme:(id)arg2 ;
-(id)loadingContextForURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSMapTable *)storage;
@end

