/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIPreferencesController.h>

@class NSXPCConnection, NSString;

@interface TIPreferencesControllerClient : TIPreferencesController {

	NSXPCConnection* _connection;
	char _writeable;
	char _isValid;
	NSString* _machName;

}

@property (nonatomic,retain) NSString * machName;              //@synthesize machName=_machName - In the implementation block
@property (assign,nonatomic) char isValid;                     //@synthesize isValid=_isValid - In the implementation block
+(id)sharedPreferencesController;
+(id)serviceInterface;
-(void)_pushValue:(id)arg1 toPreference:(id)arg2 domain:(id)arg3 ;
-(void)performWithWriteability:(char)arg1 operations:(/*^block*/id)arg2 ;
-(void)createConnectionIfNecessary;
-(NSString *)machName;
-(void)setMachName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(char)isValid;
-(void)_disconnect;
-(void)forwardInvocation:(id)arg1 ;
-(void)updateInputModes:(id)arg1 ;
-(void)setIsValid:(char)arg1 ;
@end

