/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TransitWidget/MWTransitItemDataSourceBuilder.h>

@class MWTransitListItem, NSError, NSString;

@interface MWTransitIncidentDataSourceErrorBuilder : NSObject <MWTransitItemDataSourceBuilder> {

	MWTransitListItem* _listItem;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;                             //@synthesize error=_error - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) MWTransitListItem * listItem;              //@synthesize listItem=_listItem - In the implementation block
-(id)analyticsTransitIncidentItems;
-(id)_buildErrorItem;
-(int)analyticsResultType;
-(MWTransitListItem *)listItem;
-(id)initWithError:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)_errorMessage;
@end

