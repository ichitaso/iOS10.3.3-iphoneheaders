/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.podcasts.SpotlightIndexExtension/AEAsset.h>

@protocol AEAsset <NSObject>
@required
-(id)assetID;
-(id)url;
-(id)assetType;

@end


@class NSString, NSURL;

@interface AEAsset : NSObject <AEAsset> {

	NSString* _assetType;
	NSString* _assetID;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * assetType;                //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,readonly) NSString * assetID;                  //@synthesize assetID=_assetID - In the implementation block
@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAssetType:(id)arg1 assetID:(id)arg2 url:(id)arg3 ;
-(NSString *)assetID;
-(void)dealloc;
-(NSString *)description;
-(NSURL *)url;
-(NSString *)assetType;
@end

