/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol IMActivityItemSource <UIActivityItemSource,NSObject>
@property (nonatomic,retain) NSString * activityType; 
@optional
-(void)activityViewController:(id)arg1 didShareItems:(id)arg2 success:(char)arg3;
-(id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;

@required
-(id)supportedActivityTypes;
-(NSString *)activityType;
-(id)activityViewControllerPlaceholderItem:(id)arg1;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
-(void)setActivityType:(id)arg1;

@end

