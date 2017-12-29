/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/News.app/PlugIns/NewsToday.appex/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FTInterfaceConfiguration : NSObject <NSCopying> {

	float _rowHeight;
	float _verticalLayoutMargin;
	unsigned _thumbnailSizePreset;
	unsigned _sourceNameImageSizePreset;

}

@property (nonatomic,readonly) float rowHeight;                                 //@synthesize rowHeight=_rowHeight - In the implementation block
@property (nonatomic,readonly) float verticalLayoutMargin;                      //@synthesize verticalLayoutMargin=_verticalLayoutMargin - In the implementation block
@property (nonatomic,readonly) unsigned thumbnailSizePreset;                    //@synthesize thumbnailSizePreset=_thumbnailSizePreset - In the implementation block
@property (nonatomic,readonly) unsigned sourceNameImageSizePreset;              //@synthesize sourceNameImageSizePreset=_sourceNameImageSizePreset - In the implementation block
-(unsigned)thumbnailSizePreset;
-(unsigned)sourceNameImageSizePreset;
-(id)initWithRowHeight:(float)arg1 verticalLayoutMargin:(float)arg2 thumbnailSizePreset:(unsigned)arg3 sourceNameImageSizePreset:(unsigned)arg4 ;
-(float)verticalLayoutMargin;
-(id)init;
-(float)rowHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

