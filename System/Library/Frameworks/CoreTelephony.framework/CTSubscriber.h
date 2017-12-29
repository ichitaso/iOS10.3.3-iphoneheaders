/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@class NSData;

@interface CTSubscriber : NSObject {

	_CTServerConnection* _server;
	vector<dispatch::block<void ()(NSDictionary *)>, std::__1::allocator<dispatch::block<void ()(NSDictionary *)> > >* _authCallbacks;

}

@property (nonatomic,retain,readonly) NSData * carrierToken; 
-(NSData *)carrierToken;
-(char)refreshCarrierToken;
-(void)handleAuthCallback:(id)arg1 ;
-(void)authenticateWithInfo:(id)arg1 handleResult:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
@end
