/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:58:03 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/UpdateMigratorOperation.h>

@class NSArray, NSDictionary;

@interface UpdateMigratorPromotionOperation : UpdateMigratorOperation {

	NSArray* _bundleIDs;
	NSDictionary* _options;

}
-(id)initWithBundleIdentifiers:(id)arg1 options:(id)arg2 ;
-(void)performMigration;
@end
