/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSURL;

@interface FBAFileCleanupOperation : NSOperation {

	NSURL* _tempDirectoryURL;

}

@property (copy) NSURL * tempDirectoryURL;              //@synthesize tempDirectoryURL=_tempDirectoryURL - In the implementation block
-(NSURL *)tempDirectoryURL;
-(void)setTempDirectoryURL:(NSURL *)arg1 ;
@end

