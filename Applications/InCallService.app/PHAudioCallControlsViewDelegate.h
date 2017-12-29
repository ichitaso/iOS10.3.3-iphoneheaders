/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:33 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHAudioCallControlsViewDelegate <NSObject>
@required
-(unsigned)controlTypeAtRow:(unsigned)arg1 column:(unsigned)arg2;
-(unsigned)numberOfRowsInControlsView:(id)arg1;
-(unsigned)numberOfColumnsInControlsView:(id)arg1;
-(char)controlTypeIsEnabled:(unsigned)arg1;
-(char)controlTypeIsSelected:(unsigned)arg1;
-(id)imageNameForControlType:(unsigned)arg1;
-(id)titleForControlType:(unsigned)arg1;
-(void)controlTypeTapped:(unsigned)arg1 forView:(id)arg2;
-(void)controlTypeShortPressed:(unsigned)arg1;
-(void)controlTypeLongPressed:(unsigned)arg1;

@end
