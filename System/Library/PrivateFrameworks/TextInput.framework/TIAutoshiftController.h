/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TITextInputTraits;

@interface TIAutoshiftController : NSObject {

	char _enabled;
	TITextInputTraits* _textInputTraits;

}

@property (nonatomic,readonly) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (assign,getter=isEnabled,nonatomic) char enabled;                      //@synthesize enabled=_enabled - In the implementation block
-(id)initWithTextInputTraits:(id)arg1 ;
-(unsigned)actionForDocumentState:(id)arg1 inputMangerState:(id)arg2 ;
-(char)isSelectionAtSentenceAutoshiftBoundaryWithDocumentState:(id)arg1 inputManagerState:(id)arg2 ;
-(void)dealloc;
-(void)setEnabled:(char)arg1 ;
-(char)isEnabled;
-(TITextInputTraits *)textInputTraits;
@end

