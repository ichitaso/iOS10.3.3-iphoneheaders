/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:28:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountSettings/AppleAccountSettings-Structs.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/RUITableViewRowDelegate.h>

@protocol UITableViewDelegate, AAUIFMIPHeaderDeviceInfoPageDelegate;
@class NSObject, UITableView, ACAccountStore, ACAccount, AATrustedDevice, NSDictionary, NSString;

@interface AAUIFMIPHeaderDeviceInfoPageSurrogate : NSObject <UITableViewDelegate, RUITableViewRowDelegate> {

	NSObject*<UITableViewDelegate> _remoteTableViewController;
	UITableView* _remoteTableView;
	ACAccountStore* _accountStore;
	ACAccount* _account;
	AATrustedDevice* _device;
	NSDictionary* _remoteClientInfo;
	id<AAUIFMIPHeaderDeviceInfoPageDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIFMIPHeaderDeviceInfoPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellWithTag:(int)arg1 ;
-(id)backupForUDID:(id)arg1 ;
-(id)_dateStringOfLatestBackup:(id)arg1 ;
-(void)updateDetailLabelWithBackup:(id)arg1 ;
-(void)refreshBackupDetailText:(id)arg1 ;
-(id)initWithPage:(id)arg1 device:(id)arg2 ;
-(void)setDelegate:(id<AAUIFMIPHeaderDeviceInfoPageDelegate>)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(float)tableView:(id)arg1 heightForFooterInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<AAUIFMIPHeaderDeviceInfoPageDelegate>)delegate;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
@end

