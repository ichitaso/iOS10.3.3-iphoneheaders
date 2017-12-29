/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:32 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/InCallService.app/InCallService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallService/InCallService-Structs.h>
#import <libobjc.A.dylib/AVSpeechSynthesizerDelegate.h>

@protocol ICSAnnouncementDelegate;
@class NSString, AVSpeechSynthesizer, AVSpeechUtterance;

@interface ICSAnnouncement : NSObject <AVSpeechSynthesizerDelegate> {

	id<ICSAnnouncementDelegate> _delegate;
	NSString* _text;
	AVSpeechSynthesizer* _speechSynthesizer;
	AVSpeechUtterance* _speechUtterance;
	double _delay;

}

@property (nonatomic,retain) AVSpeechSynthesizer * speechSynthesizer;              //@synthesize speechSynthesizer=_speechSynthesizer - In the implementation block
@property (nonatomic,retain) AVSpeechUtterance * speechUtterance;                  //@synthesize speechUtterance=_speechUtterance - In the implementation block
@property (assign,nonatomic) id<ICSAnnouncementDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double delay;                                         //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy) NSString * text;                                        //@synthesize text=_text - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSpeechUtterance:(AVSpeechUtterance *)arg1 ;
-(AVSpeechUtterance *)speechUtterance;
-(id)init;
-(void)setDelegate:(id<ICSAnnouncementDelegate>)arg1 ;
-(id<ICSAnnouncementDelegate>)delegate;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)stop;
-(void)start;
-(void)pause;
-(AVSpeechSynthesizer *)speechSynthesizer;
-(void)setSpeechSynthesizer:(AVSpeechSynthesizer *)arg1 ;
-(void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2 ;
-(void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2 ;
@end
