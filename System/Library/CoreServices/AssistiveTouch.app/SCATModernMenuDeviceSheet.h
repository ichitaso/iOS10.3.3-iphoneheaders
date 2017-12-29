/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATModernMenuSheet.h>

@class NSString, SCATModernMenuItem;

@interface SCATModernMenuDeviceSheet : SCATModernMenuSheet {

	NSString* _springBoardActionHandlerIdentifier;
	SCATModernMenuItem* _muteItem;

}

@property (nonatomic,copy) NSString * springBoardActionHandlerIdentifier;              //@synthesize springBoardActionHandlerIdentifier=_springBoardActionHandlerIdentifier - In the implementation block
@property (nonatomic,retain) SCATModernMenuItem * muteItem;                            //@synthesize muteItem=_muteItem - In the implementation block
-(char)shouldUpdateMenuItem:(id)arg1 ;
-(void)menuItemWasActivated:(id)arg1 ;
-(id)makeMenuItemsIfNeeded;
-(id)initWithMenu:(id)arg1 ;
-(SCATModernMenuItem *)muteItem;
-(void)setSpringBoardActionHandlerIdentifier:(NSString *)arg1 ;
-(NSString *)springBoardActionHandlerIdentifier;
-(void)setMuteItem:(SCATModernMenuItem *)arg1 ;
-(void)_handleSpeakThis;
-(void)_handleSysdiagnose;
-(void)dealloc;
@end
