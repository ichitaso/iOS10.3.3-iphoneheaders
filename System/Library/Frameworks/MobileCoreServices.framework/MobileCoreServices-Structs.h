/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:17 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct LSContext {
	LSDatabase db;
} LSContext;

typedef struct LSBundleData {
	unsigned long _clas;
	unsigned long long _bundleFlags;
	unsigned long _plistContentFlags;
	unsigned long _itemFlags;
	unsigned char _highResFlags;
	unsigned char _appNapFlags;
	unsigned short _archFlags;
	unsigned _hfsType;
	unsigned _hfsCreator;
	unsigned long long _inoBundle;
	unsigned long long _inoExec;
	int _mtime;
	int _rtime;
	unsigned long long _version;
	unsigned long long _minSystemVersion;
	unsigned long long _execSDKVersion;
	unsigned long long _execMinOSVersion;
	unsigned machOUUIDs[4];
	unsigned long long sequenceNumber;
	unsigned long long itemID;
	unsigned long deviceFamily[4];
	unsigned installType;
	unsigned teamID;
	unsigned identifier;
	unsigned exactIdentifier;
	unsigned name;
	unsigned displayName;
	unsigned companionAppID;
	unsigned filename;
	unsigned bundleVersion;
	unsigned shortVersionString;
	unsigned signerIdentity;
	unsigned codeInfoIdentifier;
	unsigned appType;
	unsigned long long staticDiskUsage;
	unsigned long long purchaserDSID;
	unsigned long long downloaderDSID;
	unsigned long long familyID;
	unsigned vendorName;
	unsigned itemName;
	unsigned long long storefront;
	unsigned long long versionIdentifier;
	unsigned long long ratingRank;
	unsigned ratingLabel;
	unsigned long long genreID;
	unsigned genre;
	unsigned sourceAppIdentifier;
	unsigned appVariant;
	unsigned iconsDict;
	unsigned iconFileNames;
	unsigned execPath;
	unsigned libraryPath;
	unsigned libraryItems;
	unsigned claims;
	unsigned types;
	unsigned services;
	unsigned plugins;
	unsigned activityTypes;
	unsigned schemesWhitelist;
	unsigned alias;
	unsigned appContainerAlias;
	unsigned dataContainerAlias;
	unsigned container;
	unsigned char revision;
	unsigned char retries;
	unsigned char _reserved3;
	unsigned char _reserved4;
	unsigned plistRarities;
	unsigned commonPlistEntries;
	unsigned entitlements;
	unsigned groupContainers;
	unsigned sandboxEnvironmentVariables;
	unsigned _reserved5;
} LSBundleData;

typedef struct _NSZone* NSZoneRef;

typedef const struct __CSStore* CSStoreRef;

typedef struct __CFBundle* CFBundleRef;

typedef struct opaque_pthread_mutex_t {
	long __sig;
	char __opaque[40];
} opaque_pthread_mutex_t;

typedef struct opaque_pthread_cond_t {
	long __sig;
	char __opaque[24];
} opaque_pthread_cond_t;

typedef struct __CFArray* CFArrayRef;

typedef struct __asl_object_s* asl_object_sRef;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	unsigned char field5[16];
	int field6;
	unsigned field7;
	unsigned field8;
	unsigned field9[8];
	unsigned field10;
	unsigned field11;
	unsigned field12;
	unsigned field13;
	unsigned field14;
} SCD_Struct_UT9;

