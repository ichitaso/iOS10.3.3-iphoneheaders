/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:48 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/ListViewSearchResultCell.h>

@class NSString, NSArray, NSDictionary, MKLocalSearchCompletion;

@interface QueryCompletionSearchResultCell : ListViewSearchResultCell {

	NSString* _titleText;
	NSArray* _titleBoldRanges;
	NSDictionary* _titleLabelTextAttributes;
	NSDictionary* _boldTitleLabelTextAttributes;
	MKLocalSearchCompletion* _completion;

}

@property (nonatomic,retain) MKLocalSearchCompletion * completion;              //@synthesize completion=_completion - In the implementation block
+(id)reuseIdentifier;
-(id)titleLabelTextAttributes;
-(id)boldTitleLabelTextAttributes;
-(MKLocalSearchCompletion *)completion;
-(void)setCompletion:(MKLocalSearchCompletion *)arg1 ;
-(void)setSearchResult:(id)arg1 ;
@end

