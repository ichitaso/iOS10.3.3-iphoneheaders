/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NSLayoutRelationship <NSObject,NSCopying>
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSString * relationshipDescription; 
@required
-(id)makeChildrenRelationships;
-(NSString *)relationshipDescription;
-(NSString *)identifier;

@end

