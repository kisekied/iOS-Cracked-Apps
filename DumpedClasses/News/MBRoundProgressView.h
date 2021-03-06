//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface MBRoundProgressView : UIView
{
    _Bool _annular;
    float _progress;
    UIColor *_progressTintColor;
    UIColor *_backgroundTintColor;
}

@property(nonatomic, getter=isAnnular) _Bool annular; // @synthesize annular=_annular;
@property(retain, nonatomic) UIColor *backgroundTintColor; // @synthesize backgroundTintColor=_backgroundTintColor;
@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)observableKeypaths;
- (void)unregisterFromKVO;
- (void)registerForKVO;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

