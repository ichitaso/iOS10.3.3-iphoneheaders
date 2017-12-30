/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:46 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DiagnosticsServiceInterface
@required
-(void)snapshotWithSignature:(id)arg1 duration:(unsigned)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4;
-(void)snapshotWithSignature:(id)arg1 duration:(unsigned)arg2 event:(id)arg3 payload:(id)arg4 reply:(/*^block*/id)arg5;
-(void)snapshotWithSignature:(id)arg1 duration:(unsigned)arg2 events:(id)arg3 payload:(id)arg4 reply:(/*^block*/id)arg5;
-(void)startSessionWithSignature:(id)arg1 duration:(unsigned)arg2 event:(id)arg3 payload:(id)arg4 reply:(/*^block*/id)arg5;
-(void)startSessionWithSignature:(id)arg1 duration:(unsigned)arg2 events:(id)arg3 payload:(id)arg4 reply:(/*^block*/id)arg5;
-(void)startSessionWithSignature:(id)arg1 duration:(unsigned)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addToSession:(id)arg1 event:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addToSession:(id)arg1 events:(id)arg2 payload:(id)arg3 reply:(/*^block*/id)arg4;
-(void)addSignatureContentForSession:(id)arg1 key:(id)arg2 content:(id)arg3 reply:(/*^block*/id)arg4;
-(void)startLogCollectionForSession:(id)arg1 signature:(id)arg2 duration:(unsigned)arg3 reply:(/*^block*/id)arg4;
-(void)endLogCollectionForSession:(id)arg1 signature:(id)arg2 reply:(/*^block*/id)arg3;
-(void)endSession:(id)arg1;
-(void)cancelSession:(id)arg1;
-(void)getDiagnosticPayloadsForSignatures:(id)arg1 reply:(/*^block*/id)arg2;
-(void)getSessionStatisticsWithReply:(/*^block*/id)arg1;
-(void)resetDiagnosticCaseStorageWithReply:(/*^block*/id)arg1;
-(void)resetDiagnosticCaseUsageWithReply:(/*^block*/id)arg1;
-(void)resetAllWithReply:(/*^block*/id)arg1;

@end
