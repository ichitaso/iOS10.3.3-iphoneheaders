/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:30 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/WeatherAssistantUI.siriUIBundle/WeatherAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUISnippetViewController.h>
#import <AcousticId/SiriUISnippetPlugin.h>

@class WeatherAssistantForecastSnippetContentView, SAWeatherObject, NSArray, NSURL, NSString, UITapGestureRecognizer, WeatherPreferences;

@interface WeatherAssistantForecastSnippetController : SiriUISnippetViewController <SiriUISnippetPlugin> {

	WeatherAssistantForecastSnippetContentView* _containerView;
	SAWeatherObject* _weatherObject;
	NSArray* _forcasts;
	NSURL* _punchOutURL;
	char _isShowingHourly;
	char _shouldShowCurrentHeader;
	char _neverBeenUnlocked;
	NSString* _compensatedName;
	float _snippetHeight;
	UITapGestureRecognizer* _recognizer;
	UITapGestureRecognizer* _headerRecognizer;
	WeatherPreferences* _weatherPreferences;

}

@property (nonatomic,copy) NSString * compensatedName;                                                //@synthesize compensatedName=_compensatedName - In the implementation block
@property (assign,nonatomic) float snippetHeight;                                                     //@synthesize snippetHeight=_snippetHeight - In the implementation block
@property (assign,nonatomic) char isShowingHourly;                                                    //@synthesize isShowingHourly=_isShowingHourly - In the implementation block
@property (assign,nonatomic) char shouldShowCurrentHeader;                                            //@synthesize shouldShowCurrentHeader=_shouldShowCurrentHeader - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * recognizer;                                     //@synthesize recognizer=_recognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * headerRecognizer;                               //@synthesize headerRecognizer=_headerRecognizer - In the implementation block
@property (nonatomic,readonly) WeatherPreferences * weatherPreferences;                               //@synthesize weatherPreferences=_weatherPreferences - In the implementation block
@property (assign,nonatomic) char neverBeenUnlocked;                                                  //@synthesize neverBeenUnlocked=_neverBeenUnlocked - In the implementation block
@property (nonatomic,retain) WeatherAssistantForecastSnippetContentView * containerView;              //@synthesize containerView=_containerView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)weather;
-(float)snippetHeight;
-(char)openToDataProvider;
-(NSString *)compensatedName;
-(void)setIsShowingHourly:(char)arg1 ;
-(char)shouldShowCurrentHeader;
-(void)setShouldShowCurrentHeader:(char)arg1 ;
-(void)_updateLockedState;
-(void)setCompensatedName:(NSString *)arg1 ;
-(id)cityURLComponents;
-(UITapGestureRecognizer *)headerRecognizer;
-(void)setHeaderRecognizer:(UITapGestureRecognizer *)arg1 ;
-(WeatherPreferences *)weatherPreferences;
-(char)neverBeenUnlocked;
-(void)setNeverBeenUnlocked:(char)arg1 ;
-(void)setSnippetHeight:(float)arg1 ;
-(char)isShowingHourly;
-(char)_wantsFullWidthOfScreen;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(WeatherAssistantForecastSnippetContentView *)containerView;
-(void)openURL:(id)arg1 ;
-(void)loadView;
-(void)setContainerView:(WeatherAssistantForecastSnippetContentView *)arg1 ;
-(UITapGestureRecognizer *)recognizer;
-(void)setRecognizer:(UITapGestureRecognizer *)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(float)desiredHeightForWidth:(float)arg1 ;
-(float)desiredHeightForHeaderView;
-(id)viewControllerForSnippet:(id)arg1 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
-(id)twcLogoURL;
@end
