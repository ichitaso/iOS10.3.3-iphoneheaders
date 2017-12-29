/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:39 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPMenuQuestion.h>
#import <Maps/RAPQuestionAcceptingAlternatePlace.h>
#import <Maps/RAPMenuItem.h>

@protocol RAPPlace;
@class NSString, UIImage;

@interface RAPTransitSubcategoryQuestion : RAPMenuQuestion <RAPQuestionAcceptingAlternatePlace, RAPMenuItem> {

	id<RAPPlace> _reportedPlace;
	char _showsStationInfoIncorrect;
	char _showsBadDirections;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) UIImage * image; 
@property (nonatomic,readonly) int questionCategory; 
@property (nonatomic,readonly) int userAction; 
+(id)localizedTransitTitle;
-(int)analyticTarget;
-(int)questionCategory;
-(id)mainMenuQuestionCategories;
-(char)canDisplayMenuItemForQuestionCategory:(int)arg1 ;
-(id)followUpQuestionForCategory:(int)arg1 ;
-(void)_fillSubmittableProblem:(id)arg1 ;
-(id)_initWithReport:(id)arg1 parentQuestion:(id)arg2 place:(id)arg3 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 ;
-(NSString *)localizedDescription;
-(UIImage *)image;
-(NSString *)localizedTitle;
-(int)userAction;
@end

