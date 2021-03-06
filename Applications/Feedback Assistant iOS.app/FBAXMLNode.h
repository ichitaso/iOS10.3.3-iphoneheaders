/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
@class NSString, NSDictionary, NSArray;

@interface FBAXMLNode : NSObject {

	NSString* _name;
	NSString* _content;
	NSDictionary* _attributes;
	NSArray* _children;

}

@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSString * content;                     //@synthesize content=_content - In the implementation block
@property (retain) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (retain) NSArray * children;                     //@synthesize children=_children - In the implementation block
-(id)initWithXMLNodePtr:(xmlNode*)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)content;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
@end

