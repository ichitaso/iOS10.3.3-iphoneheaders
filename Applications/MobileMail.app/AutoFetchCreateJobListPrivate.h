/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:58 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSMutableDictionary;

@interface AutoFetchCreateJobListPrivate : NSObject {

	NSMutableArray* _jobList;
	NSArray* _visibleUids;
	NSArray* _accounts;
	NSMutableDictionary* _accountResponsiveness;
	char _isUserRequested;
	char _isForegroundRequest;
	char _shouldGrowFetchWindow;

}

@property (nonatomic,readonly) NSArray * jobList;              //@synthesize jobList=_jobList - In the implementation block
-(id)initForVisibleUids:(id)arg1 accounts:(id)arg2 accountResponsiveness:(id)arg3 fetchType:(int)arg4 ;
-(NSArray *)jobList;
-(void)dealloc;
-(void)run;
@end

