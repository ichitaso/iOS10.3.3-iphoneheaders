/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:22:49 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/FMF.siriUIBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFBaseCmd.h>

@class CLLocation;

@interface ShowHideLocationCmd : FMFBaseCmd {

	char hideLocation;
	CLLocation* currentLocation;

}

@property (assign,nonatomic) char hideLocation; 
@property (nonatomic,copy) CLLocation * currentLocation; 
-(char)hideLocation;
-(id)currentLocationDictionary;
-(void)setHideLocation:(char)arg1 ;
-(id)path;
-(id)result;
-(CLLocation *)currentLocation;
-(void)setCurrentLocation:(CLLocation *)arg1 ;
-(id)jsonBodyDictionary;
@end

