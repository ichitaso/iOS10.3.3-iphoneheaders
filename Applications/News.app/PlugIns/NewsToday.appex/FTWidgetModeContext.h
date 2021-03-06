/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FTHeadlineResultsSource;


@protocol FTWidgetModeContext <NSObject>
@property (nonatomic,readonly) FTHeadlineResultsSource * headlineResultsSource; 
@property (nonatomic,readonly) id<FTWidgetEventTracker> widgetEventTracker; 
@property (nonatomic,readonly) char supportsEventTracking; 
@property (nonatomic,copy,readonly) NSObject*<FTNoStoriesContentDescriptor> noStoriesContentDescriptor; 
@property (nonatomic,copy,readonly) NSObject*<FTNoStoriesActionURLAnnotator> noStoriesActionURLAnnotator; 
@required
-(id)initWithDesiredThumbnailSizePreset:(unsigned)arg1 desiredSourceNameImageSizePreset:(unsigned)arg2 privateDataStorage:(id)arg3 contentContext:(id)arg4 documentsDirectory:(id)arg5 widgetIsForeground:(char)arg6;
-(id)actionURLWithSelectedHeadline:(id)arg1 headlineSections:(id)arg2 sourceConfigurationIdentifier:(id)arg3;
-(FTHeadlineResultsSource *)headlineResultsSource;
-(id<FTWidgetEventTracker>)widgetEventTracker;
-(char)supportsEventTracking;
-(NSObject*<FTNoStoriesContentDescriptor>)noStoriesContentDescriptor;
-(NSObject*<FTNoStoriesActionURLAnnotator>)noStoriesActionURLAnnotator;
-(id)init;

@end

