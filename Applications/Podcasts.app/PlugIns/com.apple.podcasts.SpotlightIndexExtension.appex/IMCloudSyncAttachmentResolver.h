/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/IMAttachmentResolving.h>

@protocol IMCloudSyncAttachmentResolverDelegate;
@class IMCloudSyncKeyValueStore, NSString;

@interface IMCloudSyncAttachmentResolver : NSObject <IMAttachmentResolving> {

	IMCloudSyncKeyValueStore* _keyValueStore;
	id<IMCloudSyncAttachmentResolverDelegate> _delegate;

}

@property (assign) id<IMCloudSyncAttachmentResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) IMCloudSyncKeyValueStore * keyValueStore;              //@synthesize keyValueStore=_keyValueStore - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dataFromAttachmentInfo:(id)arg1 resolution:(id)arg2 context:(id)arg3 ;
-(id)_resolutionFromData:(id)arg1 attachmentInfo:(id)arg2 context:(id)arg3 ;
-(char)canResolveAttachmentInfo:(id)arg1 ;
-(char)supportsAttachmentResolvingOption:(int)arg1 ;
-(void)resolveAttachmentInfo:(id)arg1 context:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<IMCloudSyncAttachmentResolverDelegate>)arg1 ;
-(void)dealloc;
-(id<IMCloudSyncAttachmentResolverDelegate>)delegate;
-(IMCloudSyncKeyValueStore *)keyValueStore;
-(void)setKeyValueStore:(IMCloudSyncKeyValueStore *)arg1 ;
@end
