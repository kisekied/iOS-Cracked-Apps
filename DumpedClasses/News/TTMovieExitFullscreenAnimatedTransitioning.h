//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class NSString, UIView<TTMovieFullscreenProtocol>;

@interface TTMovieExitFullscreenAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    UIView<TTMovieFullscreenProtocol> *_movieView;
}

@property(nonatomic) __weak UIView<TTMovieFullscreenProtocol> *movieView; // @synthesize movieView=_movieView;
- (void).cxx_destruct;
- (void)p_postExitFullScreenNoti;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)initWithFullscreenMovieView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
