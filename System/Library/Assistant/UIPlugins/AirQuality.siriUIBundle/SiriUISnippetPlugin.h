/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/AirQuality.siriUIBundle/AirQuality
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriUISnippetPlugin <NSObject>
@optional
-(void)setOrientationDelegate:(id)arg1;
-(id)viewControllerForSnippet:(id)arg1;
-(char)listItem:(id)arg1 isEqualToListItem:(id)arg2;
-(char)listItem:(id)arg1 isPreferredOverListItem:(id)arg2;
-(id)viewControllerForSnippet:(id)arg1 error:(id*)arg2;
-(id)viewControllerForAceObject:(id)arg1;
-(id)filteredDisambiguationListItems:(id)arg1;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2;
-(id)speakableNamespaceProviderForAceObject:(id)arg1;

@end

