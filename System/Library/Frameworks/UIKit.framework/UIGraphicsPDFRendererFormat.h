/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGraphicsRendererFormat.h>

@class NSDictionary, NSURL, NSMutableData;

@interface UIGraphicsPDFRendererFormat : UIGraphicsRendererFormat {

	NSDictionary* _documentInfo;
	NSURL* _outputURL;
	NSMutableData* _pdfData;

}

@property (retain) NSURL * outputURL;                                //@synthesize outputURL=_outputURL - In the implementation block
@property (retain) NSMutableData * pdfData;                          //@synthesize pdfData=_pdfData - In the implementation block
@property (nonatomic,copy) NSDictionary * documentInfo;              //@synthesize documentInfo=_documentInfo - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)documentInfo;
-(void)setDocumentInfo:(NSDictionary *)arg1 ;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(NSMutableData *)pdfData;
-(void)setPdfData:(NSMutableData *)arg1 ;
@end

