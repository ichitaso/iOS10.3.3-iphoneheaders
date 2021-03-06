/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@protocol SVSTranscriptItemGroupDelegate;
@class NSMutableArray, NSMutableIndexSet, NSArray, NSIndexSet;

@interface SVSTranscriptItemGroup : NSObject <NSFastEnumeration> {

	NSMutableArray* _transcriptItems;
	NSMutableIndexSet* _insertionIndexes;
	char _provisional;
	char _waitsForConfirmation;
	double _presentationDelay;
	char _eligibleForPresentation;
	char _presentationDelayElapsed;
	id<SVSTranscriptItemGroupDelegate> _delegate;

}

@property (assign,setter=_setPresentationDelayElapsed:,getter=_presentationDelayElapsed,nonatomic) char presentationDelayElapsed;              //@synthesize presentationDelayElapsed=_presentationDelayElapsed - In the implementation block
@property (nonatomic,readonly) NSArray * transcriptItems; 
@property (nonatomic,readonly) NSIndexSet * insertionIndexes; 
@property (getter=isProvisional,nonatomic,readonly) char provisional;                                                                          //@synthesize provisional=_provisional - In the implementation block
@property (assign,getter=isEligibleForPresentation,nonatomic) char eligibleForPresentation;                                                    //@synthesize eligibleForPresentation=_eligibleForPresentation - In the implementation block
@property (nonatomic,readonly) char waitsForConfirmation;                                                                                      //@synthesize waitsForConfirmation=_waitsForConfirmation - In the implementation block
@property (assign,nonatomic,__weak) id<SVSTranscriptItemGroupDelegate> delegate;                                                               //@synthesize delegate=_delegate - In the implementation block
-(NSIndexSet *)insertionIndexes;
-(id)initWithTranscriptItems:(id)arg1 insertionIndexes:(id)arg2 provisional:(char)arg3 waitsForConfirmation:(char)arg4 presentationDelay:(double)arg5 ;
-(NSArray *)transcriptItems;
-(void)replaceTranscriptItem:(id)arg1 withTranscriptItem:(id)arg2 cancelPresentationDelay:(char)arg3 ;
-(void)shiftInsertionIndexesStartingAtIndex:(unsigned)arg1 by:(int)arg2 ;
-(char)isEligibleForPresentation;
-(char)waitsForConfirmation;
-(void)_setPresentationDelayElapsed:(char)arg1 ;
-(void)_presentationEligibilityConditionDidChange;
-(char)_presentationDelayElapsed;
-(unsigned)insertionIndexForTranscriptItem:(id)arg1 ;
-(void)setEligibleForPresentation:(char)arg1 ;
-(void)removeElementAtIndex:(int)arg1 ;
-(id)init;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_SV1*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)setDelegate:(id<SVSTranscriptItemGroupDelegate>)arg1 ;
-(id)description;
-(id<SVSTranscriptItemGroupDelegate>)delegate;
-(char)isProvisional;
@end

