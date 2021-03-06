/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 7:32:21 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Security.framework/CircleJoinRequested/CircleJoinRequested
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CircleJoinRequested/CircleJoinRequested-Structs.h>
@class NSString;

@interface Applicant : NSObject {

	int _applicantUIState;
	OpaqueSOSPeerInfoRef _rawPeerInfo;

}

@property (assign) int applicantUIState;                           //@synthesize applicantUIState=_applicantUIState - In the implementation block
@property (readonly) NSString * applicantUIStateName; 
@property (assign) OpaqueSOSPeerInfoRef rawPeerInfo;               //@synthesize rawPeerInfo=_rawPeerInfo - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * idString; 
@property (readonly) NSString * deviceType; 
-(void)setRawPeerInfo:(OpaqueSOSPeerInfoRef)arg1 ;
-(void)setApplicantUIState:(int)arg1 ;
-(OpaqueSOSPeerInfoRef)rawPeerInfo;
-(NSString *)applicantUIStateName;
-(int)applicantUIState;
-(id)initWithPeerInfo:(OpaqueSOSPeerInfoRef)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSString *)deviceType;
-(NSString *)idString;
@end

