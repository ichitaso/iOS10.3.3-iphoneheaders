/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
@class NSURL;

@interface ADArchiver : NSObject {

	archiveRef _archive;
	char _hasClosedArchive;
	NSURL* _tarGzUrl;
	NSURL* _sourceDir;

}

@property (retain) NSURL * tarGzUrl;               //@synthesize tarGzUrl=_tarGzUrl - In the implementation block
@property (retain) NSURL * sourceDir;              //@synthesize sourceDir=_sourceDir - In the implementation block
-(NSURL *)tarGzUrl;
-(archiveRef)archiverForUrl:(id)arg1 ;
-(id)initWithURLForWriting:(id)arg1 ;
-(void)initializeArchive;
-(char)addFile:(id)arg1 withPathName:(id)arg2 ;
-(void)setTarGzUrl:(NSURL *)arg1 ;
-(NSURL *)sourceDir;
-(void)setSourceDir:(NSURL *)arg1 ;
-(void)dealloc;
-(void)closeArchive;
@end

