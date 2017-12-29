/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:47 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPTablePartSection.h>

@protocol RAPMenu;
@class RAPQuestion;

@interface RAPReportComposerSearchSubcategorySection : RAPTablePartSection {

	RAPQuestion*<RAPMenu> _question;
	/*^block*/id _selection;

}
-(id)initWithQuestion:(id)arg1 selection:(/*^block*/id)arg2 ;
-(int)rowsCount;
-(id)cellForRowAtIndex:(int)arg1 ;
-(void)didSelectCellForRowAtIndex:(int)arg1 tableIndexPath:(id)arg2 ;
@end

