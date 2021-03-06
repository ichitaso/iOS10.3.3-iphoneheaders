/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMCloudSyncTransactionProcessing <NSObject>
@optional
-(id)keysForTransaction:(id)arg1;
-(void)transactionDidFinish:(id)arg1 success:(char)arg2 error:(id)arg3;
-(char)requiresUserOptInForTransaction:(id)arg1;

@required
-(id)versionForGetTransaction:(id)arg1 key:(id)arg2;
-(id)dataForSetTransaction:(id)arg1 key:(id)arg2 version:(id*)arg3;
-(void)transaction:(id)arg1 mergeData:(id)arg2 forKey:(id)arg3 version:(id)arg4 mismatch:(char)arg5 finishedBlock:(/*^block*/id)arg6;

@end

