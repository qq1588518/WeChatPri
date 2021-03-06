//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MsgDataDownloadDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CMessageWrap, CdnRecordMediaInfo, CdnUploadTaskInfo, FavoritesItemDataField, MsgDataDownloadLogic, NSString;
@protocol RecordUploadTaskDelegate;

@interface RecordUploadTask : NSObject <ICdnComMgrExt, PBMessageObserverDelegate, MsgDataDownloadDelegate>
{
    _Bool m_hasDownload;
    _Bool m_enableHitCheck;
    _Bool m_isThumb;
    _Bool m_fromFav;
    FavoritesItemDataField *m_recordData;
    CMessageWrap *m_sourceMsg;
    CMessageWrap *m_recordMsg;
    MsgDataDownloadLogic *m_downloadLogic;
    _Bool _isMsgThumb;
    CdnRecordMediaInfo *_cdnInfo;
    CdnUploadTaskInfo *_uploadResult;
    id <RecordUploadTaskDelegate> _delegate;
}

@property(nonatomic) __weak id <RecordUploadTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isMsgThumb; // @synthesize isMsgThumb=_isMsgThumb;
@property(retain, nonatomic) CdnUploadTaskInfo *uploadResult; // @synthesize uploadResult=_uploadResult;
@property(retain, nonatomic) CdnRecordMediaInfo *cdnInfo; // @synthesize cdnInfo=_cdnInfo;
@property(nonatomic) _Bool isThumb; // @synthesize isThumb=m_isThumb;
@property(retain, nonatomic) FavoritesItemDataField *recordData; // @synthesize recordData=m_recordData;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)checkMd5:(id)arg1;
- (void)onDownloadCancel:(id)arg1;
- (void)onDownloadCommonFail:(id)arg1;
- (void)onDownloadExpireFail:(id)arg1;
- (void)onDownloadSuccess:(id)arg1;
- (void)realDownload;
- (void)startDownload;
- (void)OnCdnUpload:(id)arg1;
- (void)startUpload;
- (void)dealloc;
- (id)initWithThumbInMsg:(id)arg1 fromFav:(_Bool)arg2;
- (id)initWithMsg:(id)arg1 recordData:(id)arg2 isThumb:(_Bool)arg3 fromFav:(_Bool)arg4;
- (id)initWithMsg:(id)arg1 recordData:(id)arg2 isThumb:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

