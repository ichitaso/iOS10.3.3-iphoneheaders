/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:08 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostics/DADevice.h>
#import <Diagnostics/DAIDSMessageReceiving.h>

@class NSString;

@interface DAWatchProxy : DADevice <DAIDSMessageReceiving> {

	 nrDevice;
	 pairedDeviceRegistry;
	 historyEntries;
	 currentTestSuiteName;
	 connection.storage;

}

@property (readonly,nonatomic) NSString * serialNumber; 
@property (readonly,nonatomic) NSString * productClass; 
@property (readonly,nonatomic) NSString * marketingName; 
@property (readonly,nonatomic) NSString * imei; 
@property (readonly,nonatomic) NSString * enclosure; 
@property (readonly,nonatomic) NSString * caseSize; 
@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) int hash; 
-(void)deviceImageView:(/*^block*/id)arg1 ;
-(id)IMEI;
-(NSString *)enclosure;
-(NSString *)caseSize;
-(void)deviceBecameActiveWithNotification:(id)arg1 ;
-(void)deviceBecameInactiveWithNotification:(id)arg1 ;
-(void)receiveMessage:(id)arg1 data:(id)arg2 expectsResponse:(char)arg3 response:(/*^block*/id)arg4 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(int)hash;
-(NSString *)description;
-(void)start;
-(void)end;
-(NSString *)marketingName;
-(void)send:(id)arg1 ;
-(NSString *)serialNumber;
-(void)idle;
-(NSString *)productClass;
-(id)initWithDevice:(id)arg1 ;
-(id)history;
@end

