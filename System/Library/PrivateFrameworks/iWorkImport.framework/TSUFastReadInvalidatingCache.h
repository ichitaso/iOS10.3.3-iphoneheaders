/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:36 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCondition;

@interface TSUFastReadInvalidatingCache : NSObject {

	/*^block*/id mGenerator;
	A@ mValue;
	Aq mReaderCount;
	A@ mToDispose;
	char mReentrant;
	NSCondition* mCondition;
	char mIsGenerating;

}
-(void)invalidate;
-(void)dealloc;
-(id)value;
-(void)p_setValue:(id)arg1 ;
-(id)initForReentrant:(char)arg1 withGenerator:(/*^block*/id)arg2 ;
@end
