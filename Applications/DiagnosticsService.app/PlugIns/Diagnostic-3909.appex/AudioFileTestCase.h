/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3909.appex/Diagnostic-3909
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface AudioFileTestCase : NSObject {

	NSString* _fileName;
	NSNumber* _volume;
	NSNumber* _channel;

}

@property (nonatomic,retain) NSString * fileName;              //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,retain) NSNumber * volume;                //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSNumber * channel;               //@synthesize channel=_channel - In the implementation block
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(void)setChannel:(NSNumber *)arg1 ;
-(NSNumber *)channel;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
@end

