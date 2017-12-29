/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:23 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Assistant/UIPlugins/Maps.siriUIBundle/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/MKCustomFeatureAnnotation.h>

@class VKCustomFeature, NSString;

@interface _MAMapSnippetCustomFeature : NSObject <MKCustomFeatureAnnotation> {

	VKCustomFeature* _feature;
	SCD_Struct_MA0 _coordinate;
	char _showsBalloonCallout;

}

@property (assign,nonatomic) char showsBalloonCallout;               //@synthesize showsBalloonCallout=_showsBalloonCallout - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SCD_Struct_MA0 coordinate; 
@property (assign,nonatomic) double course; 
-(id)feature;
-(char)showsBalloonCallout;
-(id)initWithCustomFeature:(id)arg1 coordinate:(SCD_Struct_MA0)arg2 ;
-(void)setShowsBalloonCallout:(char)arg1 ;
-(void)setCoordinate:(SCD_Struct_MA0)arg1 ;
-(SCD_Struct_MA0)coordinate;
@end

