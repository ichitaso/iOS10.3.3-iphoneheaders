/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDGLDataBufferAccessor <NSObject>
@required
-(void)setGLfloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;
-(float)GLfloatForAttribute:(id)arg1 atIndex:(unsigned)arg2;
-(void)setCGFloat:(float)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;
-(CGSize*)GLPoint2DForAttribute:(id)arg1 atIndex:(unsigned)arg2;
-(void)setGLPoint2D:(CGSize)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;
-(SCD_Struct_TS19*)GLPoint3DForAttribute:(id)arg1 atIndex:(unsigned)arg2;
-(void)setGLPoint3D:(SCD_Struct_TS19)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;
-(SCD_Struct_IC8*)GLPoint4DForAttribute:(id)arg1 atIndex:(unsigned)arg2;
-(void)setGLPoint4D:(SCD_Struct_IC8)arg1 forAttribute:(id)arg2 atIndex:(unsigned)arg3;

@end

