/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol ACMBaseAuthenticationRequest <NSObject>
@property (nonatomic,retain) NSString * realm; 
@property (nonatomic,retain) NSString * userName; 
@property (nonatomic,retain) NSNumber * appID; 
@property (nonatomic,retain) NSString * appIDKey; 
@property (nonatomic,retain) NSNumber * serverResponseTimeout; 
@required
-(NSString *)userName;
-(void)setRealm:(id)arg1;
-(void)setAppID:(id)arg1;
-(void)setUserName:(id)arg1;
-(NSString *)realm;
-(void)setAppIDKey:(id)arg1;
-(NSNumber *)appID;
-(NSString *)appIDKey;
-(NSNumber *)serverResponseTimeout;
-(void)setServerResponseTimeout:(id)arg1;

@end
