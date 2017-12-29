/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:52 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BookCore/BookCore-Structs.h>
@class NSString, _BCExternalURLOpenPrompterResponseValue, BCBlockCallThrottler, NSCache;

@interface BCExternalURLOpenPrompter : NSObject {

	NSString* _promptTitle;
	NSString* _cancelButtonTitle;
	NSString* _okButtonTitle;
	/*^block*/id _urlOpenerBlock;
	/*^block*/id _alertPresenterBlock;
	_BCExternalURLOpenPrompterResponseValue* _dummyCacheValue;
	NSCache* _responseCache;
	BCBlockCallThrottler* _throttler;

}

@property (nonatomic,retain) _BCExternalURLOpenPrompterResponseValue * dummyCacheValue;              //@synthesize dummyCacheValue=_dummyCacheValue - In the implementation block
@property (nonatomic,retain) NSCache * responseCache;                                                //@synthesize responseCache=_responseCache - In the implementation block
@property (nonatomic,retain) BCBlockCallThrottler * throttler;                                       //@synthesize throttler=_throttler - In the implementation block
@property (nonatomic,copy) NSString * promptTitle;                                                   //@synthesize promptTitle=_promptTitle - In the implementation block
@property (nonatomic,copy) NSString * cancelButtonTitle;                                             //@synthesize cancelButtonTitle=_cancelButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * okButtonTitle;                                                 //@synthesize okButtonTitle=_okButtonTitle - In the implementation block
@property (nonatomic,copy) id urlOpenerBlock;                                                        //@synthesize urlOpenerBlock=_urlOpenerBlock - In the implementation block
@property (nonatomic,copy) id alertPresenterBlock;                                                   //@synthesize alertPresenterBlock=_alertPresenterBlock - In the implementation block
-(id)alertPresenterBlock;
-(id)_formattedMessageStringForURL:(id)arg1 ;
-(char)_shouldShowPromptForURL:(id)arg1 ;
-(void)_askUserIfShouldOpenURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSCache *)responseCache;
-(void)maybePromptUserBeforeOpeningExternalURL:(id)arg1 shouldThrottle:(char)arg2 ;
-(id)urlOpenerBlock;
-(void)setUrlOpenerBlock:(id)arg1 ;
-(void)setAlertPresenterBlock:(id)arg1 ;
-(_BCExternalURLOpenPrompterResponseValue *)dummyCacheValue;
-(void)setDummyCacheValue:(_BCExternalURLOpenPrompterResponseValue *)arg1 ;
-(void)setResponseCache:(NSCache *)arg1 ;
-(NSString *)promptTitle;
-(void)setPromptTitle:(NSString *)arg1 ;
-(void)setCancelButtonTitle:(NSString *)arg1 ;
-(NSString *)cancelButtonTitle;
-(void)setOkButtonTitle:(NSString *)arg1 ;
-(NSString *)okButtonTitle;
-(BCBlockCallThrottler *)throttler;
-(void)setThrottler:(BCBlockCallThrottler *)arg1 ;
@end

