//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVSpeechSynthesizer, NSString;

@interface ONETTSPlayer : NSObject
{
    NSString *_voiceLange;
    AVSpeechSynthesizer *_synthesizer;
}

+ (_Bool)isTTSPlayerSafe;
+ (void)markTTSPlayerIsSafe:(_Bool)arg1;
+ (void)stop;
+ (void)playTTS:(id)arg1 inBackground:(_Bool)arg2;
+ (void)playTTS:(id)arg1;
+ (id)sharedInstance;
@property(retain) AVSpeechSynthesizer *synthesizer; // @synthesize synthesizer=_synthesizer;
- (void).cxx_destruct;
- (void)stop;
- (void)playTTS:(id)arg1 inBackground:(_Bool)arg2;
- (id)init;

@end

