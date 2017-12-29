/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RidesharingAppChoicesProvider.h>

@protocol RidesharingRideChoice;
@class NSMapTable, NSTimer, RidesharingAnalyticsBookingSession, CLPlacemark, NSArray, RidesharingFailure, _RidesharingApplication, NSString;

@interface _RidesharingAppChoicesProvider : NSObject <RidesharingAppChoicesProvider> {

	unsigned _countOfAttemptsAfterXPCErrors;
	NSMapTable* _observers;
	char _hasRideOngoing;
	NSTimer* _expirationDateTimer;
	RidesharingAnalyticsBookingSession* _analyticsBookingSession;
	char _loading;
	CLPlacemark* _origin;
	CLPlacemark* _destination;
	NSArray* _selectableChoices;
	id<RidesharingRideChoice> _selectedChoice;
	RidesharingFailure* _failure;
	_RidesharingApplication* _application;

}

@property (nonatomic,retain) _RidesharingApplication * application;                   //@synthesize application=_application - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CLPlacemark * origin;                                  //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) CLPlacemark * destination;                             //@synthesize destination=_destination - In the implementation block
@property (getter=isLoading,nonatomic,readonly) char loading;                         //@synthesize loading=_loading - In the implementation block
@property (nonatomic,readonly) NSString * loadingMessage; 
@property (nonatomic,readonly) RidesharingFailure * failure;                          //@synthesize failure=_failure - In the implementation block
@property (nonatomic,readonly) NSArray * selectableChoices;                           //@synthesize selectableChoices=_selectableChoices - In the implementation block
@property (nonatomic,readonly) id<RidesharingRideChoice> selectedChoice;              //@synthesize selectedChoice=_selectedChoice - In the implementation block
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_invokeChangeHandlers;
-(id)snapshotOfCurrentProvider;
-(void)switchToNewSelectedChoice:(id)arg1 ;
-(void)openContainingApplication;
-(NSString *)loadingMessage;
-(RidesharingFailure *)failure;
-(NSArray *)selectableChoices;
-(id)initWithApplication:(id)arg1 originPlacemark:(id)arg2 destinationPlacemark:(id)arg3 analyticsSession:(id)arg4 ;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(CLPlacemark *)origin;
-(void)_update;
-(_RidesharingApplication *)application;
-(void)setApplication:(_RidesharingApplication *)arg1 ;
-(char)isLoading;
-(CLPlacemark *)destination;
-(id<RidesharingRideChoice>)selectedChoice;
-(void)_localeDidChange;
@end

