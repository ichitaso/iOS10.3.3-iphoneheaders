/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:31 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/asn1Token.h>

@interface asn1SetToken : asn1Token {

	const char* mReadPointer;

}
-(id)_initWithID:(unsigned)arg1 class:(unsigned char)arg2 length:(unsigned)arg3 content:(const char*)arg4 opaque:(char)arg5 ;
-(id)nextToken;
-(id)description;
-(void)reset;
@end

