/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:55 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UIKeyboardCandidateBarLayoutAttributes : UICollectionViewLayoutAttributes <NSCopying> {

	char _beginsFirstPage;
	char _endsLastPage;

}

@property (assign,nonatomic) char beginsFirstPage;              //@synthesize beginsFirstPage=_beginsFirstPage - In the implementation block
@property (assign,nonatomic) char endsLastPage;                 //@synthesize endsLastPage=_endsLastPage - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBeginsFirstPage:(char)arg1 ;
-(void)setEndsLastPage:(char)arg1 ;
-(char)beginsFirstPage;
-(char)endsLastPage;
@end
