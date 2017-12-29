/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/XPCServices/com.apple.mobilenotes.HTMLConverter.xpc/com.apple.mobilenotes.HTMLConverter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileWrapper.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSData;

@interface ICLocalFileWrapper : NSFileWrapper <NSSecureCoding> {

	NSURL* _localURL;
	NSData* _cachedData;

}

@property (nonatomic,retain) NSURL * localURL;                 //@synthesize localURL=_localURL - In the implementation block
@property (nonatomic,retain) NSData * cachedData;              //@synthesize cachedData=_cachedData - In the implementation block
+(char)supportsSecureCoding;
-(char)isDirectory;
-(id)fileWrappers;
-(void)removeFileWrapper:(id)arg1 ;
-(id)addFileWrapper:(id)arg1 ;
-(char)isSymbolicLink;
-(char)matchesContentsOfURL:(id)arg1 ;
-(char)readFromURL:(id)arg1 options:(unsigned)arg2 error:(id*)arg3 ;
-(id)symbolicLinkDestinationURL;
-(id)keyForFileWrapper:(id)arg1 ;
-(id)serializedRepresentation;
-(id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)regularFileContents;
-(id)preferredFilename;
-(NSURL *)localURL;
-(char)writeToURL:(id)arg1 options:(unsigned)arg2 originalContentsURL:(id)arg3 error:(id*)arg4 ;
-(NSData *)cachedData;
-(void)setCachedData:(NSData *)arg1 ;
-(id)filename;
-(void)setLocalURL:(NSURL *)arg1 ;
-(id)initWithLocalURL:(id)arg1 ;
-(id)dataWithError:(id*)arg1 ;
-(id)fileAttributes;
@end

