/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:37:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/DuetActivityScheduler/Scheduler/DuetActivitySchedulerDaemon.bundle/DuetActivitySchedulerDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DASDataStore <NSObject>
@required
-(void)saveActivities:(id)arg1;
-(void)deleteActivity:(id)arg1;
-(void)saveGroup:(id)arg1;
-(void)saveActivity:(id)arg1;
-(void)loadAllGroups:(id)arg1;
-(void)deleteOldActivities;
-(void)deleteActivitiesIfRequired;
-(void)loadPendingLaunchTasks:(id)arg1;

@end

