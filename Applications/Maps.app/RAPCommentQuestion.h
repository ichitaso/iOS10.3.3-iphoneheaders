/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPQuestion.h>

@class NSString, NSArray;

@interface RAPCommentQuestion : RAPQuestion {

	NSString* _commentsTitle;
	NSString* _commentsPlaceholderText;
	int _emphasis;
	NSString* _localizedPhotosPickerExplanation;
	NSString* _comment;
	NSArray* _photos;

}

@property (nonatomic,readonly) NSString * commentsTitle;                                 //@synthesize commentsTitle=_commentsTitle - In the implementation block
@property (nonatomic,readonly) NSString * commentsPlaceholderText;                       //@synthesize commentsPlaceholderText=_commentsPlaceholderText - In the implementation block
@property (assign,nonatomic) int emphasis;                                               //@synthesize emphasis=_emphasis - In the implementation block
@property (nonatomic,copy) NSString * comment;                                           //@synthesize comment=_comment - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                             //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) NSString * localizedPhotosPickerLabel; 
@property (nonatomic,readonly) NSString * localizedPhotosPickerExplanation;              //@synthesize localizedPhotosPickerExplanation=_localizedPhotosPickerExplanation - In the implementation block
+(id)validatedComment:(id)arg1 ;
+(unsigned)maximumCommentLength;
+(id)_localizedInformationTitle;
+(id)_localizedMoreInformationTitle;
+(id)_localizedOptionalInformationTitle;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(char)_isNowComplete;
-(NSString *)localizedPhotosPickerLabel;
-(NSString *)localizedPhotosPickerExplanation;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 title:(id)arg3 placeholderText:(id)arg4 emphasis:(int)arg5 localizedPhotosPickerExplanation:(id)arg6 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 title:(id)arg3 placeholderText:(id)arg4 emphasis:(int)arg5 ;
-(void)_setCommentsTitle:(id)arg1 placeholderText:(id)arg2 ;
-(void)_setLocalizedPhotosPickerExplanation:(id)arg1 ;
-(unsigned)remainingCharacters;
-(NSString *)commentsTitle;
-(NSString *)commentsPlaceholderText;
-(int)emphasis;
-(void)setEmphasis:(int)arg1 ;
-(NSArray *)photos;
-(void)setPhotos:(NSArray *)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
@end

