//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONEQRScanDelegate.h"

@class NSString, ONEQRScanView, UIButton;

@interface ONEFusionScanCommponent : NSObject <ONEQRScanDelegate>
{
    CDUnknownBlockType _scanCallback;
    ONEQRScanView *_scanView;
    UIButton *_closeButton;
}

+ (id)sharedComponent;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) ONEQRScanView *scanView; // @synthesize scanView=_scanView;
@property(copy, nonatomic) CDUnknownBlockType scanCallback; // @synthesize scanCallback=_scanCallback;
- (void).cxx_destruct;
- (void)scanView:(id)arg1 pickUpMessage:(id)arg2;
- (void)onCloseBtnClosed:(id)arg1;
- (void)showAlertMessage;
- (void)removeScanView;
- (void)launchScanWithFrame:(struct CGRect)arg1 superView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

