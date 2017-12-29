/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:44 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsWidgetExtension.appex/TipsWidgetExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSMutableArray;

@interface TPSDataCacheController : NSObject {

	unsigned _maxDataCacheSize;
	unsigned _cacheSize;
	NSString* _identifier;
	NSString* _cacheDirectory;
	int _URLSessionDataType;
	NSMutableDictionary* _dataCacheMap;
	char _backgroundOriginUpdate;
	NSString* _languageCode;
	NSMutableArray* _dataCacheArray;

}

@property (assign,nonatomic) char backgroundOriginUpdate;                  //@synthesize backgroundOriginUpdate=_backgroundOriginUpdate - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * dataCacheArray;              //@synthesize dataCacheArray=_dataCacheArray - In the implementation block
+(id)sharedInstance;
-(void)setBackgroundOriginUpdate:(char)arg1 ;
-(char)isURLValid:(id)arg1 ;
-(id)formattedDataWithData:(id)arg1 ;
-(void)formattedDataWithFileURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)formattedDataForPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)backgroundOriginUpdate;
-(id)formattedDataForRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeCacheForPath:(id)arg1 ;
-(id)saveTemporaryFileToCache:(id)arg1 data:(id)arg2 lastModified:(id)arg3 dataCache:(id)arg4 ;
-(void)dealloc;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)updateCache;
-(id)dataCacheForPath:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 directoryName:(id)arg2 maxCacheSize:(unsigned)arg3 URLSessionDataType:(int)arg4 ;
-(id)cacheFileURLForDataCache:(id)arg1 ;
-(id)newDataCache;
-(void)updateCacheDelay;
-(void)createCacheDirectory;
-(id)cacheFileURLForIdentifier:(id)arg1 ;
-(void)removeAllDataCache;
-(void)removeDataCache:(id)arg1 updateCache:(char)arg2 ;
-(void)removeDataCache:(id)arg1 ;
-(void)addDataCache:(id)arg1 ;
-(char)cacheValidForPath:(id)arg1 ;
-(NSMutableArray *)dataCacheArray;
-(void)setDataCacheArray:(NSMutableArray *)arg1 ;
@end

