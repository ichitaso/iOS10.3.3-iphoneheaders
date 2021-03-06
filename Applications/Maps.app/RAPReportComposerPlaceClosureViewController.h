/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPReportTableViewController.h>
#import <Maps/RAPInstrumentableTarget.h>

@class RAPReportComposerPlaceClosureIssueSection, RAPTablePart, RAPReportComposerCommentPart, RAPPlaceClosureQuestion, NSString;

@interface RAPReportComposerPlaceClosureViewController : RAPReportTableViewController <RAPInstrumentableTarget> {

	RAPReportComposerPlaceClosureIssueSection* _issue;
	RAPTablePart* _issuePart;
	RAPReportComposerCommentPart* _commentPart;
	RAPPlaceClosureQuestion* _question;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
-(int)analyticTarget;
-(id)tableParts;
-(id)initWithReport:(id)arg1 question:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

