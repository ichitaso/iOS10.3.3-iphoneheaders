/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:57 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIKBTree;

@interface UIKBKeyInterval : NSObject {

	UIKBTree* _key;
	double _interval;

}

@property (nonatomic,retain) UIKBTree * key;               //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) double interval;              //@synthesize interval=_interval - In the implementation block
-(UIKBTree *)key;
-(void)dealloc;
-(void)setKey:(UIKBTree *)arg1 ;
-(void)setInterval:(double)arg1 ;
-(id)initWithKey:(id)arg1 interval:(double)arg2 ;
-(double)interval;
@end

