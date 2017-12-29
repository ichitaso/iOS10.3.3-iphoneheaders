/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <MobileMail/MailboxUtilsClient.h>

@class MFMailboxUid, MailAccount, NSArray;

@interface MailboxListViewControllerBase : UITableViewController <MailboxUtilsClient> {

	MFMailboxUid* _selectedMailbox;
	id _mailboxSelectionTarget;
	MailAccount* _account;
	NSArray* _sortedMailboxes;
	unsigned _loadingMailboxes : 1;
	char _preventNextScrollbarFlash;
	char _promoteFavorites;
	char _interactiveTransitionWasCancelled;

}

@property (nonatomic,retain) MailAccount * account;                       //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) MFMailboxUid * selectedMailbox;              //@synthesize selectedMailbox=_selectedMailbox - In the implementation block
+(int)tableViewStyle;
-(void)preventNextScrollbarFlash;
-(void)viewWillFirstAppear:(char)arg1 ;
-(void)viewWillReappear:(char)arg1 ;
-(void)setViewingContext:(id)arg1 ;
-(void)didSelectMailbox:(id)arg1 changed:(char)arg2 animated:(char)arg3 ;
-(id)indexPathForMailbox:(id)arg1 ;
-(void)_loadMailboxes:(char)arg1 ;
-(void)_loadMailboxes;
-(id)mailboxForIndexPath:(id)arg1 ;
-(void)setSelectedMailbox:(id)arg1 animated:(char)arg2 ;
-(id)indexPathForSelection;
-(id)_ntsMailboxesForAccount:(id)arg1 ;
-(void)setSelectedMailbox:(MFMailboxUid *)arg1 ;
-(float)_defaultRowHeight;
-(void)mailboxListingChanged:(id)arg1 ;
-(void)setSelectedMailbox:(id)arg1 forceChange:(char)arg2 animated:(char)arg3 ;
-(void)_loadExtraMailboxes;
-(void)_loadMailboxesForcibly:(id)arg1 ;
-(void)_loadMailboxesAfterMailboxListingChanged;
-(void)_popToMailboxListViewController;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(MFMailboxUid *)selectedMailbox;
-(MailAccount *)account;
-(void)setAccount:(MailAccount *)arg1 ;
-(void)shouldReloadMailboxesWithOutbox:(id)arg1 ;
-(char)shouldHideInbox;
-(char)shouldHideNotesForAccount:(id)arg1 ;
@end

