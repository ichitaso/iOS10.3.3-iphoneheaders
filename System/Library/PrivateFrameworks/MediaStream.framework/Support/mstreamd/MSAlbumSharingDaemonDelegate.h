/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:10 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/Support/mstreamd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSAlbumSharingDaemonDelegate <NSObject>
@optional
-(void)MSAlbumSharingDaemon:(id)arg1 didForgetPersonID:(id)arg2;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveTooManyAlbumsError:(id)arg2 personID:(id)arg3;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveTooManyPhotosError:(id)arg2 forAlbum:(id)arg3 personID:(id)arg4;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveTooManySubscriptionsError:(id)arg2 personID:(id)arg3;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveTooManyCommentsError:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 personID:(id)arg5;
-(void)MSAlbumSharingDaemon:(id)arg1 didReceiveCommentTooLongError:(id)arg2 forAssetCollection:(id)arg3 inAlbum:(id)arg4 personID:(id)arg5;

@required
-(void)MSAlbumSharingDaemonDidUnidleMomentarily:(id)arg1;
-(void)MSAlbumSharingDaemonDidIdle:(id)arg1;
-(void)MSAlbumSharingDaemonDidUnidle:(id)arg1;

@end

