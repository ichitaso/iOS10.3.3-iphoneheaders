/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBApplicationIcon.h>
#import <SpringBoard/SBDateTimeOverrideObserver.h>

@class NSString;

@interface SBCalendarApplicationIcon : SBApplicationIcon <SBDateTimeOverrideObserver>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeOverrideDateFromDate:(id)arg2 ;
-(void)_startListeningForSignificantTimeChanges;
-(void)_stopListeningForSignificantTimeChanges;
-(id)_compositedIconImageForFormat:(int)arg1 withBaseImageProvider:(/*^block*/id)arg2 ;
-(id)generateIconImage:(int)arg1 ;
-(void)dealloc;
-(id)initWithApplication:(id)arg1 ;
-(id)getUnmaskedIconImage:(int)arg1 ;
-(void)localeChanged;
@end
