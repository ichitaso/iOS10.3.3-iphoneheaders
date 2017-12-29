/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <MobilePhone/PHRecentCallDetailsViewDelegate.h>

@class CHRecentCall, PHRecentCallDetailsView, NSDictionary, NSString;

@interface MPRecentsContactHeaderViewController : UIViewController <PHRecentCallDetailsViewDelegate> {

	CHRecentCall* _recentCall;
	PHRecentCallDetailsView* _detailsView;
	NSDictionary* _ttyConversations;

}

@property (nonatomic,retain) PHRecentCallDetailsView * detailsView;              //@synthesize detailsView=_detailsView - In the implementation block
@property (nonatomic,retain) NSDictionary * ttyConversations;                    //@synthesize ttyConversations=_ttyConversations - In the implementation block
@property (nonatomic,retain) CHRecentCall * recentCall;                          //@synthesize recentCall=_recentCall - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadTTYConversations;
-(void)loadLayoutConstraints;
-(void)setTtyConversations:(NSDictionary *)arg1 ;
-(NSDictionary *)ttyConversations;
-(id)ttyConversationForUUID:(id)arg1 ;
-(void)presentConversationForUUID:(id)arg1 ;
-(int)recentCallTTYType;
-(void)loadView;
-(CHRecentCall *)recentCall;
-(void)setRecentCall:(CHRecentCall *)arg1 ;
-(void)setDetailsView:(PHRecentCallDetailsView *)arg1 ;
-(PHRecentCallDetailsView *)detailsView;
@end

