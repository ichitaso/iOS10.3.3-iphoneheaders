/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/CheckerBoard.app/CheckerBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CheckerBoard/CheckerBoard-Structs.h>
#import <Preferences/PSEditableTableCell.h>

@interface CBEditableTableCell : PSEditableTableCell {

	int _characterLimit;

}

@property (assign,nonatomic) int characterLimit;              //@synthesize characterLimit=_characterLimit - In the implementation block
-(char)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(int)characterLimit;
-(void)setCharacterLimit:(int)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end
