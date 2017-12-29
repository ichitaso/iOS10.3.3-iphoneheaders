/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>

@class RAPCommentQuestion, RAPTransitLine;

@interface RAPTransitLineQuestion : RAPQuestion {

	RAPCommentQuestion* _commentQuestion;
	RAPTransitLine* _line;

}

@property (nonatomic,readonly) RAPCommentQuestion * commentQuestion;              //@synthesize commentQuestion=_commentQuestion - In the implementation block
@property (nonatomic,readonly) RAPTransitLine * line;                             //@synthesize line=_line - In the implementation block
-(void)_fillSubmittableProblem:(id)arg1 ;
-(RAPCommentQuestion *)commentQuestion;
-(id)_localizedCommentPlaceholderText;
-(int)_commentEmphasis;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 line:(id)arg3 ;
-(RAPTransitLine *)line;
@end

