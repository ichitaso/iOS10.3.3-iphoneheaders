/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MBLSingleMessageClient.h>

@class MFMessageBulletinsObserver, MFLibraryMessage, NSString;

@interface _MFMessageBulletinsObserverSummaryClient : NSObject <MBLSingleMessageClient> {

	MFMessageBulletinsObserver* _observer;
	MFLibraryMessage* _message;
	unsigned _attempts;
	unsigned _priority;
	double _ordering;

}

@property (nonatomic,retain) MFMessageBulletinsObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)wantsContentsOfType:(int)arg1 ;
-(void)notifyContentsAvailable:(id)arg1 forMessage:(id)arg2 ;
-(void)notifyContentsUnavailableForMessage:(id)arg1 error:(id)arg2 ;
-(id)initWithObserver:(id)arg1 message:(id)arg2 ;
-(unsigned)_calculatePriority;
-(unsigned)_calculateOrdering;
-(double)ordering;
-(void)dealloc;
-(NSString *)description;
-(unsigned)priority;
-(id)message;
-(void)setObserver:(MFMessageBulletinsObserver *)arg1 ;
-(MFMessageBulletinsObserver *)observer;
@end

