/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileNotes/MobileNotes-Structs.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString;

@interface ICPastingHelperTextView : UITextView <UITextViewDelegate> {

	NSString* _attemptedReplacementText;

}

@property (nonatomic,retain) NSString * attemptedReplacementText;              //@synthesize attemptedReplacementText=_attemptedReplacementText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)stringToBePasted:(id)arg1 sender:(id)arg2 destinationTextView:(id)arg3 ;
-(void)setAttemptedReplacementText:(NSString *)arg1 ;
-(NSString *)attemptedReplacementText;
-(id)init;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
@end

