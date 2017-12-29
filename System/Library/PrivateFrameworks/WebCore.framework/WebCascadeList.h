/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface WebCascadeList : NSArray {

	WeakPtr<WebCore::FontCascade>* _font;
	int _character;
	unsigned _count;
	Vector<WTF::RetainPtr<const __CTFontDescriptor *>, 16, WTF::CrashOnOverflow, 16>* _fontDescriptors;

}
-(id)initWithFont:(const FontCascade=FontCascadeDescription=FontTaggedSettings<int>=Vector<WebCore::FontTaggedSetting<int>, 0, WTF::CrashOnOverflow, 16>=FontTaggedSetting<int>}II}}FontVariationSettingsAtomicString=String=RefPtr<WTF::StringImpl>=StringImpl}}}}fb1b1b2b1b8b1b2b7b3b2b2b2b2b2b3b2b2b2b1b1b1b3b2b1RefCountedArray<WTF::AtomicString>=AtomicString}}fb1b2b4b2b1}RefPtr<WebCore::FontCascadeFonts>=FontCascadeFonts}}WeakPtrFactory<WebCore::FontCascade>=Ref<WTF::WeakReference<WebCore::FontCascade> >=WeakReference<WebCore::FontCascade>}}}ffBb1b1}Ref)arg1 character:(int)arg2 ;
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
@end

