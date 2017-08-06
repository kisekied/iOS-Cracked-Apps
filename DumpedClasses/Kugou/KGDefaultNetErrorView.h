//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGSkinButton, KGSkinView, KGThemeLabel, NSString;

@interface KGDefaultNetErrorView : UIView
{
    float _errorBtnWidth;
    KGSkinView *_centerView;
    KGSkinButton *_button;
    KGThemeLabel *_label;
    NSString *_text;
    struct CGPoint _fitPoint;
}

@property(nonatomic) struct CGPoint fitPoint; // @synthesize fitPoint=_fitPoint;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) float errorBtnWidth; // @synthesize errorBtnWidth=_errorBtnWidth;
@property(readonly, nonatomic) KGThemeLabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) KGSkinButton *button; // @synthesize button=_button;
@property(readonly, nonatomic) KGSkinView *centerView; // @synthesize centerView=_centerView;
- (void).cxx_destruct;
- (void)fitPointStep2;
- (void)fitPoint:(_Bool)arg1;
- (void)layoutSubviews;
- (void)privateInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)autoAdujstFrameWithTranslucentBar:(_Bool)arg1 AndHeight:(double)arg2;
- (void)autoAdujstFrame;

@end
