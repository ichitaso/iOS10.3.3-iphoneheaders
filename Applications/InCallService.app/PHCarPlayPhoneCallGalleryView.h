/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <UIKit/UIView.h>
#import <InCallService/MPCarPlayPhoneCallContainerDataSource.h>
#import <InCallService/MPCarPlayPhoneCallContainerDelegate.h>

@protocol MPCarPlayPhoneCallGalleryViewDelegate;
@class PHCarPlayPhoneCallContainer, NSString;

@interface PHCarPlayPhoneCallGalleryView : UIView <MPCarPlayPhoneCallContainerDataSource, MPCarPlayPhoneCallContainerDelegate> {

	id<MPCarPlayPhoneCallGalleryViewDelegate> _delegate;
	PHCarPlayPhoneCallContainer* _container;

}

@property (retain) PHCarPlayPhoneCallContainer * container;                         //@synthesize container=_container - In the implementation block
@property (assign) id<MPCarPlayPhoneCallGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reloadPhoneCallData;
-(void)addPrimaryPhoneCall:(id)arg1 animated:(char)arg2 ;
-(void)mergePrimaryPhoneCallsAnimated:(char)arg1 ;
-(void)setIsShowingCallFailure:(char)arg1 ;
-(void)endPhoneCall:(id)arg1 animated:(char)arg2 ;
-(void)startListeningForCallNotifications;
-(void)stopListeningForCallNotifications;
-(void)phoneCallDataDidChange:(id)arg1 ;
-(id)primaryCalls;
-(id)phoneCallForIndex:(unsigned)arg1 isMerged:(char*)arg2 ;
-(id)mergedStringForMergedCalls;
-(id)mergedCalls;
-(unsigned)numberOfViewCellsForPhoneCallContainer:(id)arg1 ;
-(id)phoneCallContainer:(id)arg1 titleForViewCellAtIndex:(unsigned)arg2 ;
-(id)phoneCallContainer:(id)arg1 subtitleForViewCellAtIndex:(unsigned)arg2 ;
-(char)phoneCallContainer:(id)arg1 cellIsDimmedAtIndex:(unsigned)arg2 ;
-(void)phoneCallContainer:(id)arg1 phoneCallViewTappedAtIndex:(unsigned)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MPCarPlayPhoneCallGalleryViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MPCarPlayPhoneCallGalleryViewDelegate>)delegate;
-(PHCarPlayPhoneCallContainer *)container;
-(void)setContainer:(PHCarPlayPhoneCallContainer *)arg1 ;
@end

