/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/StoreKitUIService.app/StoreKitUIService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIClientContext.h>
#import <libobjc.A.dylib/SKUIHostApplicationProtocol.h>

@class NSString;

@interface ServiceClientContext : SKUIClientContext <SKUIHostApplicationProtocol> {

	NSString* _hostApplicationIdentifier;

}

@property (nonatomic,copy) NSString * hostApplicationIdentifier;              //@synthesize hostApplicationIdentifier=_hostApplicationIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(NSString *)hostApplicationIdentifier;
-(void)getDefaultMetricsControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setHostApplicationIdentifier:(NSString *)arg1 ;
@end

