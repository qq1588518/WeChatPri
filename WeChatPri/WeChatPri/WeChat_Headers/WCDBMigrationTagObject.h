//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCDBCoding-Protocol.h"

@class NSString;

@interface WCDBMigrationTagObject : NSObject <WCDBCoding>
{
    NSString *m_sessionName;
    NSString *m_fileName;
    long long m_startTime;
    long long m_endTime;
    long long m___rowID;
}

+ (const map_490096f0 *)getFileValueTagIndexMap;
+ (id)getFileValueTypeTable;
+ (const map_490096f0 *)getPackedValueTagIndexMap;
+ (id)getPackedValueTypeTable;
+ (const map_64c9abee *)getValueNameIndexMap;
+ (id)getValueTable;
+ (id)dummyObject;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) long long m_endTime; // @synthesize m_endTime;
@property(nonatomic) long long m_startTime; // @synthesize m_startTime;
@property(retain, nonatomic) NSString *m_fileName; // @synthesize m_fileName;
@property(retain, nonatomic) NSString *m_sessionName; // @synthesize m_sessionName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const WCDBCondition_94982106 *)db_m_endTime;
- (const WCDBCondition_94982106 *)db_m_startTime;
- (const WCDBCondition_22fabacd *)db_m_fileName;
- (const WCDBCondition_22fabacd *)db_m_sessionName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

