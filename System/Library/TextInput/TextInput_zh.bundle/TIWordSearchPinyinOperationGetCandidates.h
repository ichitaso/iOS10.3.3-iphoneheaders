/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIWordSearchOperationGetCandidates.h>

@class NSArray;

@interface TIWordSearchPinyinOperationGetCandidates : TIWordSearchOperationGetCandidates {

	NSArray* _initiallyHiddenCandidates;
	unsigned _selectedHiddenCandidateIndex;

}

@property (nonatomic,retain,readonly) NSArray * initiallyHiddenCandidates;              //@synthesize initiallyHiddenCandidates=_initiallyHiddenCandidates - In the implementation block
@property (nonatomic,readonly) unsigned selectedHiddenCandidateIndex;                   //@synthesize selectedHiddenCandidateIndex=_selectedHiddenCandidateIndex - In the implementation block
-(void)dealloc;
-(unsigned)selectedHiddenCandidateIndex;
-(NSArray *)initiallyHiddenCandidates;
-(id)initWithWordSearch:(id)arg1 inputString:(id)arg2 initiallyHiddenCandidates:(id)arg3 selectedHiddenCandidateIndex:(unsigned)arg4 predictionEnabled:(char)arg5 reanalysisMode:(char)arg6 target:(id)arg7 action:(SEL)arg8 geometryModelData:(id)arg9 ;
@end
