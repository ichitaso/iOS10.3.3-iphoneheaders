/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:02 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ApplicationHandle;

@interface ApplicationWorkspaceOperation : NSObject {

	ApplicationHandle* _applicationHandle;

}

@property (nonatomic,readonly) ApplicationHandle * applicationHandle;              //@synthesize applicationHandle=_applicationHandle - In the implementation block
@property (nonatomic,readonly) char blocksAppInstallation; 
-(id)initWithApplicationHandle:(id)arg1 ;
-(char)blocksAppInstallation;
-(void)runWithCompletionBlock:(/*^block*/id)arg1 ;
-(ApplicationHandle *)applicationHandle;
-(void)dealloc;
-(char)applicationIsInstalled:(id)arg1 ;
@end

