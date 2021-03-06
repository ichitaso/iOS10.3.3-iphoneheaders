/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:10 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATElementManager.h>

@protocol SCATPointPickerDelegate;
@class NSValue, SCATPointPickerViewController;

@interface SCATPointPicker : SCATElementManager {

	char _shouldKeepScannerAwake;
	id<SCATPointPickerDelegate> _delegate;
	NSValue* _realPickedPoint;
	unsigned _refinementCount;
	int _pickerType;

}

@property (nonatomic,retain) NSValue * realPickedPoint;                                           //@synthesize realPickedPoint=_realPickedPoint - In the implementation block
@property (assign,nonatomic) unsigned refinementCount;                                            //@synthesize refinementCount=_refinementCount - In the implementation block
@property (assign,nonatomic) id<SCATPointPickerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCATPointPickerViewController * pickerViewController; 
@property (nonatomic,readonly) int pickerType;                                                    //@synthesize pickerType=_pickerType - In the implementation block
@property (nonatomic,readonly) char allowsSelectionRefinement; 
@property (nonatomic,readonly) char hasPickedPoint; 
@property (nonatomic,readonly) CGPoint pickedPoint; 
@property (nonatomic,readonly) CGPoint pickedPointInDeviceCoordinates; 
@property (assign,nonatomic) char shouldKeepScannerAwake;                                         //@synthesize shouldKeepScannerAwake=_shouldKeepScannerAwake - In the implementation block
+(id)mostSuitablePointPickerWithMenu:(id)arg1 ;
+(id)pointPickerWithMode:(int)arg1 menu:(id)arg2 ;
-(unsigned)refinementCount;
-(CGPoint)pickedPointInDeviceCoordinates;
-(void)_savePoint:(CGPoint)arg1 andNotifyDelegate:(char)arg2 ;
-(char)isRefiningPoint;
-(char)shouldKeepScannerAwake;
-(void)didFetchElements:(id)arg1 foundNewElements:(char)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(char)arg4 ;
-(void)setShouldKeepScannerAwake:(char)arg1 ;
-(CGPoint)pickedPoint;
-(void)scannerManager:(id)arg1 didActivateElement:(id)arg2 ;
-(char)hasPickedPoint;
-(void)resetRefinedSelectedPoint;
-(char)allowsSelectionRefinement;
-(void)refineSelectedPoint;
-(id)_initWithMenu:(id)arg1 ;
-(int)pickerType;
-(void)setRealPickedPoint:(NSValue *)arg1 ;
-(NSValue *)realPickedPoint;
-(void)setRefinementCount:(unsigned)arg1 ;
-(void)setDelegate:(id<SCATPointPickerDelegate>)arg1 ;
-(void)dealloc;
-(id)description;
-(id<SCATPointPickerDelegate>)delegate;
-(id)identifier;
-(SCATPointPickerViewController *)pickerViewController;
@end

