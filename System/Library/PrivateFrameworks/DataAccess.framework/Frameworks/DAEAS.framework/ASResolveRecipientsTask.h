/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSArray, NSDate;

@interface ASResolveRecipientsTask : ASTask {

	NSArray* _emailAddresses;
	char _retrieveCertificates;
	char _retrieveAvailability;
	NSDate* _startTime;
	NSDate* _endTime;

}

@property (assign,nonatomic) char retrieveCertificates;              //@synthesize retrieveCertificates=_retrieveCertificates - In the implementation block
@property (assign,nonatomic) char retrieveAvailability;              //@synthesize retrieveAvailability=_retrieveAvailability - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,retain) NSDate * endTime;                       //@synthesize endTime=_endTime - In the implementation block
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
-(void)setEndTime:(NSDate *)arg1 ;
-(NSDate *)endTime;
-(int)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(char)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(char)processContext:(id)arg1 ;
-(id)initForCertificatesWithEmailAddresses:(id)arg1 ;
-(id)_roundDownTo30MinuteBoundary:(id)arg1 ;
-(id)_roundUpTo30MinuteBoundary:(id)arg1 ;
-(char)retrieveCertificates;
-(char)retrieveAvailability;
-(int)responseStatusForExchangeStatus:(int)arg1 ;
-(int)certStatusForExchangeStatus:(int)arg1 ;
-(int)availabilityStatusForExchangeStatus:(int)arg1 ;
-(id)initFreeBusyQueryWithStartDate:(id)arg1 endDate:(id)arg2 emailAddresses:(id)arg3 ;
-(void)setRetrieveCertificates:(char)arg1 ;
-(void)setRetrieveAvailability:(char)arg1 ;
-(void)finishWithError:(id)arg1 ;
@end
