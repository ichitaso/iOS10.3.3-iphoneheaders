/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:07 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLPreviewItem.h>

@class NSURL, NSString, NoteAttachmentPresentation, DOMHTMLElement;

@interface NoteAttachmentPresentationOccurence : NSObject <QLPreviewItem> {

	NoteAttachmentPresentation* _presentation;
	DOMHTMLElement* _element;

}

@property (nonatomic,readonly) NoteAttachmentPresentation * presentation;              //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,readonly) DOMHTMLElement * element;                               //@synthesize element=_element - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * previewItemURL; 
@property (nonatomic,readonly) NSString * previewItemTitle; 
-(id)initWithPresentation:(id)arg1 element:(id)arg2 ;
-(char)showsUpInRange:(id)arg1 ;
-(id)init;
-(NSURL *)previewItemURL;
-(DOMHTMLElement *)element;
-(NoteAttachmentPresentation *)presentation;
@end

