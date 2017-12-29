/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, BKSDisplayRenderOverlayDescriptor, NSURL;

@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding> {

	NSString* _requester;
	NSString* _reason;
	int _restartType;
	float _delay;
	char _wantsPersistentSnapshot;
	BKSDisplayRenderOverlayDescriptor* _customOverlayDescriptor;
	NSURL* _applicationLaunchURL;

}

@property (nonatomic,copy) NSString * requester;                                                     //@synthesize requester=_requester - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int restartType;                                                        //@synthesize restartType=_restartType - In the implementation block
@property (assign,nonatomic) float delay;                                                            //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) char wantsPersistentSnapshot;                                           //@synthesize wantsPersistentSnapshot=_wantsPersistentSnapshot - In the implementation block
@property (nonatomic,copy) BKSDisplayRenderOverlayDescriptor * customOverlayDescriptor;              //@synthesize customOverlayDescriptor=_customOverlayDescriptor - In the implementation block
@property (nonatomic,copy) NSURL * applicationLaunchURL;                                             //@synthesize applicationLaunchURL=_applicationLaunchURL - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRequester:(id)arg1 reason:(id)arg2 ;
-(void)setWantsPersistentSnapshot:(char)arg1 ;
-(void)setCustomOverlayDescriptor:(BKSDisplayRenderOverlayDescriptor *)arg1 ;
-(char)wantsPersistentSnapshot;
-(BKSDisplayRenderOverlayDescriptor *)customOverlayDescriptor;
-(NSURL *)applicationLaunchURL;
-(void)setApplicationLaunchURL:(NSURL *)arg1 ;
-(id)init;
-(NSString *)description;
-(float)delay;
-(void)setDelay:(float)arg1 ;
-(NSString *)reason;
-(NSString *)requester;
-(void)setRequester:(NSString *)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(int)restartType;
-(void)setRestartType:(int)arg1 ;
@end

