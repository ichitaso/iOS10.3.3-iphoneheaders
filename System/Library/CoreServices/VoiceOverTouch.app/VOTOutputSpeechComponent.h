/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:02 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <vot/vot-Structs.h>
#import <vot/VOTOutputComponent.h>
#import <libobjc.A.dylib/TTSSpeechSynthesizerDelegate.h>

@class SCRCThread, TTSSpeechSynthesizer, AXIndexMap, NSString, NSDictionary, NSMutableDictionary, NSArray, SCRCTargetSelectorTimer;

@interface VOTOutputSpeechComponent : VOTOutputComponent <TTSSpeechSynthesizerDelegate> {

	SCRCThread* _speechThread;
	TTSSpeechSynthesizer* _synthesizer;
	AXIndexMap* _letterPunctuationTable;
	AXIndexMap* _selectedLanguageLetterPunctuationTable;
	AXIndexMap* _wordPunctuationTable;
	AXIndexMap* _selectedLanguageWordPunctuationTable;
	AXIndexMap* _specialPunctionTable;
	NSString* _spokenLanguage;
	NSString* _languageToSynthesizer;
	NSString* _stringToCaptionPanel;
	NSDictionary* _languageExceptions;
	char _isSpeaking;
	char _userStopped;
	char _isPaused;
	char _isVolumeCapped;
	float _rawVolume;
	NSMutableDictionary* _speechStatistics;
	NSDictionary* _emoticonReplacements;
	double _lastTimeSpeechStarted;
	AXIndexMap* _currentActionVariants;
	id _currentRequest;
	NSArray* _userSubstitutions;
	NSArray* _transientSubstitutions;
	SCRCTargetSelectorTimer* _stopSpeakingAfterLongPauseTimer;
	unsigned _lastSetOptions;

}

@property (nonatomic,readonly) char isSpeaking;                     //@synthesize isSpeaking=_isSpeaking - In the implementation block
@property (nonatomic,readonly) char isPaused;                       //@synthesize isPaused=_isPaused - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_setOverrideLocale:(id)arg1 ;
-(void)preprocessAction:(id)arg1 ;
-(char)stringIsInSupportedCharacters:(id)arg1 ;
-(void)_setVolume:(id)arg1 ;
-(void)updateAudioSessionProperties:(id)arg1 ;
-(void)stopSpeakingAtBoundary:(int)arg1 allRequests:(char)arg2 ;
-(id)pauseStringForType:(int)arg1 overrideLanguage:(id)arg2 ;
-(void)_handlePerformAction:(id)arg1 ;
-(void)_updateAudioSessionProperties;
-(void)setShouldOutputToHearingAid:(char)arg1 ;
-(void)_audioSessionWasInterrupted;
-(char)_usingAllChannels;
-(void)_updateChannelLayout;
-(void)_adjustSpeechThreadPriority;
-(void)_initializeSynthesizer;
-(void)_initializePunctuationData;
-(void)_selectedLanguageChanged:(id)arg1 ;
-(void)__selectedLanguageChanged;
-(void)_stopSpeakingAfterLongPause:(id)arg1 ;
-(void)_loadSpecialPunctuation;
-(void)_loadPunctuationTable:(id)arg1 withLevel:(int)arg2 language:(id)arg3 ;
-(void)_saveSpeechStats;
-(void)_setVoice:(id)arg1 ;
-(void)_handleStopSpeaking:(id)arg1 ;
-(void)_handlePauseSpeaking:(id)arg1 ;
-(void)_handleContinueSpeaking:(id)arg1 ;
-(id)_localeSpecificURLsForLanguageCode:(id)arg1 ;
-(URegularExpressionRef)_localeSpecificURLRegexForLanguageCode:(id)arg1 ;
-(id)expectedVoiceIdentifier:(id)arg1 ;
-(id)pauseStringForType:(int)arg1 voiceIdentifier:(id)arg2 ;
-(char)_stringMatchesSpecialCases:(id)arg1 forSymbol:(id)arg2 ranges:(id*)arg3 langaugeCode:(id)arg4 ;
-(char)_currentLocaleUsesSpaceAsSeparator;
-(id)currentLetterPunctuationTable;
-(void)_applyTelephoneFormatting:(id)arg1 withRanges:(id)arg2 languageCode:(id)arg3 voiceIdentifier:(id)arg4 ;
-(id)_literalStringMarkupForString:(id)arg1 languageCode:(id)arg2 ;
-(id)_stringForNormalText:(id)arg1 action:(id)arg2 allowPausingAtBoundaries:(char)arg3 ignoreLeadingCommas:(char)arg4 languageCode:(id)arg5 ;
-(void)_appendLiteralCharacterString:(id)arg1 toString:(id)arg2 hasPhoneContext:(char)arg3 hasMathContext:(char)arg4 action:(id)arg5 languageCode:(id)arg6 punctuationTableLanguageUsed:(char*)arg7 ;
-(id)_stringForLiteralText:(id)arg1 action:(id)arg2 languageCode:(id)arg3 allowChangingLanguageForPunctuation:(char)arg4 ;
-(id)currentWordPuncutationTable;
-(char)_characterSearchesForSingularForms:(unsigned short)arg1 ;
-(id)_parseNumberInString:(id)arg1 beforeCharacterAtIndex:(int)arg2 ;
-(id)_replacePunctuation:(id)arg1 level:(int)arg2 hasMathContext:(char)arg3 hasPhoneContext:(char)arg4 isText:(char)arg5 replaceCommas:(char)arg6 languageCode:(id)arg7 speakPunctuationCounts:(char)arg8 ;
-(char)_makeSubstitution:(id)arg1 withString:(id)arg2 punctuationLevel:(int)arg3 ;
-(id)_secureTextDescription:(id)arg1 ;
-(void)_speakAllDigits:(id)arg1 ;
-(void)_replaceUserSubstitutions:(id)arg1 action:(id)arg2 ;
-(void)_replaceEmoticonsWithText:(id)arg1 ;
-(void)_replacePunctuation:(id)arg1 withAction:(id)arg2 replaceCommas:(char)arg3 languageCode:(id)arg4 ;
-(void)_formatIPAddress:(id)arg1 voiceIdentifier:(id)arg2 ;
-(void)_formatEthernetMacAddress:(id)arg1 voiceIdentifier:(id)arg2 ;
-(void)_formatDetectedDates:(id)arg1 voiceIdentifier:(id)arg2 ;
-(void)_formatJapaneseYen:(id)arg1 ;
-(void)_formatExplicitTimeDuration:(id)arg1 isMMSS:(char)arg2 languageCode:(id)arg3 ;
-(void)_formatTimeDuration:(id)arg1 didMatch:(char*)arg2 ;
-(void)_formatTelephoneNumber:(id)arg1 languageCode:(id)arg2 voiceIdentifier:(id)arg3 ;
-(void)_applyTextualWorkarounds:(id)arg1 ;
-(void)_insertEmoji:(id)arg1 languageCode:(id)arg2 action:(id)arg3 voiceIdentifier:(id)arg4 ;
-(void)_insertLongerPausesForSymbol:(id)arg1 withText:(id)arg2 allowPausingAtBoundaries:(char)arg3 onlyApplyWhenFollowedBySpace:(char)arg4 languageCode:(id)arg5 voiceIdentifier:(id)arg6 ;
-(void)_removeRunsOfNewLines:(id)arg1 ;
-(void)_configureSynthesizerWithPhonemeSubstitutionsFromAction:(id)arg1 ;
-(void)_speakAsLiteralText:(id)arg1 languageCode:(id)arg2 ;
-(void)_speakAsPhoneticText:(id)arg1 ;
-(void)_speakAsMixOfLiteralAndNormalText:(id)arg1 withLiteralRanges:(id)arg2 languageCode:(id)arg3 ;
-(void)_speakAsNormalText:(id)arg1 languageCode:(id)arg2 ;
-(void)_notifyDidFinishSpeakingWithFakeRequestForEvent:(id)arg1 ;
-(id)_preferenceLanguageForLanguage:(id)arg1 selectedLanguage:(id)arg2 ;
-(void)_updateActionWithCanonicalMappings:(id)arg1 ;
-(void)_handleAlternatePronunciation:(id)arg1 voiceIdentifier:(id)arg2 language:(id)arg3 ;
-(void)_capVolumeForLanguage:(id)arg1 ;
-(void)_didStartSpeakingAction:(id)arg1 ;
-(void)_handleWillSpeakRangeForCaptions:(id)arg1 voice:(id)arg2 range:(id)arg3 ;
-(void)_updateVoiceOverCaptionPanel:(id)arg1 characterRange:(NSRange)arg2 withLanguage:(id)arg3 voice:(id)arg4 ;
-(void)_didFinishSpeaking:(id)arg1 ;
-(void)_uncapVolume;
-(void)_replaceEmbeddedTTSCommands:(id)arg1 ;
-(void)_formatATVStyleMediaDurations:(id)arg1 ;
-(id)replacePunctuation:(id)arg1 level:(int)arg2 replaceCommas:(char)arg3 languageCode:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(void)handleEvent:(id)arg1 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(char)isPaused;
-(double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6 ;
-(double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4 ;
-(char)isSpeaking;
-(void)pauseSpeakingAtBoundary:(int)arg1 ;
-(void)stopSpeakingAtBoundary:(int)arg1 ;
-(void)continueSpeaking;
-(void)setVoice:(id)arg1 ;
-(void)audioSessionWasInterrupted:(id)arg1 ;
-(void)_setRate:(id)arg1 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(char)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(NSRange)arg2 forRequest:(id)arg3 ;
@end
