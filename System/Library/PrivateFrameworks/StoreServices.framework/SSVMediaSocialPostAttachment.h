/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSString, NSArray, NSData, NSURL, NSMutableDictionary;

@interface SSVMediaSocialPostAttachment : NSObject <NSCopying, SSXPCCoding> {

	NSString* _albumIdentifier;
	NSArray* _artists;
	NSData* _assetData;
	NSURL* _assetURL;
	NSString* _attachmentDescription;
	NSString* _categoryName;
	NSMutableDictionary* _childAttachments;
	char _deletesAssetWhenFinished;
	char _explicitContent;
	double _previewFrameTimestamp;
	NSString* _subtitle;
	NSString* _title;
	NSString* _uti;

}

@property (nonatomic,copy) NSArray * artists;                                            //@synthesize artists=_artists - In the implementation block
@property (nonatomic,copy) NSString * albumIdentifier;                                   //@synthesize albumIdentifier=_albumIdentifier - In the implementation block
@property (nonatomic,copy) NSString * attachmentDescription;                             //@synthesize attachmentDescription=_attachmentDescription - In the implementation block
@property (nonatomic,copy) NSString * categoryName;                                      //@synthesize categoryName=_categoryName - In the implementation block
@property (assign,getter=isExplicitContent,nonatomic) char explicitContent;              //@synthesize explicitContent=_explicitContent - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSData * assetData;                                           //@synthesize assetData=_assetData - In the implementation block
@property (nonatomic,copy) NSURL * assetURL;                                             //@synthesize assetURL=_assetURL - In the implementation block
@property (nonatomic,readonly) int attachmentType; 
@property (nonatomic,copy) NSString * UTI;                                               //@synthesize uti=_uti - In the implementation block
@property (assign,nonatomic) char deletesAssetWhenFinished;                              //@synthesize deletesAssetWhenFinished=_deletesAssetWhenFinished - In the implementation block
@property (assign,nonatomic) double previewFrameTimestamp;                               //@synthesize previewFrameTimestamp=_previewFrameTimestamp - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAlbumIdentifier:(NSString *)arg1 ;
-(void)setArtists:(NSArray *)arg1 ;
-(void)setAssetData:(NSData *)arg1 ;
-(void)setAssetURL:(NSURL *)arg1 ;
-(void)setDeletesAssetWhenFinished:(char)arg1 ;
-(void)setPreviewFrameTimestamp:(double)arg1 ;
-(id)childAttachmentForRelationship:(id)arg1 ;
-(void)enumerateChildAttachmentsUsingBlock:(/*^block*/id)arg1 ;
-(void)setChildAttachment:(id)arg1 forRelationship:(id)arg2 ;
-(NSString *)albumIdentifier;
-(NSArray *)artists;
-(NSData *)assetData;
-(double)previewFrameTimestamp;
-(char)deletesAssetWhenFinished;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(char)isExplicitContent;
-(void)setExplicitContent:(char)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)categoryName;
-(void)setCategoryName:(NSString *)arg1 ;
-(NSURL *)assetURL;
-(NSString *)attachmentDescription;
-(void)setAttachmentDescription:(NSString *)arg1 ;
-(int)attachmentType;
@end

