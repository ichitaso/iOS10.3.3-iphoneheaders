/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:46 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Videos/VideosRentalsQueryControllerProtocol.h>

@protocol VideosRentalsQueryControllerDelegate;
@class VideosQueryDataSource, NSString;

@interface VideosRentalsQueryController : NSObject <VideosRentalsQueryControllerProtocol> {

	char _loggedIn;
	id<VideosRentalsQueryControllerDelegate> _delegate;

}

@property (getter=isLoggedIn,nonatomic,readonly) char loggedIn;                                     //@synthesize loggedIn=_loggedIn - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VideosRentalsQueryControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) VideosQueryDataSource * currentDataSource; 
+(id)rentalQueryForCurrentAccountStatus;
+(id)_loggedInRentalsMediaQuery;
+(id)_loggedOutRentalsMediaQuery;
-(char)isLoggedIn;
-(VideosQueryDataSource *)currentDataSource;
-(void)_accountChanged:(id)arg1 ;
-(void)_rentalExpired:(id)arg1 ;
-(id)_loggedInDataSource;
-(id)_loggedOutDataSource;
-(id)init;
-(void)setDelegate:(id<VideosRentalsQueryControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<VideosRentalsQueryControllerDelegate>)delegate;
-(void)_callDelegate;
@end

