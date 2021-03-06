/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iap2d/iap2d-Structs.h>
#import <iap2d/iAP2FileTransferBase.h>

@class NSData;

@interface iAP2FileTransferSend : iAP2FileTransferBase {

	NSData* _loadedData;

}

@property (nonatomic,readonly) id<iAP2FileTransferSendDelegate> delegate; 
+(id)allocWithConnection:(id)arg1 type:(int)arg2 typeData:(SCD_Struct_iA22*)arg3 delegate:(id)arg4 onQueue:(id)arg5 timeout:(unsigned)arg6 shouldEnd:(/*^block*/id)arg7 ;
+(BOOL)validBuffID:(unsigned char)arg1 ;
-(id)initWithConnection:(id)arg1 buffID:(unsigned char)arg2 type:(int)arg3 typeData:(SCD_Struct_iA22*)arg4 delegate:(id)arg5 onQueue:(id)arg6 ;
-(BOOL)_sendFile:(id)arg1 asStream:(BOOL)arg2 ;
-(BOOL)sendFileAsStream:(id)arg1 ;
-(BOOL)sendFileAsStreamContinue:(id)arg1 final:(BOOL)arg2 ;
-(BOOL)setupFile:(id)arg1 ;
-(BOOL)sendFile;
-(void)_handleDataSent;
-(void)dealloc;
-(id)description;
-(id<iAP2FileTransferSendDelegate>)delegate;
-(void)cleanup;
-(BOOL)sendFile:(id)arg1 ;
@end

