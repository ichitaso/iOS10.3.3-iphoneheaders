/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:18 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/Plugins/MessagesDataKeyboardPlugin.bundle/MessagesDataKeyboardPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate, NSString;


@protocol TILinguisticDataSourceMessage <NSObject>
@property (nonatomic,copy,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSString * recipient; 
@property (nonatomic,copy,readonly) NSString * body; 
@property (nonatomic,readonly) char fromMe; 
@optional
-(char)fromMe;

@required
-(NSString *)body;
-(NSDate *)dateSent;
-(NSString *)recipient;

@end
