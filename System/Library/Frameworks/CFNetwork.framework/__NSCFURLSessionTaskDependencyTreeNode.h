/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:11 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLSessionTaskDependencyDescription, NSMutableArray, NSNumber, NSMutableDictionary;

@interface __NSCFURLSessionTaskDependencyTreeNode : NSObject {

	NSURLSessionTaskDependencyDescription* dependencyDescription;
	NSMutableArray* children;
	NSMutableArray* childrenResourceIdentifiers;
	NSNumber* rootParentStreamID;
	NSMutableDictionary* _dependentToParentStreamIDs;
	NSMutableDictionary* _parentToParentStreamIDs;

}

@property (nonatomic,retain) NSURLSessionTaskDependencyDescription * dependencyDescription; 
@property (nonatomic,retain) NSMutableArray * children; 
@property (nonatomic,retain) NSMutableArray * childrenResourceIdentifiers; 
@property (nonatomic,retain) NSNumber * rootParentStreamID; 
@property (nonatomic,retain) NSMutableDictionary * _dependentToParentStreamIDs;                          //@synthesize dependentToParentStreamIDs=_dependentToParentStreamIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _parentToParentStreamIDs;                             //@synthesize parentToParentStreamIDs=_parentToParentStreamIDs - In the implementation block
-(void)setDependencyDescription:(NSURLSessionTaskDependencyDescription *)arg1 ;
-(void)setChildrenResourceIdentifiers:(NSMutableArray *)arg1 ;
-(void)setRootParentStreamID:(NSNumber *)arg1 ;
-(void)set_dependentToParentStreamIDs:(NSMutableDictionary *)arg1 ;
-(void)set_parentToParentStreamIDs:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)childrenResourceIdentifiers;
-(void)buildTree:(id)arg1 parentsToDependencies:(id)arg2 parentsToChildren:(id)arg3 ;
-(void)makePriorityInfoStartingFromStreamID:(int*)arg1 parentStream:(int)arg2 priorityInfo:(id)arg3 dependentToParentStreamIDs:(id)arg4 parentToParentStreamIDs:(id)arg5 ;
-(NSMutableDictionary *)_dependentToParentStreamIDs;
-(NSMutableDictionary *)_parentToParentStreamIDs;
-(id)makePriorityInfoStartingFromStreamID:(int*)arg1 ;
-(NSURLSessionTaskDependencyDescription *)dependencyDescription;
-(NSNumber *)rootParentStreamID;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)children;
-(void)setChildren:(NSMutableArray *)arg1 ;
@end

