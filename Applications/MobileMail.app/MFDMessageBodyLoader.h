/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFXPCServer.h>
#import <MobileMail/MSDMessageBodyLoaderProtocol.h>

@class NSString;

@interface MFDMessageBodyLoader : MFXPCServer <MSDMessageBodyLoaderProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(void)loadBodyOfMessageWithID:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

