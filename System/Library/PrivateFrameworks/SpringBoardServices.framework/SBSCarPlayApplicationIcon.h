/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSData, NSString;


@protocol SBSCarPlayApplicationIcon <NSObject>
@property (nonatomic,readonly) NSData * iconImageData; 
@property (nonatomic,readonly) float iconImageScale; 
@property (nonatomic,readonly) NSString * localizedDisplayName; 
@required
-(float)iconImageScale;
-(NSString *)localizedDisplayName;
-(NSData *)iconImageData;

@end

