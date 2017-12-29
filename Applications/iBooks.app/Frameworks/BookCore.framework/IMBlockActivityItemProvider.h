/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/IMActivityItemSource.h>

@class NSString, NSArray;

@interface IMBlockActivityItemProvider : NSObject <IMActivityItemSource> {

	NSString* _UTI;
	/*^block*/id _resolutionBlock;
	NSArray* _supportedActivityTypes;
	NSString* _activityType;

}

@property (nonatomic,retain) NSString * UTI;                                //@synthesize UTI=_UTI - In the implementation block
@property (nonatomic,copy) id resolutionBlock;                              //@synthesize resolutionBlock=_resolutionBlock - In the implementation block
@property (nonatomic,retain) NSArray * supportedActivityTypes;              //@synthesize supportedActivityTypes=_supportedActivityTypes - In the implementation block
@property (nonatomic,retain) NSString * activityType;                       //@synthesize activityType=_activityType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)supportedActivityTypes;
-(id)resolutionBlock;
-(id)initWithUTI:(id)arg1 resolutionBlock:(/*^block*/id)arg2 ;
-(void)setResolutionBlock:(id)arg1 ;
-(void)setSupportedActivityTypes:(NSArray *)arg1 ;
-(NSString *)activityType;
-(id)activityViewControllerPlaceholderItem:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemForActivityType:(id)arg2 ;
-(NSString *)UTI;
-(void)setUTI:(NSString *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
@end

