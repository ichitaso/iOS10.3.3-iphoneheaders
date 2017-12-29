/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HomeUIService.app/HomeUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUIService/HSSetupIdentifiableAccessoryViewController.h>
#import <libobjc.A.dylib/HFItemManagerDelegate.h>

@protocol HSSetupStepDelegate;
@class NSString;

@interface HSSetupAppPunchOutViewController : HSSetupIdentifiableAccessoryViewController <HFItemManagerDelegate> {

	id<HSSetupStepDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDiscoveredAccessoryItem:(id)arg1 configurationStep:(unsigned)arg2 ;
-(int)setupState;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)commitChanges;
-(id)allCellClasses;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
@end

