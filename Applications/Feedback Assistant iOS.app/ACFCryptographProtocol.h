/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACFCryptographProtocol <NSObject>
@required
-(id)sha1Context;
-(id)encryptData:(id)arg1 withKey:(SecKeyRef)arg2;
-(id)signatureForData:(id)arg1 withKey:(SecKeyRef)arg2;
-(id)decodeBase64:(id)arg1;
-(id)encodeBase64:(id)arg1;
-(id)decodeBase16:(id)arg1;
-(id)encodeBase16:(id)arg1;
-(id)decodeStringWithObscuredData:(id)arg1;
-(id)encodeObscuredDataWithString:(id)arg1 length:(unsigned)arg2;
-(id)hashDataSHA256WithData:(id)arg1;
-(id)hashStringSHA256WithString:(id)arg1;
-(id)hashDataSHA1WithString:(id)arg1;
-(id)hashStringSHA1WithString:(id)arg1;
-(void)sha1Context:(id)arg1 updateWithData:(id)arg2;
-(id)sha1ContextFinalize:(id)arg1;
-(id)randomDataOfLength:(unsigned)arg1;
-(id)randomStringOfLength:(unsigned)arg1;
-(id)encryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(char)arg4;
-(id)decryptAES128CBCData:(id)arg1 withKey:(id)arg2 initializationVector:(id)arg3 pading:(char)arg4;
-(id)encrypt3DESCBCData:(id)arg1 withKey:(id)arg2 pading:(char)arg3;
-(id)decrypt3DESCBCData:(id)arg1 withKey:(id)arg2;
-(id)hmac256DataWithData:(id)arg1 key:(id)arg2;
-(void)fillEncryptionSuffix:(id)arg1;
-(void)fillHMACSuffix:(id)arg1;
-(void)clearKey:(id)arg1;
-(id)compactDataFromPropertyList:(id)arg1;
-(id)compressData:(id)arg1;
-(void)setLength:(unsigned)arg1 toData:(id)arg2;

@end

