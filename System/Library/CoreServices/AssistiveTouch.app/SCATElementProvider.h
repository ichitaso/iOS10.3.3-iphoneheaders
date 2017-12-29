/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCATElementProvider <NSObject>
@property (nonatomic,readonly) char providesElements; 
@optional
-(int)numberOfElements;

@required
-(id)firstElementWithOptions:(int*)arg1;
-(id)lastElementWithOptions:(int*)arg1;
-(id)elementBefore:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3;
-(id)elementAfter:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;
-(char)containsElement:(id)arg1;
-(char)providesElements;

@end
