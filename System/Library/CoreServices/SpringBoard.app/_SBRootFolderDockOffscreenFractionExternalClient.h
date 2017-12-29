/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBDockOffscreenFractionModifying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBRootFolderView;

@interface _SBRootFolderDockOffscreenFractionExternalClient : NSObject <SBDockOffscreenFractionModifying, BSDescriptionProviding> {

	NSString* _reason;
	SBRootFolderView* _folderView;

}

@property (nonatomic,retain) SBRootFolderView * folderView;              //@synthesize folderView=_folderView - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDockOffscreenFraction:(float)arg1 ;
-(SBRootFolderView *)folderView;
-(id)initWithFolderView:(id)arg1 reason:(id)arg2 ;
-(void)setFolderView:(SBRootFolderView *)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(NSString *)description;
-(NSString *)reason;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

