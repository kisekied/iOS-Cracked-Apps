//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NXASContextTransitioning.h"

@class NSString;

@interface NXASTransitionContext : NSObject <NXASContextTransitioning>
{
    _Bool _animated;
    id <NXASTransitionContextLayoutDelegate> _layoutDelegate;
    id <NXASTransitionContextCompletionDelegate> _completionDelegate;
}

@property(nonatomic) __weak id <NXASTransitionContextCompletionDelegate> completionDelegate; // @synthesize completionDelegate=_completionDelegate;
@property(nonatomic) __weak id <NXASTransitionContextLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(readonly, nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated=_animated;
- (void).cxx_destruct;
- (void)completeTransition:(_Bool)arg1;
- (id)removedSubnodes;
- (id)insertedSubnodes;
- (id)subnodesForKey:(id)arg1;
- (struct CGRect)finalFrameForNode:(id)arg1;
- (struct CGRect)initialFrameForNode:(id)arg1;
- (CDStruct_42a63532)constrainedSizeForKey:(id)arg1;
- (id)layoutForKey:(id)arg1;
- (id)initWithAnimation:(_Bool)arg1 layoutDelegate:(id)arg2 completionDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

