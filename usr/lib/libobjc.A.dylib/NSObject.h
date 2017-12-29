/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /usr/lib/libobjc.A.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/libobjc.A.dylib-Structs.h>
#import <libobjc.A.dylib/NSObject.h>
@class NSString;


@protocol NSObject
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@optional
-(NSString *)debugDescription;

@required
-(oneway void)release;
-(Class)class;
-(char)respondsToSelector:(SEL)arg1;
-(char)isKindOfClass:(Class)arg1;
-(char)isEqual:(id)arg1;
-(id)self;
-(id)performSelector:(SEL)arg1;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
-(char)isProxy;
-(char)isMemberOfClass:(Class)arg1;
-(char)conformsToProtocol:(id)arg1;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(NSZone*)zone;
-(unsigned)hash;
-(Class)superclass;
-(NSString *)description;

@end


@class NSString;

@interface NSObject <NSObject> {

	Class isa;

}

@property (retain,readonly) id autoContentAccessingProxy; 
@property (readonly) Class classForKeyedArchiver; 
@property (assign) void* observationInfo; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)replacementObjectForPortCoder:(id)arg1 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
+(void)cancelPreviousPerformRequestsWithTarget:(id)arg1 ;
+(char)implementsSelector:(SEL)arg1 ;
+(char)instancesImplementSelector:(SEL)arg1 ;
+(void)load;
+(void)setVersion:(int)arg1 ;
+(int)version;
+(Class)classForKeyedUnarchiver;
+(id)classFallbacksForKeyedArchiver;
+(char)_shouldAddObservationForwardersForKey:(id)arg1 ;
+(void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2 ;
+(id)_keysForValuesAffectingValueForKey:(id)arg1 ;
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableOrderedSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2 ;
+(char)accessInstanceVariablesDirectly;
+(id)__allocWithZone_OA:(NSZone*)arg1 ;
+(id)_copyDescription;
+(id)init;
+(void)dealloc;
+(id)description;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(void)load;
+(char)isAncestorOfObject:(id)arg1 ;
+(char)resolveClassMethod:(SEL)arg1 ;
+(char)resolveInstanceMethod:(SEL)arg1 ;
+(id)init;
+(id)copy;
+(oneway void)release;
+(id)alloc;
+(Class)class;
+(void)dealloc;
+(char)respondsToSelector:(SEL)arg1 ;
+(char)isKindOfClass:(Class)arg1 ;
+(id)new;
+(char)isEqual:(id)arg1 ;
+(void)initialize;
+(id)self;
+(id)performSelector:(SEL)arg1 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
+(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
+(char)isProxy;
+(char)isMemberOfClass:(Class)arg1 ;
+(char)conformsToProtocol:(id)arg1 ;
+(id)retain;
+(id)autorelease;
+(unsigned)retainCount;
+(NSZone*)zone;
+(unsigned)hash;
+(Class)superclass;
+(id)description;
+(id)debugDescription;
+(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
+(id)mutableCopy;
+(char)isSubclassOfClass:(Class)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)copyWithZone:(NSZone*)arg1 ;
+(/*function pointer*/void*)instanceMethodForSelector:(SEL)arg1 ;
+(void)doesNotRecognizeSelector:(SEL)arg1 ;
+(char)_isDeallocating;
+(id)methodSignatureForSelector:(SEL)arg1 ;
+(char)allowsWeakReference;
+(char)instancesRespondToSelector:(SEL)arg1 ;
+(id)forwardingTargetForSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(void)forwardInvocation:(id)arg1 ;
+(id)mutableCopyWithZone:(NSZone*)arg1 ;
+(void)load;
+(char)_tryRetain;
+(char)retainWeakReference;
+(char)isFault;
-(char)_isToManyChangeInformation;
-(void)_receiveBox:(id)arg1 ;
-(id*)_observerStorage;
-(id)addChainedObservers:(id)arg1 ;
-(id)addObservationTransformer:(/*^block*/id)arg1 ;
-(id)addObserver:(id)arg1 ;
-(void)receiveObservedValue:(id)arg1 ;
-(id)addObserverBlock:(/*^block*/id)arg1 ;
-(void)receiveObservedError:(id)arg1 ;
-(void)finishObserving;
-(void)removeObservation:(id)arg1 ;
-(Class)classForPortCoder;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(id)addObserver:(id)arg1 forObservableKeyPath:(id)arg2 ;
-(void)setObservation:(id)arg1 forObservingKeyPath:(id)arg2 ;
-(void)removeObservation:(id)arg1 forObservableKeyPath:(id)arg2 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(char)arg4 modes:(id)arg5 ;
-(void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(char)arg3 ;
-(void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(char)arg4 ;
-(void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(char)arg3 modes:(id)arg4 ;
-(void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ;
-(void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4 ;
-(id)autoContentAccessingProxy;
-(id)replacementObjectForCoder:(id)arg1 ;
-(char)_allowsDirectEncoding;
-(char)implementsSelector:(SEL)arg1 ;
-(Class)classForCoder;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(id)replacementObjectForKeyedArchiver:(id)arg1 ;
-(id)_pendingChangeNotificationsArrayForKey:(id)arg1 create:(char)arg2 ;
-(void)_changeValueForKey:(id)arg1 key:(id)arg2 key:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_changeValueForKeys:(id*)arg1 count:(unsigned)arg2 maybeOldValuesDict:(id)arg3 usingBlock:(/*^block*/id)arg4 ;
-(id)_implicitObservationInfo;
-(void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2 ;
-(void)_willChangeValuesForKeys:(id)arg1 ;
-(void)_didChangeValuesForKeys:(id)arg1 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
-(void)_changeValueForKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setObservationInfo:(void*)arg1 ;
-(void*)observationInfo;
-(void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned)arg2 usingObjects:(id)arg3 ;
-(void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned)arg2 usingObjects:(id)arg3 ;
-(void)willChangeValueForKey:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)willChange:(unsigned)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)didChange:(unsigned)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3 ;
-(void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)_removeObserver:(id)arg1 forProperty:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(char)_isKVOA;
-(char)validateValue:(inout id*)arg1 forKeyPath:(id)arg2 error:(out id*)arg3 ;
-(char)validateValue:(inout id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(id)mutableOrderedSetValueForKeyPath:(id)arg1 ;
-(id)mutableSetValueForKeyPath:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setValuesForKeysWithDictionary:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)dictionaryWithValuesForKeys:(id)arg1 ;
-(id)mutableArrayValueForKeyPath:(id)arg1 ;
-(id)mutableSetValueForKey:(id)arg1 ;
-(id)mutableOrderedSetValueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setNilValueForKey:(id)arg1 ;
-(id)replacementObjectForArchiver:(id)arg1 ;
-(Class)classForArchiver;
-(unsigned long)_cfTypeID;
-(char)isNSDate__;
-(char)isNSSet__;
-(char)isNSObject__;
-(char)isNSCFConstantString__;
-(char)isNSValue__;
-(char)isNSOrderedSet__;
-(char)isNSTimeZone__;
-(char)isNSDictionary__;
-(char)isNSArray__;
-(char)isNSString__;
-(char)isNSNumber__;
-(char)isNSData__;
-(void)__dealloc_zombie;
-(id)__retain_OA;
-(oneway void)__release_OA;
-(id)__autorelease_OA;
-(char)___tryRetain_OA;
-(id)_copyDescription;
-(NSString *)description;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)init;
-(id)copy;
-(oneway void)release;
-(Class)class;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(char)isKindOfClass:(Class)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)self;
-(id)performSelector:(SEL)arg1 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 ;
-(id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 ;
-(char)isProxy;
-(char)isMemberOfClass:(Class)arg1 ;
-(char)conformsToProtocol:(id)arg1 ;
-(id)retain;
-(id)autorelease;
-(unsigned)retainCount;
-(NSZone*)zone;
-(unsigned)hash;
-(Class)superclass;
-(NSString *)description;
-(NSString *)debugDescription;
-(/*function pointer*/void*)methodForSelector:(SEL)arg1 ;
-(id)mutableCopy;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(char)_isDeallocating;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(char)allowsWeakReference;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(char)_tryRetain;
-(char)retainWeakReference;
-(char)isFault;
-(void)finalize;
@end

