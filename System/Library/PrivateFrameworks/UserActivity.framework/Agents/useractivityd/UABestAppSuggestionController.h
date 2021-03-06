/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:52 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/UACornerActionManagerHandler.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSString;

@interface UABestAppSuggestionController : UACornerActionManagerHandler <NSXPCListenerDelegate> {

	NSXPCListener* _bestAppsListener;

}

@property (retain) NSXPCListener * bestAppsListener;                //@synthesize bestAppsListener=_bestAppsListener - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithManager:(id)arg1 name:(id)arg2 ;
-(void)setBestAppsListener:(NSXPCListener *)arg1 ;
-(NSXPCListener *)bestAppsListener;
-(char)suspend;
-(char)resume;
-(char)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(char)terminate;
@end

