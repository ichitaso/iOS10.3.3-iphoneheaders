/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFSuggestionHandlingDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MFSuggestionHandlingDelegate;
@class NSMutableSet, EKEventStore, NSArray, NSString;

@interface MessageSuggestionSession : NSObject <MFSuggestionHandlingDelegate, NSCopying> {

	NSMutableSet* _callsToAction;
	EKEventStore* _eventStore;
	CFDictionaryRef _resultsMapping;
	id<MFSuggestionHandlingDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MFSuggestionHandlingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) EKEventStore * eventStore; 
@property (nonatomic,readonly) NSArray * callsToAction; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addCallsToAction:(id)arg1 ;
-(id)initWithCallsToAction:(id)arg1 ;
-(void)_setResult:(id)arg1 forCallToAction:(id)arg2 ;
-(id)_resultForCallToAction:(id)arg1 ;
-(void)didConfirmAction:(id)arg1 ;
-(void)didIgnoreAction:(id)arg1 ;
-(void)showConfirmationForAction:(id)arg1 sender:(id)arg2 ;
-(void)ignoreAction:(id)arg1 ;
-(void)displayMultipleCallsToAction:(id)arg1 sender:(id)arg2 ;
-(NSArray *)callsToAction;
-(void)setContact:(id)arg1 forCallToAction:(id)arg2 ;
-(void)setEvent:(id)arg1 forCallToAction:(id)arg2 ;
-(id)eventForCallToAction:(id)arg1 ;
-(id)contactForCallToAction:(id)arg1 ;
-(id)init;
-(void)setDelegate:(id<MFSuggestionHandlingDelegate>)arg1 ;
-(void)dealloc;
-(id<MFSuggestionHandlingDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(EKEventStore *)eventStore;
@end

