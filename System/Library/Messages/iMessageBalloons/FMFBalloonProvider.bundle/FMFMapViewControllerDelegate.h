/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/FMFBalloonProvider.bundle/FMFBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFMapViewControllerDelegate <NSObject>
@optional
-(char)canSelectAnnotation:(id)arg1;
-(void)fmfMapViewController:(id)arg1 didSelectHandle:(id)arg2;
-(void)fmfMapViewController:(id)arg1 didDeselectHandle:(id)arg2;
-(void)fmfMapViewController:(id)arg1 regionWillChangeAnimated:(char)arg2;
-(void)fmfMapViewController:(id)arg1 regionDidChangeAnimated:(char)arg2;
-(void)fmfMapViewController:(id)arg1 didReceiveLocation:(id)arg2;
-(id)annotationImageForHandle:(id)arg1;
-(id)titleViewForSelectedHandle;
-(void*)annotationABRecordForHandle:(id)arg1;
-(id)annotationContactForHandle:(id)arg1;

@end

