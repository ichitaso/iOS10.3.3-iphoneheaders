/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@protocol MFMailWebProcessProxy;
@class NSMutableDictionary, NSMutableSet, NSString;

@interface MFWebViewDictionary : NSMutableDictionary {

	NSMutableDictionary* _storage;
	id<MFMailWebProcessProxy> _webProcessProxy;
	NSMutableSet* _changedKeys;
	char _requiresResynchronization;
	NSString* _javascriptName;

}

@property (nonatomic,readonly) NSString * javascriptName;              //@synthesize javascriptName=_javascriptName - In the implementation block
-(void)_setRequiresSynchronization;
-(void)_updateRemoteInstance;
-(void)registerWithWebView:(id)arg1 javascriptName:(id)arg2 ;
-(NSString *)javascriptName;
-(id)descriptionWithLocale:(id)arg1 indent:(unsigned)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned)arg3 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_MF15*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(unsigned)hash;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(id)allKeys;
-(id)initWithCapacity:(unsigned)arg1 ;
-(id)objectEnumerator;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(char)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(id)allValues;
-(id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
-(void)removeObjectsForKeys:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(id)allKeysForObject:(id)arg1 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

