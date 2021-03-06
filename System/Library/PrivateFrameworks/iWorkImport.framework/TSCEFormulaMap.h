/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 1:10:40 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaMap : NSObject {

	unordered_map<const __CFUUID *, std::__1::vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula> > >, TSCEFormulaOwnerIDHash, TSCEFormulaOwnerIDEqual, std::__1::allocator<std::__1::pair<const __CFUUID *const, std::__1::vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula> > > > > >* mOwnerToFormulasMap;
	int mCount;

}
-(void)addFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 atCellCoordinate:(TSUCellCoord)arg3 ;
-(id)formulaEnumerator;
-(int)count;
@end

