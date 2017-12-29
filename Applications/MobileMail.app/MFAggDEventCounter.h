/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MFMailboxPredictionEventCounter.h>

@class NSString;

@interface MFAggDEventCounter : NSObject <MFMailboxPredictionEventCounter> {

	NSString* _modelName;

}

@property (nonatomic,copy) NSString * modelName;              //@synthesize modelName=_modelName - In the implementation block
-(void)countEvent:(unsigned)arg1 context:(unsigned)arg2 prediction:(id)arg3 mailbox:(id)arg4 ;
-(id)_keyForEvent:(unsigned)arg1 context:(unsigned)arg2 prediction:(id)arg3 mailbox:(id)arg4 ;
-(char)_predictionWasCorrect:(id)arg1 mailbox:(id)arg2 ;
-(id)_nameForContext:(unsigned)arg1 numPredictions:(unsigned long long)arg2 ;
-(id)_nameForEvent:(unsigned)arg1 wasCorrect:(char)arg2 ;
-(void)dealloc;
-(void)setModelName:(NSString *)arg1 ;
-(NSString *)modelName;
-(id)initWithModelName:(id)arg1 ;
@end

