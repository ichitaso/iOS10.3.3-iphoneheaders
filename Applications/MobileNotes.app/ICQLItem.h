/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:59 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItem.h>

@class ICAttachment;

@interface ICQLItem : QLItem {

	ICAttachment* _attachment;

}

@property (retain) ICAttachment * attachment;              //@synthesize attachment=_attachment - In the implementation block
-(id)initWithAttachment:(id)arg1 ;
-(id)previewItemTitle;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
@end

