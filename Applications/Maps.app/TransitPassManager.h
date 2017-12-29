/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>

@protocol TransitPassManagerDelegate;
@class NSArray, PKPassLibrary, PKPaymentService, NSString;

@interface TransitPassManager : NSObject <PKPaymentServiceDelegate> {

	NSArray* _availableTransitICPasses;
	PKPassLibrary* _library;
	PKPaymentService* _paymentService;
	id<TransitPassManagerDelegate> _delegate;

}

@property (nonatomic,readonly) PKPassLibrary * library;                                   //@synthesize library=_library - In the implementation block
@property (nonatomic,readonly) PKPaymentService * paymentService;                         //@synthesize paymentService=_paymentService - In the implementation block
@property (nonatomic,copy,readonly) NSArray * availableTransitICPasses;                   //@synthesize availableTransitICPasses=_availableTransitICPasses - In the implementation block
@property (assign,nonatomic,__weak) id<TransitPassManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_passKitLibraryDidChange:(id)arg1 ;
-(void)_passKitLibraryMayHaveChanged;
-(NSArray *)availableTransitICPasses;
-(id)_computeAvailableTransitICPasses;
-(id)_serviceProviderIDForProperties:(id)arg1 ;
-(id)preferredPassForRoute:(id)arg1 ;
-(id)availableFareForPass:(id)arg1 currencyCode:(out id*)arg2 ;
-(id)_supportedPassIdentifiersForRoute:(id)arg1 currencyCode:(out id*)arg2 ;
-(id)init;
-(void)setDelegate:(id<TransitPassManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<TransitPassManagerDelegate>)delegate;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(PKPassLibrary *)library;
-(PKPaymentService *)paymentService;
-(void)paymentPassWithUniqueIdentifier:(id)arg1 didUpdateWithFelicaPassProperties:(id)arg2 ;
@end
