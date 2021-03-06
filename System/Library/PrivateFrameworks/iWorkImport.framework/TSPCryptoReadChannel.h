/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:39 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel, OS_dispatch_data;
@class SFUCryptoKey, NSArray, NSObject, NSString;

@interface TSPCryptoReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;
	SFUCryptoKey* _decryptionKey;
	NSArray* _blockInfos;
	NSObject*<OS_dispatch_data> _holdData;
	char* _iv;
	unsigned long _ivRead;
	CCCryptorRef _cryptor;
	unsigned long _initialBytesIgnored;
	unsigned long _remainingBlockSize;
	unsigned _nextBlockIndex;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 decryptionKey:(id)arg2 blockInfos:(id)arg3 ;
-(void)_readBlocksWithHandler:(/*^block*/id)arg1 ;
-(void)_resetCryptor;
-(id)init;
-(void)dealloc;
-(void)close;
@end

