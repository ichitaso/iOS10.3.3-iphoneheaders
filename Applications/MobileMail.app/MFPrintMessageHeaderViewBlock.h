/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/MFMessageHeaderViewBlock.h>

@class UILayoutGuide, UIStackView, _MFFormEntry, NSMutableArray, NSDateFormatter;

@interface MFPrintMessageHeaderViewBlock : MFMessageHeaderViewBlock {

	UILayoutGuide* _firstColumn;
	UIStackView* _secondColumn;
	_MFFormEntry* _from;
	_MFFormEntry* _subject;
	_MFFormEntry* _date;
	_MFFormEntry* _to;
	_MFFormEntry* _cc;
	_MFFormEntry* _bcc;
	NSMutableArray* _entries;
	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) UILayoutGuide * firstColumn;                  //@synthesize firstColumn=_firstColumn - In the implementation block
@property (nonatomic,retain) UIStackView * secondColumn;                   //@synthesize secondColumn=_secondColumn - In the implementation block
@property (nonatomic,retain) _MFFormEntry * from;                          //@synthesize from=_from - In the implementation block
@property (nonatomic,retain) _MFFormEntry * subject;                       //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) _MFFormEntry * date;                          //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) _MFFormEntry * to;                            //@synthesize to=_to - In the implementation block
@property (nonatomic,retain) _MFFormEntry * cc;                            //@synthesize cc=_cc - In the implementation block
@property (nonatomic,retain) _MFFormEntry * bcc;                           //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,retain) NSMutableArray * entries;                     //@synthesize entries=_entries - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(void)createPrimaryViews;
-(void)initializePrimaryLayoutConstraints;
-(void)displayMessage:(id)arg1 ;
-(void)_createFormEntries;
-(int)_textAlignmentForLayoutDirection;
-(id)_attributedStringForAddressList:(id)arg1 ;
-(id)_attributedStringForAddress:(id)arg1 appendComma:(char)arg2 ;
-(UIStackView *)secondColumn;
-(void)setSecondColumn:(UIStackView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(_MFFormEntry *)date;
-(NSMutableArray *)entries;
-(void)setEntries:(NSMutableArray *)arg1 ;
-(void)setDate:(_MFFormEntry *)arg1 ;
-(_MFFormEntry *)subject;
-(void)setSubject:(_MFFormEntry *)arg1 ;
-(void)setFrom:(_MFFormEntry *)arg1 ;
-(void)setTo:(_MFFormEntry *)arg1 ;
-(_MFFormEntry *)from;
-(_MFFormEntry *)to;
-(void)_updateVisibility;
-(void)setCc:(_MFFormEntry *)arg1 ;
-(_MFFormEntry *)bcc;
-(void)setBcc:(_MFFormEntry *)arg1 ;
-(_MFFormEntry *)cc;
-(NSDateFormatter *)dateFormatter;
-(UILayoutGuide *)firstColumn;
-(void)setFirstColumn:(UILayoutGuide *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
@end

