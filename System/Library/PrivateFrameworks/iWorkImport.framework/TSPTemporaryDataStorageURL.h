/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:38 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSURL.h>

@class TSUTemporaryDirectory;

@interface TSPTemporaryDataStorageURL : NSURL {

	TSUTemporaryDirectory* _parentDirectory;

}

@property (nonatomic,readonly) TSUTemporaryDirectory * parentDirectory;              //@synthesize parentDirectory=_parentDirectory - In the implementation block
-(id)initFileURLWithPath:(id)arg1 parentDirectory:(id)arg2 ;
-(TSUTemporaryDirectory *)parentDirectory;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

