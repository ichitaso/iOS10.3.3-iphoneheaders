/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyiPhone.app/FindMyiPhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FindMyiPhone/FMIPDeviceCommand.h>

@class NSString, NSArray;

@interface PlaySoundCommand : FMIPDeviceCommand {

	char _didUserConfirmSafetyWarning;
	NSString* _subject;
	NSArray* _channels;
	NSString* _userAction;

}

@property (nonatomic,copy) NSString * subject;                              //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSArray * channels;                              //@synthesize channels=_channels - In the implementation block
@property (assign,nonatomic) char didUserConfirmSafetyWarning;              //@synthesize didUserConfirmSafetyWarning=_didUserConfirmSafetyWarning - In the implementation block
@property (assign,nonatomic) NSString * userAction;                         //@synthesize userAction=_userAction - In the implementation block
-(char)didUserConfirmSafetyWarning;
-(void)setDidUserConfirmSafetyWarning:(char)arg1 ;
-(id)path;
-(NSArray *)channels;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setChannels:(NSArray *)arg1 ;
-(id)jsonBodyDictionary;
-(id)initWithDevice:(id)arg1 ;
-(NSString *)userAction;
-(void)setUserAction:(NSString *)arg1 ;
@end
