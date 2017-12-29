/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>
#import <Maps/RAPMenuItem.h>

@class NSSet, RAPCommentQuestion, NSString, NSArray, UIImage;

@interface RAPBadRouteSuggestionsQuestion : RAPQuestion <RAPMenuItem> {

	NSSet* _selectedRouteSuggestions;
	RAPCommentQuestion* _commentQuestion;

}

@property (nonatomic,readonly) NSString * localizedSelectableRoutesPrompt; 
@property (nonatomic,readonly) NSArray * selectableRouteSuggestions; 
@property (nonatomic,copy) NSSet * selectedRouteSuggestions;                            //@synthesize selectedRouteSuggestions=_selectedRouteSuggestions - In the implementation block
@property (assign) char markAllRouteSuggestionsIncorrect; 
@property (nonatomic,readonly) char shouldShowCommentQuestion; 
@property (nonatomic,readonly) RAPCommentQuestion * commentQuestion;                    //@synthesize commentQuestion=_commentQuestion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) int questionCategory; 
@property (nonatomic,readonly) int userAction; 
+(char)_canDisplayForContext:(id)arg1 selection:(id)arg2 ;
-(int)questionCategory;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(RAPCommentQuestion *)commentQuestion;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(NSArray *)selectableRouteSuggestions;
-(char)_areAllSuggestionsSelectableInSet:(id)arg1 ;
-(void)setSelectedRouteSuggestions:(NSSet *)arg1 ;
-(char)markAllRouteSuggestionsIncorrect;
-(void)setMarkAllRouteSuggestionsIncorrect:(char)arg1 ;
-(char)_routeSuggestionsCanBeSubmitted;
-(char)shouldShowCommentQuestion;
-(NSString *)localizedSelectableRoutesPrompt;
-(NSSet *)selectedRouteSuggestions;
-(NSString *)localizedTitle;
-(char)isComplete;
-(int)userAction;
@end

