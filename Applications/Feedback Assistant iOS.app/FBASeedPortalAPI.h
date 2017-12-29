/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBAHTTPClient, NSManagedObjectContext, NSURL;

@interface FBASeedPortalAPI : NSObject {

	FBAHTTPClient* _httpClient;
	NSManagedObjectContext* _managedObjectContext;
	FBAHTTPClient* _backgroundClient;
	int _environment;
	NSURL* _seedPortalURL;
	NSURL* _feedbackURL;

}

@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) FBAHTTPClient * httpClient;                                 //@synthesize httpClient=_httpClient - In the implementation block
@property (retain) FBAHTTPClient * backgroundClient;                           //@synthesize backgroundClient=_backgroundClient - In the implementation block
@property (assign) int environment;                                            //@synthesize environment=_environment - In the implementation block
@property (readonly) NSURL * seedPortalURL;                                    //@synthesize seedPortalURL=_seedPortalURL - In the implementation block
@property (readonly) NSURL * feedbackURL;                                      //@synthesize feedbackURL=_feedbackURL - In the implementation block
-(NSURL *)seedPortalURL;
-(id)initWithEnvironment:(int)arg1 managedObjectContext:(id)arg2 ;
-(void)updateProjectsIncludingiOSOnly:(char)arg1 withSuccess:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)updateBugFormWithID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)updateProjectDetailsWithID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)createFormResponseForBugFormID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)updateFormResponseWithID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)deleteFormResponseWithID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)saveAnswersForFormResponseWithID:(id)arg1 answers:(id)arg2 success:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)markCompleteForFormResponseWithID:(id)arg1 bugFormID:(id)arg2 withFiles:(char)arg3 uploadStory:(id)arg4 success:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)getFilerTokenForEntity:(unsigned)arg1 withID:(id)arg2 success:(/*^block*/id)arg3 error:(/*^block*/id)arg4 ;
-(void)getOngoingUploadTasks:(/*^block*/id)arg1 ;
-(id)beginFileUpload:(id)arg1 toFilerWithToken:(id)arg2 inBackground:(char)arg3 ;
-(void)createUnsolicitedFollowupForFormResponseWithID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)sendFollowupResponses:(id)arg1 attributes:(unsigned)arg2 forFollowupID:(id)arg3 formResponseID:(id)arg4 success:(/*^block*/id)arg5 error:(/*^block*/id)arg6 ;
-(void)updateAnnouncementWithID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)acknowledgeAnnouncementWithID:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)seedPortalLoginWithDeviceToken:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(void)seedPortalLoginWithDSCookie:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(id)loginWithDSURL;
-(id)loginWithTokenURL;
-(id)projectsURLIncludingClosed:(char)arg1 includingPublic:(char)arg2 includingiOSOnly:(char)arg3 ;
-(id)projectDetailsURLForID:(id)arg1 ;
-(id)bugFormURLForID:(id)arg1 ;
-(id)formResponseURLForID:(id)arg1 ;
-(id)createResponseURLForBugFormID:(id)arg1 ;
-(id)formResponsePutAnswersURLForID:(id)arg1 ;
-(id)updateAnswerURLForQuestionID:(id)arg1 answerID:(id)arg2 ;
-(id)formResponseUpdateURLForID:(id)arg1 bugFormID:(id)arg2 ;
-(id)unsolicitedFollowupResponseURLForFormResponseID:(id)arg1 ;
-(id)createFollowupResponseURLForFormResponseID:(id)arg1 followupID:(id)arg2 ;
-(id)announcementURLForID:(id)arg1 ;
-(id)announcementAcknowledgementURL;
-(id)formResponseTokenURL;
-(id)filerURL;
-(FBAHTTPClient *)backgroundClient;
-(id)heartbeatURL;
-(void)updateAnswerForQuestionID:(id)arg1 withAnswerID:(id)arg2 body:(id)arg3 success:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
-(void)performHeartbeatWithSuccess:(/*^block*/id)arg1 error:(/*^block*/id)arg2 ;
-(void)setBackgroundClient:(FBAHTTPClient *)arg1 ;
-(int)environment;
-(void)setEnvironment:(int)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(FBAHTTPClient *)httpClient;
-(void)setHttpClient:(FBAHTTPClient *)arg1 ;
-(NSURL *)feedbackURL;
@end

