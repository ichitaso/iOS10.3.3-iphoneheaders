/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:34 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDBGPlaceholder.h>
#import <iWorkImport/GQDNameMappable.h>

@class GQDDrawable, NSString;

@interface GQDBGObjectPlaceholder : GQDBGPlaceholder <GQDNameMappable> {

	char* mContentType;
	GQDDrawable* mDrawable;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(void)dealloc;
-(id)drawable;
@end

