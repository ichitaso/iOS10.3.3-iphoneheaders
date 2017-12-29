/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:01 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIContentSizeCategoryPreference.h>

@interface _UIContentSizeCategoryPreferenceSystem : UIContentSizeCategoryPreference {

	char _observingNotification;
	char _didCheckForPreferredContentSizeCategoryOverride;
	char _applicationOverridesPreferredContentSizeCategory;

}
-(void)dealloc;
-(void)checkForChanges;
-(void)_updateContentSizeCategory:(id)arg1 postingNotification:(char)arg2 ;
-(id)initAsSystem;
-(void)_readAndObservePreferences;
-(void)setPreferredContentSizeCategory:(id)arg1 ;
-(void)_updateContentSizeCategoryFromUserDefaultsPostingNotification:(char)arg1 ;
-(void)_beginObservingPreferredContentSizeChangedNotification;
-(void)_endObservingPreferredContentSizeChangedNotification;
-(void)_postContentSizeCategoryDidChangeNotification;
@end

