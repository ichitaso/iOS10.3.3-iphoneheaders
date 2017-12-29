/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TV/VideosRentalDataBaseOperation.h>

@interface VideosRentalDataCheckinOperation : VideosRentalDataBaseOperation {

	char _didCheckInKeys;

}

@property (readonly) char checkedInKeys; 
-(id)initWithRentalData:(id)arg1 ;
-(char)checkedInKeys;
-(char)_checkInRentalKeys;
-(char)_didCheckInKeys;
-(void)_setDidCheckInKeys:(char)arg1 ;
-(id)_newCheckInRequest;
-(id)init;
-(void)main;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
@end

