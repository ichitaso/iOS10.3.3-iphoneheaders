/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:12 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-4492-sshb.appex/Diagnostic-4492-sshb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SSHBHIDManagerDelegate
@optional
-(void)deviceWasAdded:(IOHIDDeviceRef)arg1;
-(void)deviceWasRemoved:(IOHIDDeviceRef)arg1;
-(void)hidReportCallback:(IOHIDDeviceRef)arg1 result:(int)arg2 type:(int)arg3 reportID:(unsigned)arg4 report:(char*)arg5 reportLength:(long)arg6;

@end

