/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIDocumentState, TITextInputTraits, UITextInputMode;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {

	TIDocumentState* _documentState;
	TITextInputTraits* _textInputTraits;
	UITextInputMode* _documentInputMode;

}

@property (nonatomic,retain) TIDocumentState * documentState;                  //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,retain) UITextInputMode * documentInputMode;              //@synthesize documentInputMode=_documentInputMode - In the implementation block
+(char)supportsSecureCoding;
+(id)stateForKeyboardState:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(void)setDocumentInputMode:(UITextInputMode *)arg1 ;
-(TIDocumentState *)documentState;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(UITextInputMode *)documentInputMode;
-(void)createDocumentStateIfNecessary;
@end

