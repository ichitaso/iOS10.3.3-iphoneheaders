/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3737.appex/Diagnostic-3737
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticsSupport/DSLogLine.h>

@class NSString;

@interface DABackupRestoreLogLine : DSLogLine

@property (nonatomic,readonly) NSString * eventSubType; 
@property (nonatomic,readonly) char didSucceed; 
@property (nonatomic,readonly) int backupCode; 
@property (nonatomic,readonly) int backupRestoreEventType; 
-(int)backupCode;
-(int)backupRestoreEventType;
-(NSString *)eventSubType;
-(char)didSucceed;
@end
