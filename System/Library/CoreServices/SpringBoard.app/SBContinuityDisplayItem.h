/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDisplayItem.h>

@class SBBestAppSuggestion;

@interface SBContinuityDisplayItem : SBDisplayItem {

	SBBestAppSuggestion* _appSuggestion;

}

@property (nonatomic,readonly) SBBestAppSuggestion * appSuggestion;              //@synthesize appSuggestion=_appSuggestion - In the implementation block
-(id)initWithType:(id)arg1 displayIdentifier:(id)arg2 ;
-(id)initWithType:(NSString*)arg1 displayIdentifier:(id)arg2 appSuggestion:(id)arg3 ;
-(SBBestAppSuggestion *)appSuggestion;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
@end

