/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@class MailboxContentViewCell;

@interface _CellStaticView : UIView {

	unsigned _lastDrawingGenerationNumber;
	unsigned _lastLayoutGenerationNumber;
	unsigned _highlighted : 1;
	char _disclosureEnabled;
	MailboxContentViewCell* _cell;
	unsigned _entryStyle;

}

@property (assign,nonatomic) MailboxContentViewCell * cell;                      //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) unsigned entryStyle;                                //@synthesize entryStyle=_entryStyle - In the implementation block
@property (assign,nonatomic) char disclosureEnabled;                             //@synthesize disclosureEnabled=_disclosureEnabled - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted; 
-(unsigned)entryStyle;
-(void)setDisclosureEnabled:(char)arg1 ;
-(void)setEntryStyle:(unsigned)arg1 ;
-(char)disclosureEnabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setNeedsDisplay;
-(void)drawRect:(CGRect)arg1 ;
-(id)description;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(MailboxContentViewCell *)cell;
-(void)setCell:(MailboxContentViewCell *)arg1 ;
@end

