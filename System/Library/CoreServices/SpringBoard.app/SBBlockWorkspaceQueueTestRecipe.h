/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBTestRecipe.h>

@class NSTimer, FBWorkspaceEventQueueLock, NSString;

@interface SBBlockWorkspaceQueueTestRecipe : NSObject <SBTestRecipe> {

	NSTimer* _blockTimer;
	FBWorkspaceEventQueueLock* _queueLock;

}

@property (nonatomic,retain) NSTimer * blockTimer;                               //@synthesize blockTimer=_blockTimer - In the implementation block
@property (nonatomic,retain) FBWorkspaceEventQueueLock * queueLock;              //@synthesize queueLock=_queueLock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(NSTimer *)blockTimer;
-(void)setBlockTimer:(NSTimer *)arg1 ;
-(FBWorkspaceEventQueueLock *)queueLock;
-(void)setQueueLock:(FBWorkspaceEventQueueLock *)arg1 ;
-(void)blockTimerDidFire:(id)arg1 ;
@end

