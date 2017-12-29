/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <UIKit/UIView.h>

@protocol SAClientBoundCommand;
@interface SiriGKView : UIView {

	id<SAClientBoundCommand> _command;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) id<SAClientBoundCommand> command;              //@synthesize command=_command - In the implementation block
-(id)selectionResponseTitle;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(char)isSelectable;
-(char)isFullWidth;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
-(id<SAClientBoundCommand>)command;
@end

