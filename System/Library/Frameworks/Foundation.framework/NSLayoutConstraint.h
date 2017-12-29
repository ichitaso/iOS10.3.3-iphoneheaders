/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:15 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSISConstraint.h>

@class _NSConstraintDescriptionLayoutRelationshipNode, NSLayoutAnchor, NSString, NSSet;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {

	id _container;
	id _firstAnchor;
	id _secondAnchor;
	float _constant;
	float _loweredConstant;
	id _markerAndPositiveExtraVar;
	id _negativeExtraVar;
	unsigned long long _layoutConstraintFlags;
	float _coefficient;
	float _priority;

}

@property (setter=_setAssociatedRelationshipNode:) _NSConstraintDescriptionLayoutRelationshipNode * _associatedRelationshipNode; 
@property (setter=_setFirstAnchor:,copy) NSLayoutAnchor * firstAnchor;                                                                               //@synthesize firstAnchor=_firstAnchor - In the implementation block
@property (setter=_setRelation:) int relation; 
@property (setter=_setMultiplier:) float multiplier; 
@property (setter=_setSecondAnchor:,copy) NSLayoutAnchor * secondAnchor;                                                                             //@synthesize secondAnchor=_secondAnchor - In the implementation block
@property (copy) NSString * identifier; 
@property (readonly) char hasBeenLowered; 
@property (assign) id container; 
@property (setter=_setContainerDeclaredConstraint:) char _containerDeclaredConstraint; 
@property (readonly) float unsatisfaction; 
@property (copy) NSString * symbolicConstant; 
@property (assign,setter=_setLoweredConstantNeedsUpdate:,getter=_loweredConstantNeedsUpdate,nonatomic) char loweredConstantNeedsUpdate; 
@property (copy,readonly) NSSet * _referencedLayoutItems; 
@property (assign) float priority; 
@property (assign) char shouldBeArchived; 
@property (readonly) id firstItem; 
@property (readonly) int firstAttribute; 
@property (readonly) id secondItem; 
@property (readonly) int secondAttribute; 
@property (assign) float constant; 
@property (getter=isActive) char active; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_findCommonAncestorOfItem:(id)arg1 andItem:(id)arg2 ;
+(id)constraintWithAnchor:(id)arg1 relatedBy:(int)arg2 toAnchor:(id)arg3 multiplier:(float)arg4 constant:(float)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 ;
+(void)_addOrRemoveConstraints:(id)arg1 activate:(char)arg2 ;
+(void)_setLegacyDecodingOnly:(char)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 theme:(id)arg8 ;
+(id)constraintWithAnchor:(id)arg1 relatedBy:(int)arg2 constant:(float)arg3 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7 ;
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned)arg2 metrics:(id)arg3 views:(id)arg4 ;
+(void)activateConstraints:(id)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 constant:(float)arg4 ;
+(void)deactivateConstraints:(id)arg1 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 constant:(float)arg6 ;
+(id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 ;
-(NSSet *)_referencedLayoutItems;
-(id)equationDescription;
-(NSLayoutAnchor *)firstAnchor;
-(NSLayoutAnchor *)secondAnchor;
-(_NSConstraintDescriptionLayoutRelationshipNode *)_associatedRelationshipNode;
-(void)_setAssociatedRelationshipNode:(id)arg1 ;
-(void)_setContainerDeclaredConstraint:(char)arg1 ;
-(id)_ancestorRelationshipNodes;
-(id)sourceRelationshipHierarchy;
-(unsigned)_constraintValueHashIncludingConstant:(char)arg1 includeOtherMutableProperties:(char)arg2 ;
-(char)_isEqualToConstraintValue:(id)arg1 includingConstant:(char)arg2 includeOtherMutableProperties:(char)arg3 ;
-(id)_constraintValueCopy;
-(void)_setMutablePropertiesFromConstraint:(id)arg1 ;
-(float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1 ;
-(float)unsatisfaction;
-(id)_negativeExtraVar;
-(void)_setFirstAnchor:(id)arg1 ;
-(void)_setSecondAnchor:(id)arg1 ;
-(id)_constantDescriptionForDTrace;
-(float)_allowedMagnitudeForIntegralizationAdjustment;
-(CGSize)_engineToContainerScalingCoefficients;
-(void)setHasBeenLowered:(char)arg1 ;
-(char)_lowerIntoExpression:(id)arg1 reportingConstantIsRounded:(char*)arg2 ;
-(char)_addLoweredExpression:(id)arg1 toEngine:(id)arg2 integralizationAdjustment:(float)arg3 lastLoweredConstantWasRounded:(char)arg4 mutuallyExclusiveConstraints:(id*)arg5 ;
-(float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float*)arg1 ;
-(id)_symbolicConstant;
-(void)_ensureValueMaintainsArbitraryLimit:(float*)arg1 ;
-(void)_setSymbolicConstant:(id)arg1 ;
-(char)_tryToChangeContainerGeometryWithUndoHandler:(/*^block*/id)arg1 ;
-(char)_effectiveConstant:(float*)arg1 error:(id*)arg2 ;
-(void)_setSymbolicConstant:(id)arg1 constant:(float)arg2 ;
-(id)_descriptionforSymbolicConstant;
-(id)descriptionAccessory;
-(id)asciiArtDescription;
-(id)_priorityDescription;
-(id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2 ;
-(void)_setRelation:(int)arg1 ;
-(float)priorityForVariable:(id)arg1 ;
-(id)_deallocSafeDescription;
-(void)_makeExtraVars;
-(void)_setActive:(char)arg1 mutuallyExclusiveConstraints:(id*)arg2 ;
-(void)_tryToActivateMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(void)_forceSatisfactionMeasuringUnsatisfactionChanges:(id*)arg1 andMutuallyExclusiveConstraints:(id*)arg2 ;
-(char)_nsib_isRedundantInEngine:(id)arg1 ;
-(void)_setFirstItem:(id)arg1 attribute:(int)arg2 ;
-(void)_setSecondItem:(id)arg1 attribute:(int)arg2 ;
-(float)dissatisfaction;
-(void)_setLoweredConstantNeedsUpdate:(char)arg1 ;
-(char)_loweredConstantNeedsUpdate;
-(char)_isIBPrototypingLayoutConstraint;
-(char)_existsInEngine:(id)arg1 ;
-(char)_isFudgeable;
-(float)_fudgeIncrement;
-(void)_setMarkerAndPositiveErrorVar:(id)arg1 ;
-(void)_setNegativeExtraVar:(id)arg1 ;
-(char)_deferDTraceLogging;
-(void)_setDeferDTraceLogging:(char)arg1 ;
-(int)_primitiveConstraintType;
-(void)_setPrimitiveConstraintType:(int)arg1 ;
-(id)_allocationDescription;
-(void)_clearWeakContainerReference;
-(char)_containerDeclaredConstraint;
-(id)_constraintByReplacingView:(id)arg1 withView:(id)arg2 ;
-(char)_describesSameRestrictionAsConstraint:(id)arg1 ;
-(id)_loweredExpression;
-(void)_explainUnsatisfaction;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(char)isActive;
-(NSString *)identifier;
-(void)setConstant:(float)arg1 ;
-(void)setAnimations:(id)arg1 ;
-(id)_layoutEngine;
-(id)container;
-(void)_removeFromEngine:(id)arg1 ;
-(char)hasBeenLowered;
-(void)_containerGeometryDidChange;
-(float)priority;
-(void)setPriority:(float)arg1 ;
-(void)_addToEngine:(id)arg1 ;
-(void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2 ;
-(char)shouldBeArchived;
-(void)setContainer:(id)arg1 ;
-(float)constant;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)firstItem;
-(id)secondItem;
-(int)firstAttribute;
-(int)secondAttribute;
-(void)setActive:(char)arg1 ;
-(int)relation;
-(id)animations;
-(void)_setMultiplier:(float)arg1 ;
-(float)multiplier;
-(char)_nsib_isRedundant;
-(char)_addToEngine:(id)arg1 integralizationAdjustment:(float)arg2 mutuallyExclusiveConstraints:(id*)arg3 ;
-(char)_loweredConstantIsRounded;
-(id)nsis_descriptionOfVariable:(id)arg1 ;
-(char)nsis_shouldIntegralizeVariable:(id)arg1 ;
-(char)nsis_valueOfVariableIsUserObservable:(id)arg1 ;
-(id)_markerAndPositiveExtraVar;
-(NSString *)symbolicConstant;
-(void)setSymbolicConstant:(NSString *)arg1 ;
-(void)setShouldBeArchived:(char)arg1 ;
-(int)_constraintType;
-(char)_referencesLayoutItem:(id)arg1 ;
-(id)_identifier;
-(void)_setIdentifier:(id)arg1 ;
@end

