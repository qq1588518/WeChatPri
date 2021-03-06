//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBaseEvent.h"

@class PrtlBase;

@interface NetCmdEvent : CBaseEvent
{
    PrtlBase *m_prtl;
    struct INetCmdBase *m_netcmd;
    int m_cmdstatus;
    _Bool m_bJustForShort;
}

@property(readonly) struct INetCmdBase *m_netcmd; // @synthesize m_netcmd;
@property(readonly) PrtlBase *m_prtl; // @synthesize m_prtl;
- (void).cxx_destruct;
- (void)OnCmdRecv;
- (void)Stop;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

