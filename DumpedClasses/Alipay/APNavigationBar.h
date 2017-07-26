//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationBar.h"

@class CAGradientLayer, UIColor, UIView;

@interface APNavigationBar : UINavigationBar
{
    UIColor *_currentColor;
    UIColor *_curBottmLineColor;
    CAGradientLayer *_gradientLayer;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIColor *curBottmLineColor; // @synthesize curBottmLineColor=_curBottmLineColor;
@property(retain, nonatomic) UIColor *currentColor; // @synthesize currentColor=_currentColor;
- (void).cxx_destruct;
- (void)setBarTintColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (void)layoutSubviews;
- (void)hiddenGradientLayer;
- (void)setMaskLayerWithColor:(id)arg1;
- (void)setBarStyleWithColor:(id)arg1 translucent:(_Bool)arg2;
- (void)setNavigationBarColorForIos10;
- (struct CGRect)backgroundLayerFrame;

@end
