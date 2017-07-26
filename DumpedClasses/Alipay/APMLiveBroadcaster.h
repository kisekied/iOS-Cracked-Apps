//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "APMAudioSessionManagerDelegate.h"
#import "VCSessionDelegate.h"

@class APMLiveConfig, APMVideoPreviewViewContainer, LiveBroadcasterFocusView, NSDate, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSTimer, UIImage, UITapGestureRecognizer, VCSimpleSession;

@interface APMLiveBroadcaster : UIView <VCSessionDelegate, APMAudioSessionManagerDelegate>
{
    _Bool _muted;
    unsigned long long _flashMode;
    _Bool _enableBeautyMode;
    _Bool _isPreviewStarted;
    _Bool _isLiveRunning;
    _Bool _startBroadcastingInterfaceCalled;
    _Bool _isLivePausedManually;
    _Bool _liveStartedOnceBefore;
    _Bool _isUserStopBroadcastingHimself;
    _Bool _stopRunningCalled;
    _Bool _needFastRetry;
    _Bool _didReport4AirplaneMode;
    int _rtmpTimeOut;
    int _retryTimeOut;
    UIImage *_loadingImage;
    double _beautyLevel;
    double _rtmpConnectedCost;
    NSDate *_liveFirstStartedDate;
    id <APMLiveBroadcasterDelegate> _liveDelegate;
    UITapGestureRecognizer *_tapGesture;
    long long _netStatus;
    unsigned long long _liveStatus;
    NSObject<OS_dispatch_queue> *_liveQueue;
    long long _animationFinishCalledTimes;
    VCSimpleSession *_session;
    CDUnknownBlockType _liveRunningHandler;
    CDUnknownBlockType _liveStartHandler;
    CDUnknownBlockType _liveStopHandler;
    long long _currentCameraPosition;
    NSString *_rtmpLiveId;
    NSString *_rtmpUrl;
    NSTimer *_rtmpConnectTimer;
    NSTimer *_reportCurTimer;
    NSDate *_liveStartDate;
    NSDate *_livePauseDate;
    double _durationLived;
    double _livePauseTimeInterval;
    NSObject<OS_dispatch_semaphore> *_liveRunningSemp;
    NSDate *_retryStartTime;
    NSDate *_lastEndTime;
    NSDate *_lastRetryTime;
    CDUnknownBlockType _netStatusChangeBlock;
    LiveBroadcasterFocusView *_focusView;
    double _lastPanOffsetY;
    APMVideoPreviewViewContainer *_previewContainer;
    APMLiveConfig *_config;
    NSDate *_rtmpStartDate;
    NSDate *_previousDate;
    NSMutableArray *_pingArray;
    NSLock *_pingArrayLock;
}

@property(retain, nonatomic) NSLock *pingArrayLock; // @synthesize pingArrayLock=_pingArrayLock;
@property(retain, nonatomic) NSMutableArray *pingArray; // @synthesize pingArray=_pingArray;
@property(retain, nonatomic) NSDate *previousDate; // @synthesize previousDate=_previousDate;
@property(nonatomic) _Bool didReport4AirplaneMode; // @synthesize didReport4AirplaneMode=_didReport4AirplaneMode;
@property(retain, nonatomic) NSDate *rtmpStartDate; // @synthesize rtmpStartDate=_rtmpStartDate;
@property(retain, nonatomic) APMLiveConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) APMVideoPreviewViewContainer *previewContainer; // @synthesize previewContainer=_previewContainer;
@property(nonatomic) double lastPanOffsetY; // @synthesize lastPanOffsetY=_lastPanOffsetY;
@property(retain, nonatomic) LiveBroadcasterFocusView *focusView; // @synthesize focusView=_focusView;
@property(copy, nonatomic) CDUnknownBlockType netStatusChangeBlock; // @synthesize netStatusChangeBlock=_netStatusChangeBlock;
@property(nonatomic, getter=isNeedFastRetry) _Bool needFastRetry; // @synthesize needFastRetry=_needFastRetry;
@property(nonatomic) _Bool stopRunningCalled; // @synthesize stopRunningCalled=_stopRunningCalled;
@property(nonatomic) _Bool isUserStopBroadcastingHimself; // @synthesize isUserStopBroadcastingHimself=_isUserStopBroadcastingHimself;
@property(retain, nonatomic) NSDate *lastRetryTime; // @synthesize lastRetryTime=_lastRetryTime;
@property(retain, nonatomic) NSDate *lastEndTime; // @synthesize lastEndTime=_lastEndTime;
@property(retain, nonatomic) NSDate *retryStartTime; // @synthesize retryStartTime=_retryStartTime;
@property(nonatomic, getter=isLiveStartedOnceBefore) _Bool liveStartedOnceBefore; // @synthesize liveStartedOnceBefore=_liveStartedOnceBefore;
@property(nonatomic) _Bool isLivePausedManually; // @synthesize isLivePausedManually=_isLivePausedManually;
@property(nonatomic, getter=isStartBroadcastingInterfaceCalled) _Bool startBroadcastingInterfaceCalled; // @synthesize startBroadcastingInterfaceCalled=_startBroadcastingInterfaceCalled;
@property(nonatomic) _Bool isLiveRunning; // @synthesize isLiveRunning=_isLiveRunning;
@property(nonatomic) _Bool isPreviewStarted; // @synthesize isPreviewStarted=_isPreviewStarted;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *liveRunningSemp; // @synthesize liveRunningSemp=_liveRunningSemp;
@property(nonatomic) double livePauseTimeInterval; // @synthesize livePauseTimeInterval=_livePauseTimeInterval;
@property(nonatomic, getter=getDurationLived) double durationLived; // @synthesize durationLived=_durationLived;
@property(retain, nonatomic) NSDate *livePauseDate; // @synthesize livePauseDate=_livePauseDate;
@property(retain, nonatomic) NSDate *liveStartDate; // @synthesize liveStartDate=_liveStartDate;
@property(retain, nonatomic) NSTimer *reportCurTimer; // @synthesize reportCurTimer=_reportCurTimer;
@property(retain, nonatomic) NSTimer *rtmpConnectTimer; // @synthesize rtmpConnectTimer=_rtmpConnectTimer;
@property(retain, nonatomic) NSString *rtmpUrl; // @synthesize rtmpUrl=_rtmpUrl;
@property(retain, nonatomic) NSString *rtmpLiveId; // @synthesize rtmpLiveId=_rtmpLiveId;
@property(nonatomic) long long currentCameraPosition; // @synthesize currentCameraPosition=_currentCameraPosition;
@property(copy, nonatomic) CDUnknownBlockType liveStopHandler; // @synthesize liveStopHandler=_liveStopHandler;
@property(copy, nonatomic) CDUnknownBlockType liveStartHandler; // @synthesize liveStartHandler=_liveStartHandler;
@property(copy, nonatomic) CDUnknownBlockType liveRunningHandler; // @synthesize liveRunningHandler=_liveRunningHandler;
@property(retain, nonatomic) VCSimpleSession *session; // @synthesize session=_session;
@property(nonatomic) long long animationFinishCalledTimes; // @synthesize animationFinishCalledTimes=_animationFinishCalledTimes;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *liveQueue; // @synthesize liveQueue=_liveQueue;
@property(nonatomic) unsigned long long liveStatus; // @synthesize liveStatus=_liveStatus;
@property(nonatomic) long long netStatus; // @synthesize netStatus=_netStatus;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak id <APMLiveBroadcasterDelegate> liveDelegate; // @synthesize liveDelegate=_liveDelegate;
@property(nonatomic) int retryTimeOut; // @synthesize retryTimeOut=_retryTimeOut;
@property(retain, nonatomic) NSDate *liveFirstStartedDate; // @synthesize liveFirstStartedDate=_liveFirstStartedDate;
@property(nonatomic) double rtmpConnectedCost; // @synthesize rtmpConnectedCost=_rtmpConnectedCost;
@property(nonatomic) int rtmpTimeOut; // @synthesize rtmpTimeOut=_rtmpTimeOut;
@property(nonatomic) double beautyLevel; // @synthesize beautyLevel=_beautyLevel;
@property(nonatomic) _Bool enableBeautyMode; // @synthesize enableBeautyMode=_enableBeautyMode;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
- (void).cxx_destruct;
- (id)getRepresentationString:(unsigned long long)arg1;
- (void)handleLiveStatusChangedTo:(unsigned long long)arg1 liveID:(id)arg2 error:(id)arg3;
- (_Bool)needReportRemoteLog;
- (void)handleNetworkStatusChange:(id)arg1;
- (void)stopMonitoringNetworkStatus;
- (void)startMonitoringNetworkStatus;
- (void)reportCurrtime;
- (void)reportCurrtimerStop;
- (void)reportCurrtimerPause;
- (void)reportCurrtimerStart;
- (void)rtmpConnectTimeOut;
- (void)removeRtmpConnectTimer;
- (void)addRtmpConnectTimer;
- (void)sessionInterruptionEnded;
- (void)sessionWasInterrupted;
- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (void)removeInterruptedBySession:(id)arg1;
- (void)addInterruptedBySession:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
@property(readonly, nonatomic) long long cameraState;
@property(readonly, nonatomic) unsigned long long flashMode; // @dynamic flashMode;
@property(nonatomic) float exposureTargetBias;
@property(readonly, nonatomic) float maxExposureTargetBias;
@property(readonly, nonatomic) float minExposureTargetBias;
@property(nonatomic, getter=isMuted) _Bool muted; // @dynamic muted;
- (void)stopPing;
- (void)pingWithHost:(id)arg1 count:(unsigned long long)arg2;
- (void)doPing;
- (void)handleCongestion:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canSwitchCamera;
- (_Bool)isSupportCameraState:(long long)arg1;
- (void)stopBroadcastingInterval;
- (void)startBroadcastingInterval:(id)arg1 urlPath:(id)arg2;
- (void)retryBroadcastingInternal;
- (_Bool)isTimeoutWithTimeSpecifiedByBusinessCaller;
- (_Bool)isTimeoutWithTimeSpecifiedByOurself;
- (_Bool)canRetryBroadcasting;
- (void)onLiveEnd;
- (void)actionFinished;
- (void)clearBlurAnimtation;
- (void)switchCameraInternal:(CDUnknownBlockType)arg1;
- (void)switchCameraAnimationWithStartedBlock:(CDUnknownBlockType)arg1;
- (struct CGPoint)getCaptureDevicePointForPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)setFocusCursorWithPoint:(struct CGPoint)arg1;
- (double)calculateCoordinatorWithExposureTargetBias:(double)arg1;
- (double)calculateSunOffsetWithExposureTargetBias:(double)arg1;
- (double)calculateExposureWithPanPointY:(double)arg1;
- (double)calculateSunOffsetWithPanPointY:(double)arg1;
- (void)exposurePanAdjust:(id)arg1;
- (void)focusAndExposeTap:(id)arg1;
- (void)onLiveStarted;
- (void)onPreiewStarted;
- (void)layoutItems;
- (void)audioSessionManagerReceivePauseCommand:(id)arg1;
- (void)detectedAverageBandwidth:(long long)arg1 currentBandwidth:(long long)arg2 currentSendBufferSize:(unsigned long long)arg3 videoRate:(long long)arg4;
- (void)didAddCameraSource:(id)arg1;
- (void)connectionStatusChanged:(long long)arg1 error:(id)arg2;
- (void)setFlashMode:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)pauseBroadcasting;
- (void)stopBroadcasting:(CDUnknownBlockType)arg1;
- (void)retryBroadcasting:(CDUnknownBlockType)arg1;
- (void)startBroadcasting:(id)arg1 urlPath:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)stopRunning;
- (void)startRunning:(CDUnknownBlockType)arg1;
- (void)switchCamera:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)doInit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 liveConfig:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
