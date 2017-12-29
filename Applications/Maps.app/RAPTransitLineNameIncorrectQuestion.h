/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:43 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPTransitLineQuestion.h>
#import <Maps/RAPCorrectableNameProtocol.h>
#import <Maps/RAPInstrumentableTarget.h>
#import <Maps/RAPMenuItem.h>

@class RAPPlaceCorrectableString, NSString, RAPCommentQuestion, UIImage;

@interface RAPTransitLineNameIncorrectQuestion : RAPTransitLineQuestion <RAPCorrectableNameProtocol, RAPInstrumentableTarget, RAPMenuItem> {

	RAPPlaceCorrectableString* _correctableName;

}

@property (nonatomic,readonly) RAPPlaceCorrectableString * correctableName;              //@synthesize correctableName=_correctableName - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RAPCommentQuestion * commentQuestion; 
@property (nonatomic,readonly) NSString * originalName; 
@property (nonatomic,readonly) char isNameCorrectionRequired; 
@property (nonatomic,readonly) int analyticTarget; 
@property (nonatomic,readonly) int backAction; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) int questionCategory; 
@property (nonatomic,readonly) int userAction; 
-(int)analyticTarget;
-(int)questionCategory;
-(char)_isRecursivelyComplete;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(char)_isNowComplete;
-(void)setCorrectedName:(id)arg1 ;
-(char)isNameCorrectionRequired;
-(RAPPlaceCorrectableString *)correctableName;
-(id)_localizedCommentPlaceholderText;
-(int)_commentEmphasis;
-(NSString *)localizedTitle;
-(NSString *)originalName;
-(int)userAction;
@end

