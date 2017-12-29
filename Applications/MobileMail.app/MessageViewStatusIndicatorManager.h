/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:56 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MessageStatusIndicatorManager.h>

@class NSMutableArray, NSArray;

@interface MessageViewStatusIndicatorManager : MessageStatusIndicatorManager {

	NSMutableArray* _statusIndicatorImageViews;
	unsigned _statusIndicatorImageViewsSize;

}

@property (nonatomic,readonly) NSArray * statusIndicatorImageViews; 
-(void)updateImageViews;
-(NSArray *)statusIndicatorImageViews;
-(void)dealloc;
@end

