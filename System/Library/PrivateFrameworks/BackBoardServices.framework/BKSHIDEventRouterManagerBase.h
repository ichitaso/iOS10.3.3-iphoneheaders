/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface BKSHIDEventRouterManagerBase : NSObject {

	NSArray* _eventRouters;

}

@property (nonatomic,retain) NSArray * eventRouters;              //@synthesize eventRouters=_eventRouters - In the implementation block
-(void)setEventRouters:(NSArray *)arg1 ;
-(NSArray *)eventRouters;
-(int)routerDestinationForDescriptor:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
@end

