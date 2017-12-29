/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyiPhone/FMIPDeviceCommand.h>

@class NSString;

@interface ValidatePasswordCommand : FMIPDeviceCommand {

	NSString* _auth;
	int _validatePasswordContext;

}

@property (nonatomic,copy) NSString * auth;                            //@synthesize auth=_auth - In the implementation block
@property (assign,nonatomic) int validatePasswordContext;              //@synthesize validatePasswordContext=_validatePasswordContext - In the implementation block
-(void)setValidatePasswordContext:(int)arg1 ;
-(int)validatePasswordContext;
-(id)path;
-(void)setAuth:(NSString *)arg1 ;
-(NSString *)auth;
-(id)jsonBodyDictionary;
@end

