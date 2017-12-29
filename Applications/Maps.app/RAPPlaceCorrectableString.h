/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:37 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPPlaceCorrectableItem.h>

@class NSString, NSMapTable;

@interface RAPPlaceCorrectableString : NSObject <RAPPlaceCorrectableItem> {

	NSMapTable* _observers;
	int _kind;
	NSString* _value;
	NSString* _originalValue;
	NSString* _localizedTitle;

}

@property (nonatomic,copy) NSString * value;                             //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSString * originalValue;                 //@synthesize originalValue=_originalValue - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle;                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (getter=isEdited,nonatomic,readonly) char edited; 
@property (nonatomic,readonly) int kind;                                 //@synthesize kind=_kind - In the implementation block
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)revertCorrections;
-(void)_invokeChangeHandlers;
-(id)initWithKind:(int)arg1 originalValue:(id)arg2 ;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSString *)localizedTitle;
-(int)kind;
-(NSString *)originalValue;
-(void)_setLocalizedTitle:(id)arg1 ;
-(char)isEdited;
@end

