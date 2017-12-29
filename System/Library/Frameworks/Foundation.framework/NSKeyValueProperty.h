/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:13 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSKeyValueContainerClass, NSString;

@interface NSKeyValueProperty : NSObject <NSCopying> {

	NSKeyValueContainerClass* _containerClass;
	NSString* _keyPath;

}
-(id)dependentValueKeyOrKeysIsASet:(char*)arg1 ;
-(void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(char)arg3 ;
-(Class)isaForAutonotifying;
-(void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(char)arg3 ;
-(id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1 ;
-(char)matchesWithoutOperatorComponentsKeyPath:(id)arg1 ;
-(id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1 ;
-(id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(char*)arg2 ;
-(char)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(char)arg4 forwardingValues:(SCD_Struct_NS32*)arg5 ;
-(void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(char)arg4 forwardingValues:(SCD_Struct_NS32)arg5 ;
-(id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(CFSetRef)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyPath;
@end

