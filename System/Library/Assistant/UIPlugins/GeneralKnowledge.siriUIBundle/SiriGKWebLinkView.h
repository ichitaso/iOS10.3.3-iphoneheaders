/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKView.h>

@class UILabel, SAGKLinkedAnswer;

@interface SiriGKWebLinkView : SiriGKView {

	UILabel* _titleLabel;
	UILabel* _urlLabel;
	UILabel* _descriptionLabel;
	SAGKLinkedAnswer* _answer;

}
-(float)_baselineOffset;
-(id)initWithLinkedAnswer:(id)arg1 safariBackURL:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
