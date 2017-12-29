/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookCore/BookCore-Structs.h>
@interface BKReachability : NSObject {

	char localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)sharedReachabilityForInternetConnection;
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForLocalWiFi;
-(void)dealloc;
-(char)startNotifier;
-(int)currentReachabilityStatus;
-(void)stopNotifier;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
-(char)connectionRequired;
@end

