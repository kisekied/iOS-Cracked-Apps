//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface QQRichMediaPickerPerformanceReportor : NSObject
{
    double _onEntry_timeStamp;
    double _onFirstFramePresended_timeStamp;
    double _onViewDidAppear_timeStamp;
    double _onCaptureSessionSetup_timeStamp;
    double _onCaptureSessionSetup_timeCost;
    double _onCaptureSessionStart_timeStamp;
    double _onCaptureSessionStart_timeCost;
    double _onCaptureSessionStartup_timeStamp;
    double _onCaptureFirstFrame_timeStamp;
    double _onInitRenderView_timeCost;
    double _onInitFaceSDK_timeCost;
    double _onCheckAudioSession_timeStamp;
    double _onCheckAudioSession_timeCost;
    double _onCheckAudioInputRoute_timeStamp;
    double _onCheckAudioInputRoute_timeCost;
    double _onCheckAudioSessionMode_timeStamp;
    double _onCheckAudioSessionMode_timeCost;
    _Bool _isFirstStartup;
    long long _businessType;
    long long _cameraPosition;
    _Bool _isFirstRecord;
    double _onCreateVideoWriterInput;
    double _onCreateVideoWriterInput_cost;
    double _onCreateAudioWriterInput;
    double _onCreateAudioWriterInput_cost;
    double _onDoInit;
    double _onDoInit_cost;
    double _onStartWriting;
    double _onStartWriting_cost;
    double _onStartRecord;
    double _onStartRecord_cost;
    NSMutableDictionary *_report_dic;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableDictionary *report_dic; // @synthesize report_dic=_report_dic;
- (void)doReportStartRecord;
- (void)startRecordFinish;
- (void)startRecordStart;
- (void)startWritingFinish;
- (void)startWritingStart;
- (void)doInitFinish;
- (void)doInitStart;
- (void)createAudioWriterInputFinish;
- (void)createAudioWriterInputStart;
- (void)createVideoWriterInputFinish;
- (void)createVideoWriterInputStart;
- (void)doReport;
- (void)onCheckAudioSessionModeFinish;
- (void)onCheckAudioSessionMode;
- (void)onCheckAudioInputRouteFinish;
- (void)onCheckAudioInputRoute;
- (void)onCheckAudioSessionFinish;
- (void)onCheckAudioSessionStart;
- (void)onInitFaceSDKFinish;
- (void)onInitFaceSDKStart;
- (void)onInitRenderViewFinish;
- (void)onInitRenderViewStart:(long long)arg1;
- (void)setCameraPosition:(long long)arg1;
- (void)onCaptureFirstFrame;
- (void)onCaptureSessionStartup;
- (void)onCaptureSessionStartFinish;
- (void)onCaptureSessionStart;
- (void)onCaptureSessionSetupFinish;
- (void)onCaptureSessionSetupStart;
- (void)onFirstFramePresented;
- (void)onViewDidAppear;
- (void)onEntry;
- (id)init;

@end
