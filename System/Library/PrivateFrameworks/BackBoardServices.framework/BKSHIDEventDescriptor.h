/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString;

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding> {

	unsigned _hidEventType;

}

@property (readonly) unsigned hidEventType;                         //@synthesize hidEventType=_hidEventType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorWithEventType:(unsigned)arg1 ;
+(id)reusableDescriptorWithEventType:(unsigned)arg1 ;
+(id)reusableVendorDefinedDescriptorWithPage:(unsigned)arg1 usage:(unsigned)arg2 ;
+(id)reusableKeyboardDescriptorWithPage:(unsigned)arg1 usage:(unsigned)arg2 ;
+(char)supportsSecureCoding;
-(char)describes:(id)arg1 ;
-(unsigned)hidEventType;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithEventType:(unsigned)arg1 ;
@end

