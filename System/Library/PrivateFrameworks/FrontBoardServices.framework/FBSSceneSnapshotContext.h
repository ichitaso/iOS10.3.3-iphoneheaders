/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, FBSSceneSettings, NSSet, BSSettings;

@interface FBSSceneSnapshotContext : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSString* _sceneID;
	NSString* _name;
	FBSSceneSettings* _settings;
	CGRect _frame;
	float _scale;
	double _expirationInterval;
	NSSet* _layersToExclude;
	BSSettings* _clientExtendedData;

}

@property (nonatomic,copy) FBSSceneSettings * settings;                  //@synthesize settings=_settings - In the implementation block
@property (nonatomic,copy,readonly) NSString * sceneID;                  //@synthesize sceneID=_sceneID - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) CGRect frame;                               //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) float scale;                                //@synthesize scale=_scale - In the implementation block
@property (nonatomic,copy) NSSet * layersToExclude;                      //@synthesize layersToExclude=_layersToExclude - In the implementation block
@property (assign,nonatomic) double expirationInterval;                  //@synthesize expirationInterval=_expirationInterval - In the implementation block
@property (nonatomic,copy) BSSettings * clientExtendedData;              //@synthesize clientExtendedData=_clientExtendedData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contextWithSceneID:(id)arg1 settings:(id)arg2 ;
-(BSSettings *)clientExtendedData;
-(void)setClientExtendedData:(BSSettings *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGRect)frame;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(FBSSceneSettings *)settings;
-(void)setScale:(float)arg1 ;
-(id)initWithSceneID:(id)arg1 settings:(id)arg2 ;
-(void)setLayersToExclude:(NSSet *)arg1 ;
-(void)setExpirationInterval:(double)arg1 ;
-(float)scale;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setSettings:(FBSSceneSettings *)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(NSString *)sceneID;
-(double)expirationInterval;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSSet *)layersToExclude;
@end
