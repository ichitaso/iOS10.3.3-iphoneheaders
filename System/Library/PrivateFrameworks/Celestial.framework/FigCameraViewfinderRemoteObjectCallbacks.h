/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FigCameraViewfinderRemoteObjectCallbacks <NSObject>
@required
-(void)viewfinderSessionDidBegin:(id)arg1 withIdentifier:(long long)arg2;
-(void)viewfinderSessionDidEnd;
-(void)viewfinderSession:(long long)arg1 didCapturePhotoWithStatus:(long)arg2 thumbnailData:(id)arg3 timestamp:(SCD_Struct_BW2)arg4;
-(void)viewfinderSessionPreviewStreamDidOpen:(long long)arg1;
-(void)viewfinderSession:(long long)arg1 previewStreamDidCloseWithStatus:(long)arg2;

@end

