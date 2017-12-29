/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileNotes/MobileNotes-Structs.h>
@class NSArray, NSDictionary, NSMutableArray, NSString;

@interface TSDGLFrameBuffer : NSObject {

	NSArray* _textureConfigs;
	NSDictionary* _namesToTextureDict;
	NSMutableArray* _currentTextureLookupInfoByAttachment;
	NSMutableArray* _desiredTextureLookupInfoByAttachment;
	NSArray* _textureConfigsByAttachment;
	NSArray* _textureLookupInfosByAttachment;
	int _currentBindingOption;
	unsigned _currentDrawBuffers[1];
	int _currentDrawBufferCount;
	unsigned _currentReadBuffer;
	unsigned _framebuffer;
	char _isUsingNonDefaultAttachments;
	CVOpenGLESTextureCacheRef _textureCache;
	char _isBound;
	char _shouldDeleteTexturesOnTeardown;
	NSString* _name;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                    //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) char isBound;                                   //@synthesize isBound=_isBound - In the implementation block
@property (assign,nonatomic) char shouldDeleteTexturesOnTeardown;              //@synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
+(int)currentGLFramebuffer;
+(int)currentGLFramebufferWithBindingOption:(int)arg1 ;
+(void)setCurrentGLFramebuffer:(int)arg1 withBindingOption:(int)arg2 ;
+(void)setCurrentGLFramebuffer:(int)arg1 ;
-(void)setupFramebufferIfNecessary;
-(void)bindFramebuffer;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 ;
-(unsigned)currentGLTexture;
-(CVBufferRef)pixelBufferAtIndex:(unsigned)arg1 attachment:(unsigned)arg2 ;
-(void)bindFramebufferWithBindingOption:(int)arg1 ;
-(id)initWithSize:(CGSize)arg1 textureConfigs:(id)arg2 textureCache:(CVOpenGLESTextureCacheRef)arg3 ;
-(id)initWithSize:(CGSize)arg1 textureConfigs:(id)arg2 ;
-(id)initWithSize:(CGSize)arg1 textureCount:(unsigned)arg2 ;
-(CVBufferRef)createTextureCacheTextureWithSize:(CGSize)arg1 pixelBufferOut:(_CVBuffer*)arg2 ;
-(char)p_isCurrentDrawBuffersEqualToDrawbuffers:(unsigned*)arg1 count:(int)arg2 ;
-(void)p_setDrawBuffersAndReadBuffer;
-(void)p_setFramebufferTextureAtAttachmentIndex:(int)arg1 bindingOption:(int)arg2 ;
-(void)unbindFramebufferAndBindGLFramebuffer:(int)arg1 withBindingOption:(int)arg2 ;
-(void)setCurrentTextureIndex:(unsigned)arg1 atAttachment:(unsigned)arg2 ;
-(void)setCurrentTextureNamed:(id)arg1 ;
-(int)currentTextureIndexAtAttachment:(unsigned)arg1 ;
-(void)setCurrentTextureToNextAtAttachment:(unsigned)arg1 ;
-(unsigned)GLTextureAtIndex:(unsigned)arg1 attachment:(unsigned)arg2 ;
-(char)shouldDeleteTexturesOnTeardown;
-(unsigned)currentGLTextureAtAttachment:(unsigned)arg1 ;
-(void)setCurrentTextureIndex:(unsigned)arg1 ;
-(void)setCurrentTextureNamed:(id)arg1 atAttachment:(unsigned)arg2 ;
-(void)setCurrentTexturesToNext;
-(unsigned)GLTextureAtIndex:(unsigned)arg1 ;
-(unsigned)GLTextureNamed:(id)arg1 ;
-(CGSize)sizeOfGLTextureNamed:(id)arg1 ;
-(void)setShouldDeleteTexturesOnTeardown:(char)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithSize:(CGSize)arg1 ;
-(void)teardown;
-(char)isBound;
@end

