/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:16 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIApplicationExtensionActivity.h>

@class TabDocument;

@interface AddToNewsUIActivity : UIApplicationExtensionActivity {

	TabDocument* _tabDocument;

}

@property (nonatomic,retain) TabDocument * tabDocument;              //@synthesize tabDocument=_tabDocument - In the implementation block
+(id)activityWithTabDocument:(id)arg1 error:(id*)arg2 ;
+(int)activityCategory;
-(TabDocument *)tabDocument;
-(id)initWithApplicationExtension:(id)arg1 tabDocument:(id)arg2 ;
-(void)setTabDocument:(TabDocument *)arg1 ;
-(id)init;
-(char)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(id)_beforeActivity;
@end
