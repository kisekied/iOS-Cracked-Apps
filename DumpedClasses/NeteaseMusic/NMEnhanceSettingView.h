//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NMEnhanceKnobDelegate.h"

@class NMEnhanceKnob, NSString, UIButton, UIImageView, UILabel;

@interface NMEnhanceSettingView : UIView <NMEnhanceKnobDelegate>
{
    NMEnhanceKnob *_bassBoostKnob;
    NMEnhanceKnob *_trebleBoostKnob;
    NMEnhanceKnob *_virtualizerKnob;
    _Bool _enabled;
    UIImageView *_stickImageView;
    UILabel *_titleLabel;
    UIButton *_resetButton;
}

+ (double)height;
+ (double)knobOffset2;
+ (double)knobOffset1;
+ (double)knobHMargin;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)resetButtonClicked:(id)arg1;
- (void)enhanceKnobValueChangeFinished:(id)arg1;
- (void)enhanceKnobValueChanged:(id)arg1;
- (void)reloadEhanceSettings;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
