//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableArray;
@protocol KSAudioQueueDelegate;

@interface KSAudioQueue : NSObject
{
    struct AudioStreamBasicDescription _format;
    unsigned int _maxPacktSize;
    NSMutableArray *_canUseQueueBuf;
    NSMutableArray *_allQueueBuf;
    NSError *_error;
    id <KSAudioQueueDelegate> _delegate;
    NSData *_magicCookie;
    struct OpaqueAudioQueue *_audioQueue;
    unsigned long long _status;
}

@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) struct OpaqueAudioQueue *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(retain, nonatomic) NSData *magicCookie; // @synthesize magicCookie=_magicCookie;
@property(nonatomic) __weak id <KSAudioQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)handleAudioQueuePropertyCallBack:(struct OpaqueAudioQueue *)arg1 property:(unsigned int)arg2;
- (void)handleAudioQueueOutputCallBack:(struct OpaqueAudioQueue *)arg1 buffer:(struct AudioQueueBuffer *)arg2;
- (void)clearData;
- (void)disposeAudioQueue;
- (_Bool)tryStartQueue;
- (_Bool)reset;
- (_Bool)resume;
- (_Bool)pause;
- (void)playEnd;
- (void)prepareStop;
- (void)pauseBeforeStopAudioQueue;
- (void)stop;
- (_Bool)startQueue;
- (_Bool)enqueueBuf:(id)arg1 desNum:(unsigned int)arg2;
- (void)returnQueueBuf:(id)arg1;
- (unsigned int)acquireQueueBufCnt;
- (id)acquireQueueBuf:(unsigned long long *)arg1;
- (_Bool)prepareAudioQueue;
- (_Bool)playedTime:(double *)arg1;
- (void)setError:(id)arg1;
- (void)dealloc;
- (id)initWithFormat:(struct AudioStreamBasicDescription *)arg1 bufferSize:(unsigned int)arg2;

@end

