/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSHashTable, RAPReport, NSString;

@interface RAPQuestion : NSObject {

	NSMapTable* _observers;
	NSHashTable* _children;
	char _complete;
	RAPQuestion* _parentQuestion;
	RAPReport* _report;

}

@property (getter=_context,nonatomic,readonly) id<RAPAppStateProtocol> context; 
@property (getter=_isRecursivelyComplete,nonatomic,readonly) char recursivelyComplete; 
@property (nonatomic,__weak,readonly) RAPReport * report;                                           //@synthesize report=_report - In the implementation block
@property (getter=isComplete,nonatomic,readonly) char complete;                                     //@synthesize complete=_complete - In the implementation block
@property (nonatomic,__weak,readonly) RAPQuestion * parentQuestion;                                 //@synthesize parentQuestion=_parentQuestion - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
+(id)RAPTitle;
-(char)_isRecursivelyComplete;
-(id)_alternateAuxiliaryControlsRecording;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)_reportedPlace;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(id)_alternateMapViewContext;
-(char)_getDirectionsMapItemsForStart:(out id*)arg1 end:(out id*)arg2 ;
-(id)_alternatePlaceContext;
-(void)_addChildQuestion:(id)arg1 ;
-(void)_removeChildQuestion:(id)arg1 ;
-(void)_removeFromParentQuestion;
-(void)_setComplete:(char)arg1 ;
-(void)_setComplete:(char)arg1 allowInvokingDidChange:(char)arg2 ;
-(char)_isParentQuestionKindOfClass:(Class)arg1 ;
-(id)_parentQuestionOfClass:(Class)arg1 ;
-(RAPQuestion *)parentQuestion;
-(id)localizedDescription;
-(id)image;
-(void)removeObserver:(id)arg1 ;
-(id)_context;
-(NSString *)localizedTitle;
-(char)isComplete;
-(void)_didChange;
-(RAPReport *)report;
@end

