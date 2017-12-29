/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Home.app/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HFHomeBuilder, HFUserItemProvider, HFOutgoingHomeInvitationItemProvider;

@interface HOUserItemManager : HFItemManager {

	HFHomeBuilder* _homeBuilder;
	HFUserItemProvider* _userItemProvider;
	HFOutgoingHomeInvitationItemProvider* _outgoingInvitationItemProvider;

}

@property (nonatomic,retain) HFHomeBuilder * homeBuilder;                                                        //@synthesize homeBuilder=_homeBuilder - In the implementation block
@property (nonatomic,retain) HFUserItemProvider * userItemProvider;                                              //@synthesize userItemProvider=_userItemProvider - In the implementation block
@property (nonatomic,retain) HFOutgoingHomeInvitationItemProvider * outgoingInvitationItemProvider;              //@synthesize outgoingInvitationItemProvider=_outgoingInvitationItemProvider - In the implementation block
-(HFHomeBuilder *)homeBuilder;
-(void)setHomeBuilder:(HFHomeBuilder *)arg1 ;
-(id)initWithHomeBuilder:(id)arg1 delegate:(id)arg2 ;
-(void)setUserItemProvider:(HFUserItemProvider *)arg1 ;
-(void)setOutgoingInvitationItemProvider:(HFOutgoingHomeInvitationItemProvider *)arg1 ;
-(HFOutgoingHomeInvitationItemProvider *)outgoingInvitationItemProvider;
-(HFUserItemProvider *)userItemProvider;
-(unsigned)_numberOfSections;
-(id)_identifierForSection:(unsigned)arg1 ;
-(id)_homeFuture;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(/*^block*/id)_comparatorForSectionIdentifier:(id)arg1 ;
-(void)_createItemProvidersWithHome:(id)arg1 ;
-(id)_itemProviders;
-(id)_styleForItem:(id)arg1 ;
-(id)_sectionIdentifierForItem:(id)arg1 ;
@end
