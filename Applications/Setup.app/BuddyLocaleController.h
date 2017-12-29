/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:35 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Setup.app/Setup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Setup/BuddyTableViewController.h>
#import <Setup/BuddyController.h>

@protocol BuddyControllerDelegate;
@class NSMutableArray, NSString, BFFLocaleDataSource;

@interface BuddyLocaleController : BuddyTableViewController <BuddyController> {

	char _fakeMode;
	NSMutableArray* _fakeViews;
	float _savedScrollPoint;
	id<BuddyControllerDelegate> _delegate;
	NSString* _language;
	NSString* _selectedLanguage;
	BFFLocaleDataSource* _localeDataSource;

}

@property (nonatomic,retain) BFFLocaleDataSource * localeDataSource;                   //@synthesize localeDataSource=_localeDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<BuddyControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * language;                                        //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * selectedLanguage;                                //@synthesize selectedLanguage=_selectedLanguage - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)localeScreenshotCachePath:(char)arg1 tag:(id)arg2 ;
+(char)controllerNeedsToRun;
-(void)controllerWasPopped;
-(id)initInFakeMode:(char)arg1 ;
-(NSString *)selectedLanguage;
-(void)takeScreenshots;
-(void)switchToRealMode;
-(void)setSelectedLanguage:(NSString *)arg1 ;
-(char)useBottomEdgeInsetForTableView;
-(char)useScreenHeader;
-(char)useScreenFooter;
-(char)restoreScreenshot:(id)arg1 ;
-(BFFLocaleDataSource *)localeDataSource;
-(id)countryAtIndexPath:(id)arg1 ;
-(void)selectCountry:(id)arg1 ;
-(char)takeScreenshot:(id)arg1 tag:(id)arg2 ;
-(void)setLocaleDataSource:(BFFLocaleDataSource *)arg1 ;
-(id)init;
-(void)setDelegate:(id<BuddyControllerDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id<BuddyControllerDelegate>)delegate;
-(void)loadView;
-(void)updateHeaderView;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)titleText;
-(char)isTitleAlignedByLastBaseline;
@end
