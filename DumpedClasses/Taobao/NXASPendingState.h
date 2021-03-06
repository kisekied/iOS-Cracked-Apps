//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NXASDisplayNodeViewProperties.h"
#import "NXASDisplayProperties.h"

@class CALayer, NSDictionary, NSString, UIColor;

@interface NXASPendingState : NSObject <NXASDisplayNodeViewProperties, NXASDisplayProperties>
{
    unsigned long long autoresizingMask;
    unsigned int edgeAntialiasingMask;
    struct CGRect frame;
    struct CGRect bounds;
    struct CGColor *backgroundColor;
    struct CGColor *borderLeftColor;
    struct CGColor *borderRightColor;
    struct CGColor *borderTopColor;
    struct CGColor *borderBottomColor;
    id contents;
    double alpha;
    double cornerRadius;
    long long contentMode;
    struct CGPoint anchorPoint;
    struct CGPoint position;
    double zPosition;
    double contentsScale;
    struct CATransform3D transform;
    struct CATransform3D sublayerTransform;
    struct CGColor *shadowColor;
    double shadowOpacity;
    struct CGSize shadowOffset;
    double shadowRadius;
    double borderWidth;
    double borderLeftWidth;
    double borderRightWidth;
    double borderTopWidth;
    double borderBottomWidth;
    struct CGColor *borderColor;
    CALayer *borderLeftLayer;
    CALayer *borderRightLayer;
    CALayer *borderTopLayer;
    CALayer *borderBottomLayer;
    _Bool asyncTransactionContainer;
    _Bool isAccessibilityElement;
    NSString *accessibilityLabel;
    NSString *accessibilityHint;
    NSString *accessibilityValue;
    unsigned long long accessibilityTraits;
    struct CGRect accessibilityFrame;
    NSString *accessibilityLanguage;
    _Bool accessibilityElementsHidden;
    _Bool accessibilityViewIsModal;
    _Bool shouldGroupAccessibilityChildren;
    NSString *accessibilityIdentifier;
    NSDictionary *backgroundImage;
    struct {
        unsigned int needsDisplay:1;
        unsigned int needsLayout:1;
        unsigned int setClipsToBounds:1;
        unsigned int setOpaque:1;
        unsigned int setNeedsDisplayOnBoundsChange:1;
        unsigned int setAutoresizesSubviews:1;
        unsigned int setAutoresizingMask:1;
        unsigned int setFrame:1;
        unsigned int setBounds:1;
        unsigned int setBackgroundColor:1;
        unsigned int setBorderLeftColor:1;
        unsigned int setBorderRightColor:1;
        unsigned int setBorderTopColor:1;
        unsigned int setBorderBottomColor:1;
        unsigned int setTintColor:1;
        unsigned int setContents:1;
        unsigned int setHidden:1;
        unsigned int setAlpha:1;
        unsigned int setCornerRadius:1;
        unsigned int setContentMode:1;
        unsigned int setNeedsDisplay:1;
        unsigned int setAnchorPoint:1;
        unsigned int setPosition:1;
        unsigned int setZPosition:1;
        unsigned int setContentsScale:1;
        unsigned int setTransform:1;
        unsigned int setSublayerTransform:1;
        unsigned int setUserInteractionEnabled:1;
        unsigned int setExclusiveTouch:1;
        unsigned int setShadowColor:1;
        unsigned int setShadowOpacity:1;
        unsigned int setShadowOffset:1;
        unsigned int setShadowRadius:1;
        unsigned int setBorderWidth:1;
        unsigned int setBorderColor:1;
        unsigned int setAsyncTransactionContainer:1;
        unsigned int setAllowsEdgeAntialiasing:1;
        unsigned int setEdgeAntialiasingMask:1;
        unsigned int setIsAccessibilityElement:1;
        unsigned int setAccessibilityLabel:1;
        unsigned int setAccessibilityHint:1;
        unsigned int setAccessibilityValue:1;
        unsigned int setAccessibilityTraits:1;
        unsigned int setAccessibilityFrame:1;
        unsigned int setAccessibilityLanguage:1;
        unsigned int setAccessibilityElementsHidden:1;
        unsigned int setAccessibilityViewIsModal:1;
        unsigned int setShouldGroupAccessibilityChildren:1;
        unsigned int setAccessibilityIdentifier:1;
        unsigned int setBackgroundImage:1;
    } _flags;
    _Bool clipsToBounds;
    _Bool opaque;
    _Bool isHidden;
    _Bool needsDisplayOnBoundsChange;
    _Bool allowsEdgeAntialiasing;
    _Bool autoresizesSubviews;
    _Bool userInteractionEnabled;
    _Bool exclusiveTouch;
    UIColor *tintColor;
}

+ (id)pendingViewStateFromView:(id)arg1;
+ (id)pendingViewStateFromLayer:(id)arg1;
@property(nonatomic, getter=nx_asyncdisplay_isAsyncTransactionContainer, setter=nx_asyncdisplay_setAsyncTransactionContainer:) _Bool nx_asyncdisplay_asyncTransactionContainer; // @synthesize nx_asyncdisplay_asyncTransactionContainer=asyncTransactionContainer;
@property(retain, nonatomic) struct CGColor *borderColor; // @synthesize borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity;
@property(retain, nonatomic) struct CGColor *shadowColor; // @synthesize shadowColor;
@property(nonatomic, getter=isExclusiveTouch) _Bool exclusiveTouch; // @synthesize exclusiveTouch;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled;
@property(nonatomic) struct CATransform3D sublayerTransform; // @synthesize sublayerTransform;
@property(nonatomic) struct CATransform3D transform; // @synthesize transform;
@property(nonatomic) double contentsScale; // @synthesize contentsScale;
@property(nonatomic) double zPosition; // @synthesize zPosition;
@property(nonatomic) struct CGPoint position; // @synthesize position;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint;
@property(nonatomic) long long contentMode; // @synthesize contentMode;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic) double alpha; // @synthesize alpha;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor;
@property(nonatomic) unsigned long long autoresizingMask; // @synthesize autoresizingMask;
@property(nonatomic) _Bool autoresizesSubviews; // @synthesize autoresizesSubviews;
@property(nonatomic) unsigned int edgeAntialiasingMask; // @synthesize edgeAntialiasingMask;
@property(nonatomic) _Bool allowsEdgeAntialiasing; // @synthesize allowsEdgeAntialiasing;
@property(nonatomic) _Bool needsDisplayOnBoundsChange; // @synthesize needsDisplayOnBoundsChange;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=isHidden;
@property(retain, nonatomic) id contents; // @synthesize contents;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds;
@property(nonatomic) struct CGRect frame; // @synthesize frame;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque;
@property(nonatomic) _Bool clipsToBounds; // @synthesize clipsToBounds;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyToView:(id)arg1;
- (void)applyToLayer:(id)arg1;
@property(copy, nonatomic) NSString *accessibilityIdentifier;
- (void)setShouldGroupAccessibilityChildren:(_Bool)arg1;
- (_Bool)shouldGroupAccessibilityChildren;
- (void)setAccessibilityViewIsModal:(_Bool)arg1;
- (_Bool)accessibilityViewIsModal;
- (void)setAccessibilityElementsHidden:(_Bool)arg1;
- (_Bool)accessibilityElementsHidden;
- (void)setAccessibilityLanguage:(id)arg1;
- (id)accessibilityLanguage;
- (void)setAccessibilityFrame:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrame;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (unsigned long long)accessibilityTraits;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (void)setAccessibilityHint:(id)arg1;
- (id)accessibilityHint;
- (void)setAccessibilityLabel:(id)arg1;
- (id)accessibilityLabel;
- (void)setIsAccessibilityElement:(_Bool)arg1;
- (_Bool)isAccessibilityElement;
@property(copy, nonatomic) NSDictionary *backgroundImage; // @synthesize backgroundImage;
@property(nonatomic) double borderBottomWidth;
@property(retain, nonatomic) struct CGColor *borderBottomColor;
@property(nonatomic) double borderTopWidth;
@property(retain, nonatomic) struct CGColor *borderTopColor;
@property(nonatomic) double borderRightWidth;
@property(retain, nonatomic) struct CGColor *borderRightColor;
@property(nonatomic) double borderLeftWidth;
@property(retain, nonatomic) struct CGColor *borderLeftColor;
@property(retain, nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor;
- (void)setNeedsLayout;
- (void)setNeedsDisplay;
- (id)layer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

