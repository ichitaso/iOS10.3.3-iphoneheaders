/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:14 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDocumentInteractionControllerDelegate <NSObject>
@optional
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1;
-(CGRect*)documentInteractionControllerRectForPreview:(id)arg1;
-(id)documentInteractionControllerViewForPreview:(id)arg1;
-(void)documentInteractionControllerWillBeginPreview:(id)arg1;
-(void)documentInteractionControllerDidEndPreview:(id)arg1;
-(void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
-(void)documentInteractionControllerWillPresentOpenInMenu:(id)arg1;
-(void)documentInteractionControllerDidDismissOpenInMenu:(id)arg1;
-(void)documentInteractionController:(id)arg1 willBeginSendingToApplication:(id)arg2;
-(void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2;
-(char)documentInteractionController:(id)arg1 canPerformAction:(SEL)arg2;
-(char)documentInteractionController:(id)arg1 performAction:(SEL)arg2;

@end

