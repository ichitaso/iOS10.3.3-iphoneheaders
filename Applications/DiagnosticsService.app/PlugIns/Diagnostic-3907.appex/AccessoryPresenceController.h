/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3907.appex/Diagnostic-3907
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsKit/DKDiagnosticController.h>

@class AccessoryPresenceInputs;

@interface AccessoryPresenceController : DKDiagnosticController {

	AccessoryPresenceInputs* _inputs;

}

@property (nonatomic,retain) AccessoryPresenceInputs * inputs;              //@synthesize inputs=_inputs - In the implementation block
-(char)isDeviceDocked;
-(char)isHeadsetPluggedIn;
-(void)start;
-(void)setInputs:(AccessoryPresenceInputs *)arg1 ;
-(AccessoryPresenceInputs *)inputs;
-(void)setupWithInputs:(id)arg1 responder:(id)arg2 ;
@end

