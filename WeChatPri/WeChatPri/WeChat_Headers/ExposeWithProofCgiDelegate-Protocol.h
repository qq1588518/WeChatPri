//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, ProofImgItem;

@protocol ExposeWithProofCgiDelegate <NSObject>

@optional
- (void)OnUploadImgToCdnSuccess:(NSString *)arg1 withProofImgItem:(ProofImgItem *)arg2;
- (void)OnUploadImgToCdnFail:(NSString *)arg1;
- (void)OnGetExposeLinkError;
- (void)OnGetExposeLinkSuccess:(NSString *)arg1;
- (void)OnExposeWithProofError;
- (void)OnExposeWithProofSuccess;
@end

