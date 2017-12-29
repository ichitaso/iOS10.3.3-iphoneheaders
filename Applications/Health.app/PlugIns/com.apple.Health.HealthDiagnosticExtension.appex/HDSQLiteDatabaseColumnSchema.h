/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:28 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Health.app/PlugIns/com.apple.Health.HealthDiagnosticExtension.appex/com.apple.Health.HealthDiagnosticExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject {

	char _isAutoincrement;
	char _isPrimaryKey;
	char _isNullable;
	NSString* _name;
	NSString* _type;
	NSString* _defaultValue;
	NSString* _foreignKeyTargetTable;
	NSString* _foreignKeyTargetColumn;
	int _deletionAction;

}

@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) char isAutoincrement;                         //@synthesize isAutoincrement=_isAutoincrement - In the implementation block
@property (assign,nonatomic) char isPrimaryKey;                            //@synthesize isPrimaryKey=_isPrimaryKey - In the implementation block
@property (assign,nonatomic) char isNullable;                              //@synthesize isNullable=_isNullable - In the implementation block
@property (nonatomic,copy) NSString * defaultValue;                        //@synthesize defaultValue=_defaultValue - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetTable;               //@synthesize foreignKeyTargetTable=_foreignKeyTargetTable - In the implementation block
@property (nonatomic,copy) NSString * foreignKeyTargetColumn;              //@synthesize foreignKeyTargetColumn=_foreignKeyTargetColumn - In the implementation block
@property (assign,nonatomic) int deletionAction;                           //@synthesize deletionAction=_deletionAction - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSString *)foreignKeyTargetTable;
-(NSString *)foreignKeyTargetColumn;
-(char)isNullable;
-(void)setIsNullable:(char)arg1 ;
-(void)setIsPrimaryKey:(char)arg1 ;
-(void)setForeignKeyTargetTable:(NSString *)arg1 ;
-(void)setForeignKeyTargetColumn:(NSString *)arg1 ;
-(void)setDeletionAction:(int)arg1 ;
-(char)isAutoincrement;
-(void)setIsAutoincrement:(char)arg1 ;
-(char)isPrimaryKey;
-(int)deletionAction;
@end

