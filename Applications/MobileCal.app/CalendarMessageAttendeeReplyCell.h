/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:54 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/CalendarMessageCell.h>

@class EKCalendarEventInvitationNotificationAttendee, CalMessageStrings, NSString, EKCalendarEventInvitationNotification;

@interface CalendarMessageAttendeeReplyCell : CalendarMessageCell {

	EKCalendarEventInvitationNotificationAttendee* _proposedTimeAttendee;
	CalMessageStrings* _messageStrings;
	NSString* _dateString;

}

@property (retain) EKCalendarEventInvitationNotificationAttendee * proposedTimeAttendee;              //@synthesize proposedTimeAttendee=_proposedTimeAttendee - In the implementation block
@property (retain) CalMessageStrings * messageStrings;                                                //@synthesize messageStrings=_messageStrings - In the implementation block
@property (retain) NSString * dateString;                                                             //@synthesize dateString=_dateString - In the implementation block
@property (nonatomic,retain) EKCalendarEventInvitationNotification * notification; 
+(int)numberOfLinesForTitleLabels;
+(int)numberOfLinesForBodyLabels;
-(void)updateContact;
-(id)blackBodyStrings;
-(CalMessageStrings *)messageStrings;
-(void)setMessageStrings:(CalMessageStrings *)arg1 ;
-(id)actions;
-(void)setNotification:(EKCalendarEventInvitationNotification *)arg1 ;
-(id)titleStrings;
-(id)bodyStrings;
-(EKCalendarEventInvitationNotificationAttendee *)proposedTimeAttendee;
-(void)setProposedTimeAttendee:(EKCalendarEventInvitationNotificationAttendee *)arg1 ;
-(void)setDateString:(NSString *)arg1 ;
-(NSString *)dateString;
@end

