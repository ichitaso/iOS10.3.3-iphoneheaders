/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NSLocale : NSObject <NSCopying, NSSecureCoding>

@property (readonly) int _calendarDirection; 
+(id)_preferredTemperatureUnit;
+(void)registerPreferredLanguage:(id)arg1 usage:(unsigned)arg2 confidence:(float)arg3 ;
+(void)_setPreferredTemperatureUnit:(id)arg1 ;
+(id)systemLanguages;
+(id)mostPreferredLanguageOf:(id)arg1 forUsage:(unsigned)arg2 options:(unsigned)arg3 ;
+(id)mostPreferredLanguageOf:(id)arg1 withPreferredLanguages:(id)arg2 forUsage:(unsigned)arg3 options:(unsigned)arg4 ;
+(void)setPreferredLanguages:(id)arg1 ;
+(id)autoupdatingCurrentLocale;
+(id)commonISOCurrencyCodes;
+(id)localeIdentifierFromWindowsLocaleCode:(unsigned)arg1 ;
+(unsigned)windowsLocaleCodeFromLocaleIdentifier:(id)arg1 ;
+(unsigned)lineDirectionForLanguage:(id)arg1 ;
+(id)internetServicesRegion;
+(id)ISOLanguageCodes;
+(id)allocWithZone:(NSZone*)arg1 ;
+(char)supportsSecureCoding;
+(id)localeWithLocaleIdentifier:(id)arg1 ;
+(id)currentLocale;
+(id)systemLocale;
+(id)localeIdentifierFromComponents:(id)arg1 ;
+(id)preferredLanguages;
+(unsigned)characterDirectionForLanguage:(id)arg1 ;
+(id)canonicalLanguageIdentifierFromString:(id)arg1 ;
+(id)componentsFromLocaleIdentifier:(id)arg1 ;
+(id)ISOCountryCodes;
+(id)availableLocaleIdentifiers;
+(id)canonicalLocaleIdentifierFromString:(id)arg1 ;
+(id)ISOCurrencyCodes;
-(int)_calendarDirection;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(Class)classForCoder;
-(id)_copyDisplayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)localizedStringForLocaleIdentifier:(id)arg1 ;
-(id)localizedStringForLanguageCode:(id)arg1 ;
-(id)localizedStringForCountryCode:(id)arg1 ;
-(id)scriptCode;
-(id)localizedStringForScriptCode:(id)arg1 ;
-(id)variantCode;
-(id)localizedStringForVariantCode:(id)arg1 ;
-(id)localizedStringForCalendarIdentifier:(id)arg1 ;
-(id)collationIdentifier;
-(id)localizedStringForCollationIdentifier:(id)arg1 ;
-(id)localizedStringForDecimalSeparator:(id)arg1 ;
-(id)localizedStringForGroupingSeparator:(id)arg1 ;
-(id)localizedStringForCurrencySymbol:(id)arg1 ;
-(id)localizedStringForCurrencyCode:(id)arg1 ;
-(id)collatorIdentifier;
-(id)localizedStringForCollatorIdentifier:(id)arg1 ;
-(id)localizedStringForQuotationBeginDelimiter:(id)arg1 ;
-(id)localizedStringForQuotationEndDelimiter:(id)arg1 ;
-(id)alternateQuotationBeginDelimiter;
-(id)localizedStringForAlternateQuotationBeginDelimiter:(id)arg1 ;
-(id)alternateQuotationEndDelimiter;
-(id)localizedStringForAlternateQuotationEndDelimiter:(id)arg1 ;
-(id)exemplarCharacterSet;
-(unsigned long)_cfTypeID;
-(id)_prefs;
-(unsigned char)_nullLocale;
-(void)_setNullLocale;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)objectForKey:(id)arg1 ;
-(id)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(id)localeIdentifier;
-(id)calendarIdentifier;
-(id)displayNameForKey:(id)arg1 value:(id)arg2 ;
-(id)languageCode;
-(id)countryCode;
-(id)currencyCode;
-(id)currencySymbol;
-(id)decimalSeparator;
-(id)groupingSeparator;
-(char)usesMetricSystem;
-(id)quotationBeginDelimiter;
-(id)quotationEndDelimiter;
@end

