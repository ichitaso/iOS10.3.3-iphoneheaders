/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TPDialerKeypadDelegate <NSObject>
@optional
-(void)phonePad:(id)arg1 appendString:(id)arg2;
-(void)phonePad:(id)arg1 keyDown:(char)arg2;
-(void)phonePad:(id)arg1 keyUp:(char)arg2;
-(void)phonePadWillBeginSounds:(id)arg1;
-(void)phonePadDidEndSounds:(id)arg1;
-(void)phonePad:(id)arg1 replaceLastDigitWithString:(id)arg2;
-(void)phonePadDeleteLastDigit:(id)arg1;
-(void)phonePad:(id)arg1 dialerCharacterButtonWasHeld:(unsigned)arg2;

@end

