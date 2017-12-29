/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:34 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSString, NSMutableSet;

@interface _CUIExternalLinkRendition : CUIThemeRendition {

	NSString* _assetPackIdentifier;
	NSMutableSet* _externalTags;

}
-(id)externalTags;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(int)arg3 ;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)assetPackIdentifier;
-(void)dealloc;
@end

