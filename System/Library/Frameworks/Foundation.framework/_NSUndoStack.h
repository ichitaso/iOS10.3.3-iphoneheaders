/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned _max;
	unsigned _count;
	unsigned _nestingLevel;
	_NSUndoObject* _head;

}
-(id)topUndoObject;
-(void)markBegin;
-(char)isDiscardable;
-(id)popUndoObject;
-(void)markEnd;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(char)arg1 ;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(void)_removeBottom;
-(id)_beginMark;
-(id)init;
-(void)removeObject:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(void)removeAllObjects;
-(id)description;
-(char)popAndInvoke;
-(id)groupIdentifier;
-(void)push:(id)arg1 ;
-(unsigned)nestingLevel;
-(unsigned)max;
-(void)setMax:(unsigned)arg1 ;
@end
