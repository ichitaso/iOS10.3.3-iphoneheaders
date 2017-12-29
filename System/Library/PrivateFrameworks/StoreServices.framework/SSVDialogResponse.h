/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSArray, NSString;

@interface SSVDialogResponse : NSObject <NSCopying, SSXPCCoding> {

	int _selectedButtonIndex;
	NSArray* _textFieldValues;

}

@property (assign,nonatomic) int selectedButtonIndex;               //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (nonatomic,copy) NSArray * textFieldValues;               //@synthesize textFieldValues=_textFieldValues - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedButtonIndex:(int)arg1 ;
-(void)setTextFieldValues:(NSArray *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(int)selectedButtonIndex;
-(NSArray *)textFieldValues;
@end
