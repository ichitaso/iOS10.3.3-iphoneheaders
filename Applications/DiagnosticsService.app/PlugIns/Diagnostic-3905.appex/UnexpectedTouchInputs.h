/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/DiagnosticsService.app/PlugIns/Diagnostic-3905.appex/Diagnostic-3905
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Diagnostic-2386/DKDiagnosticInputs.h>

@class NSArray, UIColor, NSString;

@interface UnexpectedTouchInputs : NSObject <DKDiagnosticInputs> {

	char _connectedToPowerRequired;
	NSArray* _touchMap;
	UIColor* _fadeColor;
	UIColor* _touchColor;
	int _minutesToRun;

}

@property (nonatomic,retain) NSArray * touchMap;                         //@synthesize touchMap=_touchMap - In the implementation block
@property (nonatomic,copy) UIColor * fadeColor;                          //@synthesize fadeColor=_fadeColor - In the implementation block
@property (nonatomic,copy) UIColor * touchColor;                         //@synthesize touchColor=_touchColor - In the implementation block
@property (assign,nonatomic) int minutesToRun;                           //@synthesize minutesToRun=_minutesToRun - In the implementation block
@property (assign,nonatomic) char connectedToPowerRequired;              //@synthesize connectedToPowerRequired=_connectedToPowerRequired - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)connectedToPowerRequired;
-(NSArray *)touchMap;
-(void)setConnectedToPowerRequired:(char)arg1 ;
-(void)setTouchMap:(NSArray *)arg1 ;
-(void)setFadeColor:(UIColor *)arg1 ;
-(UIColor *)fadeColor;
-(void)setTouchColor:(UIColor *)arg1 ;
-(UIColor *)touchColor;
-(void)setMinutesToRun:(int)arg1 ;
-(int)minutesToRun;
-(char)validateAndInitializeParameters:(id)arg1 ;
@end
