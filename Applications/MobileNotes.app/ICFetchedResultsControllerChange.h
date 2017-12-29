/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:05 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath;

@interface ICFetchedResultsControllerChange : NSObject {

	id _object;
	unsigned _type;
	NSIndexPath* _indexPath;
	NSIndexPath* _theNewIndexPath;

}

@property (retain) id object;                                  //@synthesize object=_object - In the implementation block
@property (assign) unsigned type;                              //@synthesize type=_type - In the implementation block
@property (retain) NSIndexPath * indexPath;                    //@synthesize indexPath=_indexPath - In the implementation block
@property (retain) NSIndexPath * theNewIndexPath;              //@synthesize theNewIndexPath=_theNewIndexPath - In the implementation block
-(NSIndexPath *)theNewIndexPath;
-(void)setTheNewIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)indexPath;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(id)object;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(void)setObject:(id)arg1 ;
@end
