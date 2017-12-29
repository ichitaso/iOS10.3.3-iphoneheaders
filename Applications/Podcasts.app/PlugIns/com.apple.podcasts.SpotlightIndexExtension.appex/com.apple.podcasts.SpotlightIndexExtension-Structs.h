/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:29 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct MTIndexPath {
	int batch;
	int object;
} MTIndexPath;

typedef struct _NSZone* NSZoneRef;

typedef struct objc_method* objc_methodRef;

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct CGImage* CGImageRef;

typedef struct __CFString* CFStringRef;

typedef struct CGSize {
	float width;
	float height;
} CGSize;

typedef struct __CFArray* CFArrayRef;

typedef struct sqlite3* sqlite3Ref;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long __sig;
	char __opaque[24];
} opaque_pthread_cond_t;

typedef struct {
	int year;
	char month;
	char day;
	char hour;
	char minute;
	double second;
} SCD_Struct_IM13;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct UIEdgeInsets {
	float top;
	float left;
	float bottom;
	float right;
} UIEdgeInsets;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IM16;

typedef struct {
	SCD_Struct_IM16 start;
	SCD_Struct_IM16 duration;
} SCD_Struct_IM17;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	unsigned long field1;
	id field2;
	unsigned long field3;
	unsigned long field4[5];
} SCD_Struct_AE21;

typedef struct __CTFramesetter* CTFramesetterRef;

typedef struct __CTFrame* CTFrameRef;

typedef struct {
	int expectedNumberOfInsertions;
	float loadFactor;
	int numberOfHashFunctions;
} SCD_Struct_IM24;

typedef struct {
	char* bytes;
	unsigned byteCount;
} SCD_Struct_IM25;

typedef struct {
	SCD_Struct_IM24 bloomFilterSpecification;
	int windowWidth;
} SCD_Struct_IM26;

typedef struct {
	SCD_Struct_IM24 field1;
	int field2;
} SCD_Struct_IM27;

typedef struct {
	float loadFactor;
	int numberOfHashFunctions;
	int windowWidth;
} SCD_Struct_IM28;

typedef struct UIOffset {
	float horizontal;
	float vertical;
} UIOffset;
