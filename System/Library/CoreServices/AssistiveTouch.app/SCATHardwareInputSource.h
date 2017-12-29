/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATInputSource.h>
#import <assistivetouchd/AXEventHandler.h>

@class NSDictionary, NSString;

@interface SCATHardwareInputSource : SCATInputSource <AXEventHandler> {

	char* _hidReportBuffer;
	char _available;
	IOHIDManagerRef _hidManager;
	unsigned _availabilityDetail;
	NSDictionary* _persistentSwitchIdentifiers;
	NSDictionary* _switchDisplayNames;

}

@property (assign,getter=isAvailable,nonatomic) char available;                         //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) IOHIDManagerRef hidManager;                                //@synthesize hidManager=_hidManager - In the implementation block
@property (assign,nonatomic) unsigned availabilityDetail;                               //@synthesize availabilityDetail=_availabilityDetail - In the implementation block
@property (assign,nonatomic) id<SCATHardwareInputSourceDelegate> delegate; 
@property (nonatomic,retain) NSDictionary * persistentSwitchIdentifiers;                //@synthesize persistentSwitchIdentifiers=_persistentSwitchIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * switchDisplayNames;                         //@synthesize switchDisplayNames=_switchDisplayNames - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)handledEvent:(id)arg1 ;
-(void)updateWithSwitches:(id)arg1 recipe:(id)arg2 ;
-(void)_didReceiveActionWithIdentifier:(long)arg1 start:(char)arg2 ignoreInputHold:(char)arg3 ;
-(char)isMFIInputSource;
-(void)_startHandlingEvents;
-(void)_stopHandlingEvents;
-(NSDictionary *)persistentSwitchIdentifiers;
-(NSDictionary *)switchDisplayNames;
-(char)isKeyboardInputSource;
-(int)_switchKeyForSwitch:(id)arg1 ;
-(NSString*)_switchSource;
-(unsigned)availabilityDetail;
-(void)setAvailabilityDetail:(unsigned)arg1 ;
-(char)isATVRemoteInputSource;
-(id)_matchingCriteria;
-(void)_didUpdateAvailability:(char)arg1 withDetail:(unsigned)arg2 ;
-(void)setPersistentSwitchIdentifiers:(NSDictionary *)arg1 ;
-(void)setSwitchDisplayNames:(NSDictionary *)arg1 ;
-(void)_startDetectingDevices;
-(void)_stopDetectingDevices;
-(void)dealloc;
-(unsigned)priority;
-(void)stopRunning;
-(void)setAvailable:(char)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(char)isAvailable;
-(void)startRunning;
-(IOHIDManagerRef)hidManager;
-(void)setHidManager:(IOHIDManagerRef)arg1 ;
@end
