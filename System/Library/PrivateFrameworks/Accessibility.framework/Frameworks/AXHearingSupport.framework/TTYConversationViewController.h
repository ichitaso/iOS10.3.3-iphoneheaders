/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 31, 2017 at 12:56:06 AM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/TTYUtteranceCellDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@protocol OS_dispatch_queue;
@class TTYTextView, CAShapeLayer, UIButton, AXHADispatchTimer, NSMutableCharacterSet, NSDictionary, NSMutableString, NSLock, NSObject, TTYConversation, DDParsecCollectionViewController, UITableView, TUCall, NSMutableArray, NSString;

@interface TTYConversationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, TTYUtteranceCellDelegate, UITextViewDelegate> {

	TTYTextView* _textView;
	CAShapeLayer* _bubbleLayer;
	UIButton* _gaButton;
	AXHADispatchTimer* _ttyPredictionsTimer;
	NSMutableCharacterSet* _unsupportedCharacterSet;
	NSDictionary* _asciiSubstitutions;
	AXHADispatchTimer* _voAnnouncementTimer;
	NSMutableString* _voAnnouncementBuffer;
	NSLock* _realtimeSendLock;
	NSObject*<OS_dispatch_queue> _utteranceRequestQueue;
	char _processingUtteranceBuffer;
	TTYConversation* _conversation;
	DDParsecCollectionViewController* _lookupController;
	UITableView* _tableView;
	TUCall* _call;
	NSMutableArray* _utteranceBuffer;

}

@property (nonatomic,retain) DDParsecCollectionViewController * lookupController;              //@synthesize lookupController=_lookupController - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                          //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) TTYConversation * conversation;                                   //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) TUCall * call;                                                    //@synthesize call=_call - In the implementation block
@property (nonatomic,retain) NSMutableArray * utteranceBuffer;                                 //@synthesize utteranceBuffer=_utteranceBuffer - In the implementation block
@property (assign,nonatomic) char processingUtteranceBuffer;                                   //@synthesize processingUtteranceBuffer=_processingUtteranceBuffer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerForConversation:(id)arg1 ;
+(id)viewControllerForCall:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)_define:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(TUCall *)call;
-(TTYConversation *)conversation;
-(void)setConversation:(TTYConversation *)arg1 ;
-(id)callContainingUtterance;
-(void)utteranceCellDidUpdateContent:(id)arg1 ;
-(void)setCall:(TUCall *)arg1 ;
-(void)callDidConnect:(id)arg1 ;
-(void)setUtteranceBuffer:(NSMutableArray *)arg1 ;
-(void)setTextViewUtterance:(id)arg1 ;
-(void)setLookupController:(DDParsecCollectionViewController *)arg1 ;
-(void)setupTableView;
-(void)deviceDidReceiveCharacter:(unsigned short)arg1 forUtterance:(id)arg2 ;
-(void)updateTableViewSizeAnimated:(char)arg1 ;
-(void)endCall:(id)arg1 ;
-(void)shareCallInfo:(id)arg1 ;
-(id)addUtterance:(id)arg1 ;
-(void)setProcessingUtteranceBuffer:(char)arg1 ;
-(NSMutableArray *)utteranceBuffer;
-(id)cellAtIndexPath:(id)arg1 ;
-(void)processUtteranceQueue;
-(void)_sendNewUtteranceString:(id)arg1 atIndex:(unsigned)arg2 forCellPath:(id)arg3 ;
-(char)processingUtteranceBuffer;
-(void)updateVoiceOverAnnouncement:(unsigned short)arg1 ;
-(void)sendNewUtteranceString:(id)arg1 ;
-(id)textViewUtterance;
-(void)realtimeTextDidChange;
-(void)gaButtonPressed:(id)arg1 ;
-(void)updateViewForKeyboard:(id)arg1 ;
-(char)utteranceIsSelected;
-(DDParsecCollectionViewController *)lookupController;
@end
