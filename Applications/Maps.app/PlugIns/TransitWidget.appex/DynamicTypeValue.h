/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/PlugIns/TransitWidget.appex/TransitWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DynamicTypeValue : NSObject {

	/*^block*/id _fontProvider;
	float _unscaledValue;

}

@property (nonatomic,copy) id fontProvider;                    //@synthesize fontProvider=_fontProvider - In the implementation block
@property (assign,nonatomic) float unscaledValue;              //@synthesize unscaledValue=_unscaledValue - In the implementation block
@property (nonatomic,readonly) float scaledValue; 
-(id)fontProvider;
-(float)scaledValue;
-(void)setFontProvider:(id)arg1 ;
-(float)unscaledValue;
-(void)setUnscaledValue:(float)arg1 ;
@end
