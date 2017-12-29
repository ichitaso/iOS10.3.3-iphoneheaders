/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Fitness.app/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSAttributedString;

@interface _CHWorkoutDetailTableSubItem : NSObject {

	NSString* _titleString;
	NSAttributedString* _valueAttrString;
	/*^block*/id _updateBlock;

}

@property (nonatomic,copy) NSString * titleString;                            //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,copy) NSAttributedString * valueAttrString;              //@synthesize valueAttrString=_valueAttrString - In the implementation block
@property (nonatomic,copy) id updateBlock;                                    //@synthesize updateBlock=_updateBlock - In the implementation block
+(id)_emptyItem;
-(NSAttributedString *)valueAttrString;
-(void)setValueAttrString:(NSAttributedString *)arg1 ;
-(char)_fitsWidth:(float)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
@end
