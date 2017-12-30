/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:38:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Messages/iMessageBalloons/RichLinkProvider.bundle/RichLinkProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LPVideo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface RichLinkVideoAttachmentSubstitute : LPVideo <NSSecureCoding> {

	int _index;

}

@property (assign,nonatomic) int index;              //@synthesize index=_index - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(int)index;
-(void)setIndex:(int)arg1 ;
-(id)initWithVideo:(id)arg1 ;
-(char)_shouldEncodeData;
@end
