//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVGLBaseView, AVSlider, UIButton, UIColor, UILabel;

@interface QQAVBeautifyGLView : UIView
{
    AVGLBaseView *_imageView;
    UIView *_backgroundView;
    UIView *_backView;
    UILabel *_contentLabel;
    UIButton *_actionButton;
    AVSlider *_slider;
    id <QQAVBeautifyGLViewDelegate> _delegate;
    _Bool _isShow;
    int _xo;
    UIColor *_uiColor;
}

@property(retain, nonatomic) UIColor *uiColor; // @synthesize uiColor=_uiColor;
- (void)setSliderAndButtonColor:(id)arg1;
- (void)dealloc;
- (void)setContentLabelHidden:(_Bool)arg1;
- (void)setBeautifyWordingViewHidden:(_Bool)arg1;
- (void)setBeautifyValue:(float)arg1;
- (void)hideActionButton;
- (void)hideSlider;
- (void)showBGView;
- (void)startDisplayVideoFrame;
- (void)stopDisplayVideoFrame;
- (void)uninitGLView;
- (void)initGLViewIsNeedMirrorReverse:(_Bool)arg1;
- (void)initGLView;
- (struct CGRect)resetViewFrame:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
- (void)onActionButton;
- (void)onSlider:(id)arg1;
- (void)setButtonTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)getActionButton;
- (id)initWithFrame:(struct CGRect)arg1 uiColor:(id)arg2;

// Remaining properties
@property(nonatomic) id <QQAVBeautifyGLViewDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool isShow; // @dynamic isShow;
@property(retain, nonatomic) AVSlider *slider; // @dynamic slider;

@end

