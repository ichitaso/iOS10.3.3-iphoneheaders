/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol STSPickerSelectionDelegate <NSObject>
@required
-(void)requestExpandedPresentationStyleForBrowser:(id)arg1 completion:(/*^block*/id)arg2;
-(void)browser:(id)arg1 didSelectProviderLink:(id)arg2;
-(void)browser:(id)arg1 didSelectResult:(id)arg2 withPayload:(id)arg3;
-(void)browserSearchBarButtonClicked:(id)arg1;
-(void)browserSuggestionButtonClicked:(id)arg1 suggestion:(id)arg2;
-(char)browserIsPresentedFullscreen:(id)arg1;
-(void)browserDidTapLogo:(id)arg1;

@end

