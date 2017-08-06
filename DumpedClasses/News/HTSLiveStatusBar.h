//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UIWindow;

@interface HTSLiveStatusBar : UIView
{
    UIWindow *_overlayWindow;
    UIView *_topBar;
    UILabel *_stringLabel;
    CDUnknownBlockType _actionBlock;
}

+ (void)dismiss;
+ (void)showWithString:(id)arg1 action:(CDUnknownBlockType)arg2;
+ (void)showWithString:(id)arg1;
+ (id)sharedView;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UILabel *stringLabel; // @synthesize stringLabel=_stringLabel;
@property(retain, nonatomic) UIView *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) UIWindow *overlayWindow; // @synthesize overlayWindow=_overlayWindow;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)dismiss;
- (void)showWithString:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
