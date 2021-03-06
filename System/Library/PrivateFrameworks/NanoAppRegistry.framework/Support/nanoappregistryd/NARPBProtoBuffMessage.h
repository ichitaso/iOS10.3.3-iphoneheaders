/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:57:15 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/Support/nanoappregistryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <nanoappregistryd/nanoappregistryd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NARPBApplicationWrapper, NARPBGlanceWrapper, NARPBWorkspaceMetadata;

@interface NARPBProtoBuffMessage : PBCodable <NSCopying> {

	NARPBApplicationWrapper* _applicationWrapper;
	NARPBGlanceWrapper* _glanceWrapper;
	NARPBWorkspaceMetadata* _workspaceMetadata;

}

@property (nonatomic,readonly) char hasApplicationWrapper; 
@property (nonatomic,retain) NARPBApplicationWrapper * applicationWrapper;              //@synthesize applicationWrapper=_applicationWrapper - In the implementation block
@property (nonatomic,readonly) char hasWorkspaceMetadata; 
@property (nonatomic,retain) NARPBWorkspaceMetadata * workspaceMetadata;                //@synthesize workspaceMetadata=_workspaceMetadata - In the implementation block
@property (nonatomic,readonly) char hasGlanceWrapper; 
@property (nonatomic,retain) NARPBGlanceWrapper * glanceWrapper;                        //@synthesize glanceWrapper=_glanceWrapper - In the implementation block
-(void)setApplicationWrapper:(NARPBApplicationWrapper *)arg1 ;
-(void)setWorkspaceMetadata:(NARPBWorkspaceMetadata *)arg1 ;
-(void)setGlanceWrapper:(NARPBGlanceWrapper *)arg1 ;
-(char)hasApplicationWrapper;
-(char)hasWorkspaceMetadata;
-(char)hasGlanceWrapper;
-(NARPBApplicationWrapper *)applicationWrapper;
-(NARPBWorkspaceMetadata *)workspaceMetadata;
-(NARPBGlanceWrapper *)glanceWrapper;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
@end

