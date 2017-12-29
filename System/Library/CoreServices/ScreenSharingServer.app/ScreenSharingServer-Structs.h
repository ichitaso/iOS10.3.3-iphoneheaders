/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:45 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/ScreenSharingServer.app/ScreenSharingServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct __CFUserNotification* CFUserNotificationRef;

typedef struct CGContext* CGContextRef;

typedef struct Rect {
	short top;
	short left;
	short bottom;
	short right;
} Rect;

typedef struct {
	unsigned char bitsPerPixel;
	unsigned char depth;
	unsigned char bigEndianFlag;
	unsigned char trueColorFlag;
	unsigned short redMax;
	unsigned short greenMax;
	unsigned short blueMax;
	unsigned char redShift;
	unsigned char greenShift;
	unsigned char blueShift;
	unsigned char padding;
	unsigned char padding2;
	unsigned char padding3;
} SCD_Struct_VN4;

typedef struct Point {
	short v;
	short h;
} Point;

typedef struct in6_addr {
	/*function pointer*/void* __u6_addr;
	unsigned char __u6_addr8[16];
	unsigned short __u6_addr16[8];
	unsigned __u6_addr32[4];
} in6_addr;

typedef struct UnsignedWide {
	unsigned lo;
	unsigned hi;
} UnsignedWide;

typedef struct ViewerInfo {
	int viewerInfoSet;
	unsigned appID;
	unsigned appMajorVersion;
	unsigned appMinorVersion;
	unsigned appBugFixVersion;
	unsigned OSMajorVersion;
	unsigned OSMinorVersion;
	unsigned OSBugFixVersion;
	unsigned char supportedCommands[32];
} ViewerInfo;

typedef struct kevent {
	unsigned ident;
	short filter;
	unsigned short flags;
	unsigned fflags;
	int data;
	void udata;
} kevent;

typedef struct z_stream_s {
	char* next_in;
	unsigned avail_in;
	unsigned total_in;
	char* next_out;
	unsigned avail_out;
	unsigned total_out;
	char* msg;
	internal_state state;
	/*function pointer*/void* zalloc;
	/*function pointer*/void* zfree;
	void opaque;
	int data_type;
	unsigned adler;
	unsigned reserved;
} z_stream_s;

typedef struct UserInfoEncoding {
	unsigned char sendUserInfoFlag;
	unsigned char updateUserInfoFlag;
	z_stream_s zlib_stream;
} UserInfoEncoding;

typedef struct SubZlibCodecInfo {
	unsigned char initializedFlag;
	char unused;
	z_stream_s stream;
} SubZlibCodecInfo;

typedef struct ZRLEInfo {
	SubZlibCodecInfo zinfo;
	char* screenBuffer;
	unsigned screenBufferSize;
	unsigned compressedScreenSize;
} ZRLEInfo;

typedef struct {
	MVSCacheEntryInfo cache;
	unsigned short lastCacheMatch;
	unsigned short cacheIndex;
	unsigned cacheTotalEntryCount;
	unsigned short hashTable;
	unsigned cacheMiss;
	unsigned cacheHit;
	unsigned hashCollision;
	unsigned cacheHitInc;
	int cacheDisabledFlag;
} SCD_Struct_VN14;

typedef struct MVSInfo {
	unsigned short width;
	unsigned short height;
	unsigned short lastCache;
	unsigned short lastTile;
	unsigned tileRepeatCount;
	unsigned short tilesPerRow;
	short startVertical;
	Rect secondaryUpdateRect;
	unsigned char secondaryUpdateFlag;
	unsigned char screenChangeFlag;
	Rect screenChangeRect;
	Rect lastSecondaryUpdateRect;
	unsigned char lastSecondaryUpdateRectFlag;
	unsigned char lastSecondaryUpdateRectIgnoredFlag;
	char unused[2];
	unsigned lastSecondaryUpdateRectTime;
	Point lastMouse;
	unsigned short mouseDelta;
	char* buff;
	char* buffSecondRow;
	void DCTstate;
	unsigned char sentFirstUpdate;
	MVSCoefficeintInfo tiles;
	SCD_Struct_VN14 cacheInfo;
} MVSInfo;

typedef struct sockaddr_in6 {
	unsigned char sin6_len;
	unsigned char sin6_family;
	unsigned short sin6_port;
	unsigned sin6_flowinfo;
	in6_addr sin6_addr;
	unsigned sin6_scope_id;
} sockaddr_in6;

typedef struct {
	int sockFD;
	/*function pointer*/void* ndata;
	unsigned viewerMajorVersion;
	unsigned viewerMinorVersion;
	unsigned char enhancedViewer;
	unsigned char viewerWantsExtendedServerInfo;
	unsigned short mode;
	unsigned state;
	unsigned short authState;
	unsigned char VersionRFB3dot888Viewer;
	unsigned char viewerInitializationFlags;
	unsigned char guestAppFlag;
	unsigned scrapTransferSession;
	unsigned char autoUpdateFlag;
	unsigned autoUpdateMininumInterval;
	unsigned guestAppToken;
	Rect viewerAutoUpdateRectangle;
	Rect viewerAutoUpdateRectangleScaled;
	Rect viewerFrameUpdateRectangle;
	Rect viewerFrameUpdateRectangleScaled;
	Rect maxFrameUpdateRect;
	Rect changedRectangle;
	SCD_Struct_VN4 viewerDesiredPixelFormat;
	unsigned char changedRectangleAvailable;
	unsigned char viewerFrameUpdateRequest;
	unsigned char lastDepth;
	unsigned char lastMouseMask;
	Point lastMouseLocation;
	Point lastMouseLocationVirtual;
	unsigned lastMouseTime;
	unsigned lastUpdateTime;
	unsigned codec;
	unsigned oldCodec;
	unsigned supportedLosslessCodec;
	unsigned char copyRectSupported;
	unsigned char sendCursorAlphaFlag;
	unsigned char sendCursorImageFlag;
	unsigned char sendCursorPositionFlag;
	unsigned char sentInitialCursorImageFlag;
	unsigned char sentInitialCursorPositionFlag;
	unsigned char sendDesktopSizeFlag;
	unsigned char sendDisplayInfoFlag;
	unsigned char sendDisplayInfo2Flag;
	unsigned char sendCacheEncodingsFlag;
	unsigned char capsLockFlag;
	unsigned char shiftKeyFlag;
	unsigned char controlKeyFlag;
	unsigned char optionKeyFlag;
	unsigned char commandKeyFlag;
	unsigned char signalFileCopyThreadFlag;
	unsigned char enable_lastrect;
	int compress_level;
	int jpeg_quality;
	z_stream_s zs_struct[4];
	int zs_active[4];
	int zs_level[4];
	UserInfoEncoding userInfo;
	SubZlibCodecInfo zinfo[4];
	/*function pointer*/void* trans_func;
	char* trans_table;
	unsigned short translatedPixelSize;
	unsigned char pwChallenge[16];
	/*function pointer*/void* firstCmdBuffer;
	/*function pointer*/void* lastCmdBuffer;
	/*function pointer*/void* firstFrameBuffer;
	/*function pointer*/void* lastFrameBuffer;
	/*function pointer*/void* sendBufferTCP;
	void bufferPtrCR;
	void TCPSendCR;
	void sendBufferCR;
	_opaque_pthread_t sendThread;
	void mouseChangeCR;
	unsigned totalBytesSent;
	int totalBytesPending;
	unsigned char sendResolutionChange;
	unsigned char desktopSizeEncodingSupported;
	unsigned char screenIsScaled;
	unsigned char updatedScaleFactor;
	double screenScaleFactor;
	char* scaledScreenBitmap;
	unsigned scaledScreenBitmapSize;
	unsigned short scaledWidth;
	unsigned short scaledHeight;
	unsigned short scaledRowBytes;
	unsigned short lastWidth;
	unsigned short lastHeight;
	short lastGlobalOriginX;
	short lastGlobalOriginY;
	unsigned short updateSemaphoreTimeLimit;
	void screenBase;
	unsigned screenRowBytes;
	ARDBigNum DHRandNum;
	ARDBigNum DHPrime;
	ARDBigNum DHGenerator;
	unsigned short DHPrimeSize;
	unsigned char updateDisplayInfoFlag;
	unsigned char stealthControlFlag;
	_CCCryptor AESkeyReceiveCC;
	_CCCryptor AESkeySend;
	_CCCryptor AESKeyECB;
	_CCCryptor AESKeyECBSend;
	unsigned securityFlags;
	unsigned char observeFlag;
	unsigned char absControlFlag;
	unsigned char askFlag;
	unsigned char sendTCP;
	unsigned char discconnectViewer;
	unsigned char stopScreenRedirect;
	unsigned char sendThreadInitFlag;
	unsigned char onlyShareScreenFlag;
	unsigned char onlySendMainDisplayFlag;
	unsigned char setDisplayFlag;
	unsigned char preauthorizedFlag;
	unsigned char kerberosAuthFlag;
	unsigned short currentDisplayIndex;
	unsigned char codecChanged;
	unsigned char sse2AvailableFlag;
	unsigned modifierFlags;
	unsigned char sentFrameToViewerFlag;
	unsigned char pendingCmd;
	unsigned char pendingCmdFlag;
	unsigned char readFirstScreenFlag;
	char* dropEventData;
	unsigned dropEventDataLength;
	unsigned dropEventDataLengthUncompressed;
	unsigned dropEventDataAmtRead;
	char* clipboardData;
	unsigned clipboardDataLength;
	unsigned clipboardDataLengthUncompressed;
	unsigned clipboardDataAmtRead;
	unsigned char clipboardDataOnlyPromisesFlag;
	unsigned char autoPasteboardCmdSet;
	unsigned short autoPasteboardCmd;
	sockaddr_in6 viewerAddress;
	unsigned maxBandwidth;
	unsigned short encryption;
	unsigned char encryptionKey[16];
	unsigned char userNameUTF8[512];
	void ScreenChangeCR;
	ScreenChangeInfo firstScreenChange;
	ScreenChangeInfo lastScreenChange;
	UnsignedWide startTime;
	unsigned lastCommunicationTimeLo;
	unsigned lastUpdateSinceCaptured;
	unsigned char OpenGLScalingSupported;
	unsigned char gotNormalUpdate;
	unsigned char updateEncryptionInfoFlag;
	unsigned encryptionMethod;
	unsigned short encryptionLevel;
	unsigned char newAESkey[16];
	unsigned char newIV[16];
	unsigned char encryptEverythingReceivedFlag;
	unsigned char encryptEverythingSentFlag;
	unsigned char IVsend[16];
	unsigned char IVreceive[16];
	unsigned messageIndex;
	unsigned messageIndexReceive;
	char* decryptedMessagePtr;
	char* encryptedMessagePtr;
	__CFString addressString;
	MVSInfo multiVariantInfo;
	/*function pointer*/void* encryptedData;
	CachedCursor knownCursors;
	char* screenReadBuffer;
	unsigned screenReadBufferSize;
	Rect currentGlobalRect;
	RFBSenderInfoUDP sendInfo;
	RFBReceiverInfoUDP receiveInfo;
	ZRLEInfo zrle;
	ScaledScreenInfo scaledScreen[25];
	unsigned char lowLatencyConnectionFlag;
	unsigned char serialNumberAuthFlag;
	unsigned char vfbFlag;
	char unused2;
	unsigned authenticationUID;
	ViewerInfo info;
	unsigned lastWriteTime;
	unsigned char postedMouseEvent;
	unsigned char displayChangeFlag;
	unsigned char disableMVSCacheFlag;
	unsigned char sendNextUpdateFlag;
	unsigned char dsDisplayStreamScaled[25];
	NSObject<OS_dispatch_semaphore>* dsSemaphore;
	unsigned char dsStopped[25];
	short dsTop[25];
	short dsLeft[25];
	int dsStoppedLock;
	unsigned short dsRefCount;
	NSObject<OS_dispatch_queue>* dsQueue;
	void dsCR;
	unsigned viewerIndex;
	unsigned screenUpdateCount;
	unsigned pendingLimitTCP;
	unsigned estimatedBytesPerSecondTCP;
	BOOL closingTheConnection;
	unsigned char userOnlyAllowsObserveFlag;
	unsigned char invitedSessionFlag;
	unsigned char AppleCare;
	unsigned char AppleID;
	void sysInfoNotificationRef;
	void controlNotificationRef;
	char* sysInfoArguements;
	/*function pointer*/void* sysInfoRequest;
	void sysInfoRequestCR;
	BOOL AppleCareAllowedToGetSysstemInfoFlag;
	NSObject<OS_xpc_object>* xpcConnection;
	__CFRunLoopTimer keepAliveTimerRef;
	unsigned lowWaterMarkAmount;
	int lowWaterMarkKqueue;
	kevent lowWaterMarkKevent;
	unsigned char sentFirstScreen;
	unsigned lastSecondaryUpdateTick;
	srp_context srpContext;
	unsigned char srpStep;
	unsigned long long srpStartMachTime;
} SCD_Struct_VN17;
