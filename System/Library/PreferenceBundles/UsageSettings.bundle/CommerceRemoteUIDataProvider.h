/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 4:29:20 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISPropertyListProvider.h>

@class CommerceRemoteUIDelegate;

@interface CommerceRemoteUIDataProvider : ISPropertyListProvider {

	char _plist;
	CommerceRemoteUIDelegate* _parent;

}

@property (assign,getter=isPlist,nonatomic) char plist;                             //@synthesize plist=_plist - In the implementation block
@property (assign,nonatomic,__weak) CommerceRemoteUIDelegate * parent;              //@synthesize parent=_parent - In the implementation block
-(char)isPlist;
-(void)_setFailureType:(id)arg1 ;
-(void)setPlist:(char)arg1 ;
-(char)parseData:(id)arg1 returningError:(id*)arg2 ;
-(CommerceRemoteUIDelegate *)parent;
-(void)setParent:(CommerceRemoteUIDelegate *)arg1 ;
@end

