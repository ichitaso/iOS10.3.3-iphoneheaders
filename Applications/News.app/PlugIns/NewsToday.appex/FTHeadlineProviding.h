/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, UIImage, NSURL;


@protocol FTHeadlineProviding <NSObject,NSCopying,NSCoding>
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSDate * ageDisplayDate; 
@property (nonatomic,copy,readonly) NSString * sourceName; 
@property (nonatomic,readonly) UIImage * sourceNameImage; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,copy,readonly) NSURL * actionURL; 
@property (nonatomic,copy,readonly) NSObject*<NSCopying>*<NSSecureCoding> identifier; 
@property (getter=isPaid,nonatomic,readonly) char paid; 
@property (nonatomic,copy,readonly) NSString * storyType; 
@property (nonatomic,readonly) unsigned long long version; 
@property (nonatomic,copy) NSObject*<NSCopying>*<NSSecureCoding> eventTrackingElement; 
@required
-(void)setEventTrackingElement:(id)arg1;
-(NSObject*<NSCopying>*<NSSecureCoding>)eventTrackingElement;
-(UIImage *)sourceNameImage;
-(NSDate *)ageDisplayDate;
-(NSURL *)actionURL;
-(NSObject*<NSCopying>*<NSSecureCoding>)identifier;
-(NSString *)title;
-(unsigned long long)version;
-(UIImage *)thumbnail;
-(NSString *)sourceName;
-(NSString *)storyType;
-(char)isPaid;

@end

