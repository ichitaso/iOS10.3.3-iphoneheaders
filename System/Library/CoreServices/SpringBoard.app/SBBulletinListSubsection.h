/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBBulletinListSubsection : NSObject {

	char _showsInLockScreen;
	char _showsMessagePreview;
	NSString* _subsectionID;

}

@property (nonatomic,copy,readonly) NSString * subsectionID;              //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) char showsInLockScreen;                      //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) char showsMessagePreview;                    //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
-(id)initWithBulletinListSection:(id)arg1 subsectionID:(id)arg2 ;
-(NSString *)subsectionID;
-(void)setShowsInLockScreen:(char)arg1 ;
-(void)setShowsMessagePreview:(char)arg1 ;
-(char)showsMessagePreview;
-(char)showsInLockScreen;
@end

