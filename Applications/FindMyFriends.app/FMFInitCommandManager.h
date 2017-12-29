/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer;

@interface FMFInitCommandManager : NSObject {

	char _initInProgress;
	NSTimer* _initializeTimer;
	int _numOfServerErrorRetriesDone;
	int _numOfAuthErrorRetriesDone;

}

@property (assign,nonatomic) char initInProgress;                          //@synthesize initInProgress=_initInProgress - In the implementation block
@property (nonatomic,retain) NSTimer * initializeTimer;                    //@synthesize initializeTimer=_initializeTimer - In the implementation block
@property (assign,nonatomic) int numOfServerErrorRetriesDone;              //@synthesize numOfServerErrorRetriesDone=_numOfServerErrorRetriesDone - In the implementation block
@property (assign,nonatomic) int numOfAuthErrorRetriesDone;                //@synthesize numOfAuthErrorRetriesDone=_numOfAuthErrorRetriesDone - In the implementation block
-(void)_initDidSucceed:(id)arg1 ;
-(void)_initWillFail:(id)arg1 ;
-(void)_initDidFail:(id)arg1 ;
-(void)setNumOfServerErrorRetriesDone:(int)arg1 ;
-(char)initInProgress;
-(void)setInitInProgress:(char)arg1 ;
-(NSTimer *)initializeTimer;
-(void)setNumOfAuthErrorRetriesDone:(int)arg1 ;
-(int)numOfServerErrorRetriesDone;
-(void)sendInitCommand;
-(void)setInitializeTimer:(NSTimer *)arg1 ;
-(void)scheduleInit;
-(int)numOfAuthErrorRetriesDone;
-(id)init;
-(void)dealloc;
@end

