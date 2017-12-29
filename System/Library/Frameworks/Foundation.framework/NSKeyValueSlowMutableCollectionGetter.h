/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueSetter;

@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter {

	NSKeyValueGetter* _baseGetter;
	NSKeyValueSetter* _baseSetter;

}
-(id)baseGetter;
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 baseSetter:(id)arg4 containerIsa:(Class)arg5 proxyClass:(Class)arg6 ;
-(id)baseSetter;
-(char)treatNilValuesLikeEmptyCollections;
-(void)dealloc;
@end

