/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/FTWidgetModeContext.h>

@protocol FTWidgetEventTracker, FTNoStoriesContentDescriptor, FTNoStoriesActionURLAnnotator;
@class FTHeadlineResultsSource, NSObject, NSString;

@interface FTReloadAnimationDemoModeContext : NSObject <FTWidgetModeContext> {

	char _supportsEventTracking;
	FTHeadlineResultsSource* _headlineResultsSource;
	id<FTWidgetEventTracker> _widgetEventTracker;
	NSObject*<FTNoStoriesContentDescriptor> _noStoriesContentDescriptor;
	NSObject*<FTNoStoriesActionURLAnnotator> _noStoriesActionURLAnnotator;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FTHeadlineResultsSource * headlineResultsSource;                                        //@synthesize headlineResultsSource=_headlineResultsSource - In the implementation block
@property (nonatomic,readonly) id<FTWidgetEventTracker> widgetEventTracker;                                            //@synthesize widgetEventTracker=_widgetEventTracker - In the implementation block
@property (nonatomic,readonly) char supportsEventTracking;                                                             //@synthesize supportsEventTracking=_supportsEventTracking - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<FTNoStoriesContentDescriptor> noStoriesContentDescriptor;                //@synthesize noStoriesContentDescriptor=_noStoriesContentDescriptor - In the implementation block
@property (nonatomic,copy,readonly) NSObject*<FTNoStoriesActionURLAnnotator> noStoriesActionURLAnnotator;              //@synthesize noStoriesActionURLAnnotator=_noStoriesActionURLAnnotator - In the implementation block
-(id)initWithDesiredThumbnailSizePreset:(unsigned)arg1 desiredSourceNameImageSizePreset:(unsigned)arg2 privateDataStorage:(id)arg3 contentContext:(id)arg4 documentsDirectory:(id)arg5 widgetIsForeground:(char)arg6 ;
-(id)actionURLWithSelectedHeadline:(id)arg1 headlineSections:(id)arg2 sourceConfigurationIdentifier:(id)arg3 ;
-(FTHeadlineResultsSource *)headlineResultsSource;
-(id<FTWidgetEventTracker>)widgetEventTracker;
-(char)supportsEventTracking;
-(NSObject*<FTNoStoriesContentDescriptor>)noStoriesContentDescriptor;
-(NSObject*<FTNoStoriesActionURLAnnotator>)noStoriesActionURLAnnotator;
-(id)init;
@end

