/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:58 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iap2d/iap2d-Structs.h>
#import <iap2d/iAP2FileTransferBase.h>

@interface iAP2FileTransferRecv : iAP2FileTransferBase

@property (nonatomic,readonly) id<iAP2FileTransferRecvDelegate> delegate; 
+(id)allocWithConnection:(id)arg1 buffID:(unsigned char)arg2 recvAsStream:(char)arg3 type:(int)arg4 typeData:(SCD_Struct_iA22*)arg5 delegate:(id)arg6 onQueue:(id)arg7 ;
+(BOOL)validBuffID:(unsigned char)arg1 ;
-(id)initWithConnection:(id)arg1 buffID:(unsigned char)arg2 recvAsStream:(char)arg3 type:(int)arg4 typeData:(SCD_Struct_iA22*)arg5 delegate:(id)arg6 onQueue:(id)arg7 ;
-(void)_handleReceivedData;
-(void)dealloc;
-(id<iAP2FileTransferRecvDelegate>)delegate;
-(iAP2FileTransfer_st*)fileXfer;
@end
