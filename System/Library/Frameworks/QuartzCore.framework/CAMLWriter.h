/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class NSURL;

@interface CAMLWriter : NSObject {

	CAMLWriterPriv* _priv;

}

@property (retain) NSURL * baseURL; 
@property (__weak) id<CAMLWriterDelegate> delegate; 
+(id)writerWithData:(id)arg1 ;
-(void)setElementAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)beginPropertyElement:(id)arg1 ;
-(id)URLStringForResource:(id)arg1 ;
-(void)setElementContent:(id)arg1 ;
-(void)beginElement:(unsigned)arg1 ;
-(void)encodeObject:(id)arg1 conditionally:(char)arg2 ;
-(void)_writeElementTree:(CAMLWriterElement*)arg1 ;
-(void)setDelegate:(id<CAMLWriterDelegate>)arg1 ;
-(void)dealloc;
-(id<CAMLWriterDelegate>)delegate;
-(id)initWithData:(id)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(void)endElement;
@end

