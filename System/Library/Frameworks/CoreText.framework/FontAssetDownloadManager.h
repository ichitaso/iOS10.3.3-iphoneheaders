/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreText/CoreText-Structs.h>
@class NSMutableDictionary;

@interface FontAssetDownloadManager : NSObject {

	TCFRef<const __CFArray *>* fDescriptors;
	TCFRef<const __CFSet *>* fMandatoryAttributes;
	/*^block*/id fProgressCallbackBlock;
	NSMutableDictionary* fProgressParams;
	NSMutableDictionary* fDownloadOptions;

}
+(unsigned long)calculateDownloadSize:(id)arg1 ;
+(Class)getASAssetQueryClass;
+(char)shouldIgnoreFontAsset:(id)arg1 ;
+(char)shouldTryServer;
+(id)availableMobileAssets:(char)arg1 error:(id*)arg2 ;
+(id)extractMatchingAssetsForDescriptor:(CTFontDescriptorRef)arg1 from:(id)arg2 withFailInfo:(char*)arg3 andFontFilePaths:(id)arg4 ;
+(char)shouldRetryWithServer;
+(char)activateFontsFromAssetURL:(id)arg1 ;
+(id)enabledKeyboardLanguages;
+(id)displayNameForCurrentUser:(id)arg1 ;
+(id)availableFontAttributesArray;
-(char)callProgressCallback:(unsigned)arg1 ;
-(id)getUnmatchedDescriptors;
-(id)mobileAssetsForUnmatched:(id)arg1 andFontFilePaths:(id)arg2 ;
-(void)setProgressParam:(id)arg1 forKey:(id)arg2 ;
-(char)executeDownloadingFontAssets:(id)arg1 forDescriptors:(id)arg2 andFontFilePaths:(id)arg3 ;
-(id)doFinalMatching;
-(void)setDownloadOptionsForMobileAsset;
-(char)assetStalled:(id)arg1 ;
-(char)downloadAllowed;
-(void)setGarbageCollectionBehaviorForAsset:(id)arg1 ;
-(id)preciousFontLanguages;
-(id)initWithDescriptors:(CFArrayRef)arg1 andMandatoryAttributes:(CFSetRef)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)downloadFontAssets;
-(void)dealloc;
@end

