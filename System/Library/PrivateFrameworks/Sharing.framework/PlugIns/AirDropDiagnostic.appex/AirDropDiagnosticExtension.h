/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:33 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/PlugIns/AirDropDiagnostic.appex/AirDropDiagnostic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEExtensionProvider.h>

@class NSMutableArray;

@interface AirDropDiagnosticExtension : DEExtensionProvider {

	NSMutableArray* _logsArray;

}

@property (nonatomic,retain) NSMutableArray * logsArray;              //@synthesize logsArray=_logsArray - In the implementation block
-(NSMutableArray *)logsArray;
-(void)setLogsArray:(NSMutableArray *)arg1 ;
-(id)attachmentsForParameters:(id)arg1 ;
-(id)attachmentList;
@end
