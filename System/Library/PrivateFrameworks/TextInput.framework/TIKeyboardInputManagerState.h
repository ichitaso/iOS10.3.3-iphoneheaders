/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardBehaviors, TIKeyboardCandidate, NSString, TIKeyEventMap, TICharacterSetDescription;

@interface TIKeyboardInputManagerState : NSObject <NSCopying, NSSecureCoding> {

	TIKeyboardBehaviors* _keyboardBehaviors;
	SCD_Union_TI7 _mask;
	char _shouldAddModifierSymbolsToWordCharacters;
	TIKeyboardCandidate* _autocorrectionRecordForInputString;
	NSString* _wordSeparator;
	unsigned _inputCount;
	unsigned _inputIndex;
	NSString* _inputString;
	TIKeyEventMap* _keyEventMap;
	NSString* _replacementForDoubleSpace;
	NSString* _shadowTyping;
	unsigned _initialCandidateBatchCount;
	TICharacterSetDescription* _wordCharacters;
	TICharacterSetDescription* _shortcutCompletions;
	TICharacterSetDescription* _inputsPreventingAcceptSelectedCandidate;
	TICharacterSetDescription* _inputsToReject;
	TICharacterSetDescription* _terminatorsPreventingAutocorrection;
	TICharacterSetDescription* _terminatorsDeletingAutospace;
	NSString* _searchStringForMarkedText;

}

@property (assign,nonatomic) char canHandleKeyHitTest; 
@property (assign,nonatomic) char ignoresDeadKeys; 
@property (assign,nonatomic) char shouldExtendPriorWord; 
@property (assign,nonatomic) char suppliesCompletions; 
@property (assign,nonatomic) char supportsSetPhraseBoundary; 
@property (assign,nonatomic) char suppressCompletionsForFieldEditor; 
@property (assign,nonatomic) char usesAutoDeleteWord; 
@property (assign,nonatomic) char usesCandidateSelection; 
@property (assign,nonatomic) char usesAutocorrectionLists; 
@property (assign,nonatomic) char commitsAcceptedCandidate; 
@property (nonatomic,copy) NSString * replacementForDoubleSpace;                                             //@synthesize replacementForDoubleSpace=_replacementForDoubleSpace - In the implementation block
@property (nonatomic,copy) NSString * wordSeparator;                                                         //@synthesize wordSeparator=_wordSeparator - In the implementation block
@property (assign,nonatomic) unsigned initialCandidateBatchCount;                                            //@synthesize initialCandidateBatchCount=_initialCandidateBatchCount - In the implementation block
@property (nonatomic,retain) TIKeyboardBehaviors * keyboardBehaviors;                                        //@synthesize keyboardBehaviors=_keyboardBehaviors - In the implementation block
@property (assign,nonatomic) char shouldAddModifierSymbolsToWordCharacters;                                  //@synthesize shouldAddModifierSymbolsToWordCharacters=_shouldAddModifierSymbolsToWordCharacters - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * wordCharacters;                                       //@synthesize wordCharacters=_wordCharacters - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * shortcutCompletions;                                  //@synthesize shortcutCompletions=_shortcutCompletions - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * inputsPreventingAcceptSelectedCandidate;              //@synthesize inputsPreventingAcceptSelectedCandidate=_inputsPreventingAcceptSelectedCandidate - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * inputsToReject;                                       //@synthesize inputsToReject=_inputsToReject - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * terminatorsPreventingAutocorrection;                  //@synthesize terminatorsPreventingAutocorrection=_terminatorsPreventingAutocorrection - In the implementation block
@property (nonatomic,copy) TICharacterSetDescription * terminatorsDeletingAutospace;                         //@synthesize terminatorsDeletingAutospace=_terminatorsDeletingAutospace - In the implementation block
@property (nonatomic,copy) NSString * inputString;                                                           //@synthesize inputString=_inputString - In the implementation block
@property (assign,nonatomic) unsigned inputIndex;                                                            //@synthesize inputIndex=_inputIndex - In the implementation block
@property (assign,nonatomic) unsigned inputCount;                                                            //@synthesize inputCount=_inputCount - In the implementation block
@property (assign,nonatomic) char nextInputWouldStartSentence; 
@property (assign,nonatomic) char inputStringIsExemptFromChecker; 
@property (assign,nonatomic) char suppressPlaceholderCandidate; 
@property (assign,nonatomic) char supportsNumberKeySelection; 
@property (nonatomic,retain) TIKeyboardCandidate * autocorrectionRecordForInputString;                       //@synthesize autocorrectionRecordForInputString=_autocorrectionRecordForInputString - In the implementation block
@property (nonatomic,copy) NSString * shadowTyping;                                                          //@synthesize shadowTyping=_shadowTyping - In the implementation block
@property (nonatomic,copy) NSString * searchStringForMarkedText;                                             //@synthesize searchStringForMarkedText=_searchStringForMarkedText - In the implementation block
@property (nonatomic,retain) TIKeyEventMap * keyEventMap;                                                    //@synthesize keyEventMap=_keyEventMap - In the implementation block
+(char)supportsSecureCoding;
-(TICharacterSetDescription *)shortcutCompletions;
-(TICharacterSetDescription *)inputsPreventingAcceptSelectedCandidate;
-(void)setInputsPreventingAcceptSelectedCandidate:(TICharacterSetDescription *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TIKeyboardBehaviors *)keyboardBehaviors;
-(char)supportsNumberKeySelection;
-(void)setSupportsNumberKeySelection:(char)arg1 ;
-(char)usesCandidateSelection;
-(NSString *)searchStringForMarkedText;
-(char)usesAutoDeleteWord;
-(char)supportsSetPhraseBoundary;
-(void)setSearchStringForMarkedText:(NSString *)arg1 ;
-(NSString *)inputString;
-(char)shouldExtendPriorWord;
-(char)usesAutocorrectionLists;
-(char)nextInputWouldStartSentence;
-(char)suppressCompletionsForFieldEditor;
-(char)suppliesCompletions;
-(char)acceptInputString:(id)arg1 ;
-(NSString *)replacementForDoubleSpace;
-(char)shouldDeleteAutospaceBeforeTerminator:(id)arg1 ;
-(char)shouldSuppressAutocorrectionWithTerminator:(id)arg1 ;
-(char)inputStringAcceptsCurrentCandidateIfSelected:(id)arg1 ;
-(char)stringEndsWord:(id)arg1 ;
-(char)inputStringIsExemptFromChecker;
-(NSString *)wordSeparator;
-(unsigned)inputIndex;
-(NSString *)shadowTyping;
-(unsigned)inputCount;
-(char)commitsAcceptedCandidate;
-(TIKeyboardCandidate *)autocorrectionRecordForInputString;
-(unsigned)initialCandidateBatchCount;
-(char)suppressPlaceholderCandidate;
-(TIKeyEventMap *)keyEventMap;
-(char)ignoresDeadKeys;
-(char)canHandleKeyHitTest;
-(void)setUsesCandidateSelection:(char)arg1 ;
-(char)shouldAddModifierSymbolsToWordCharacters;
-(TICharacterSetDescription *)terminatorsDeletingAutospace;
-(TICharacterSetDescription *)wordCharacters;
-(void)setInputIndex:(unsigned)arg1 ;
-(TICharacterSetDescription *)terminatorsPreventingAutocorrection;
-(void)setAutocorrectionRecordForInputString:(TIKeyboardCandidate *)arg1 ;
-(void)setInputStringIsExemptFromChecker:(char)arg1 ;
-(TICharacterSetDescription *)inputsToReject;
-(void)setSuppressPlaceholderCandidate:(char)arg1 ;
-(void)setInputsToReject:(TICharacterSetDescription *)arg1 ;
-(void)setShortcutCompletions:(TICharacterSetDescription *)arg1 ;
-(void)setReplacementForDoubleSpace:(NSString *)arg1 ;
-(void)setKeyEventMap:(TIKeyEventMap *)arg1 ;
-(void)setShadowTyping:(NSString *)arg1 ;
-(void)setNextInputWouldStartSentence:(char)arg1 ;
-(void)setInputCount:(unsigned)arg1 ;
-(void)setInputString:(NSString *)arg1 ;
-(void)setKeyboardBehaviors:(TIKeyboardBehaviors *)arg1 ;
-(void)setTerminatorsDeletingAutospace:(TICharacterSetDescription *)arg1 ;
-(void)setTerminatorsPreventingAutocorrection:(TICharacterSetDescription *)arg1 ;
-(void)setWordCharacters:(TICharacterSetDescription *)arg1 ;
-(void)setShouldAddModifierSymbolsToWordCharacters:(char)arg1 ;
-(void)setWordSeparator:(NSString *)arg1 ;
-(void)setInitialCandidateBatchCount:(unsigned)arg1 ;
-(void)setCommitsAcceptedCandidate:(char)arg1 ;
-(void)setUsesAutocorrectionLists:(char)arg1 ;
-(void)setUsesAutoDeleteWord:(char)arg1 ;
-(void)setSuppressCompletionsForFieldEditor:(char)arg1 ;
-(void)setSupportsSetPhraseBoundary:(char)arg1 ;
-(void)setSuppliesCompletions:(char)arg1 ;
-(void)setShouldExtendPriorWord:(char)arg1 ;
-(void)setIgnoresDeadKeys:(char)arg1 ;
-(void)setCanHandleKeyHitTest:(char)arg1 ;
@end

