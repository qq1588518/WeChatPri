//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCardRefreshComponent.h"

@class UIActivityIndicatorView;

@interface WCShareCardListRefreshHeader : WCCardRefreshComponent
{
    double _insetTDelta;
    UIActivityIndicatorView *_loadingView;
}

+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) double insetTDelta; // @synthesize insetTDelta=_insetTDelta;
- (void).cxx_destruct;
- (void)setPullingPercent:(double)arg1;
- (void)endRefreshing;
- (void)setState:(long long)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

