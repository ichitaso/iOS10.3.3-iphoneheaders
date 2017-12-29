/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Tips.app/PlugIns/TipsWidgetExtension.appex/TipsWidgetExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsWidgetExtension/TipsWidgetExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface TPSRelatedApp : NSObject <NSCopying, NSCoding> {

	NSString* _appName;
	NSString* _iconName;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * appName;                 //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy) NSString * iconName;                //@synthesize iconName=_iconName - In the implementation block
@property (nonatomic,copy) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)appName;
-(void)setIconName:(NSString *)arg1 ;
-(NSString *)iconName;
-(void)setAppName:(NSString *)arg1 ;
@end

