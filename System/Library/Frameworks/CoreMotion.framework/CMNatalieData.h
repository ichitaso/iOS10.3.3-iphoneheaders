/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSUUID, NSDate, NSNumber;

@interface CMNatalieData : CMLogItem {

	int fRecordId;
	double fStartDate;
	int fSession;
	double fMets;
	double fNatalies;
	double fBasalNatalies;
	NSUUID* fSourceId;

}

@property (nonatomic,readonly) int recordId; 
@property (nonatomic,readonly) NSUUID * sourceId; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSNumber * mets; 
@property (nonatomic,readonly) NSNumber * natalies; 
@property (nonatomic,readonly) NSNumber * basalNatalies; 
@property (nonatomic,readonly) int session; 
+(char)supportsSecureCoding;
+(id)sessionName:(int)arg1 ;
+(id)maxNatalieEntries;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithStartDate:(double)arg1 recordId:(int)arg2 session:(int)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 timestamp:(double)arg7 sourceId:(id)arg8 ;
-(NSNumber *)mets;
-(NSNumber *)natalies;
-(NSNumber *)basalNatalies;
-(NSUUID *)sourceId;
-(int)session;
-(NSDate *)startDate;
-(int)recordId;
@end
