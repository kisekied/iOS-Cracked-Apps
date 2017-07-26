//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRView.h"

@class NSAttributedString, NSString, UIColor, UIFont;

@interface VRLabel : VRView
{
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    long long _lineBreakMode;
    long long _numberOfLines;
    NSString *_hText;
    UIColor *_hTextColor;
    UIColor *_drawTextColor;
    NSAttributedString *_drawString;
    struct __CTFramesetter *_framesetter;
    struct __CTFrame *_frameRef;
    long long _totalLines;
}

+ (double)getLinesHeight:(long long)arg1 font:(id)arg2 lineSpacing:(double)arg3;
@property(nonatomic) long long totalLines; // @synthesize totalLines=_totalLines;
@property(nonatomic) struct __CTFrame *frameRef; // @synthesize frameRef=_frameRef;
@property(nonatomic) struct __CTFramesetter *framesetter; // @synthesize framesetter=_framesetter;
@property(retain, nonatomic) NSAttributedString *drawString; // @synthesize drawString=_drawString;
@property(retain, nonatomic) UIColor *drawTextColor; // @synthesize drawTextColor=_drawTextColor;
@property(retain, nonatomic) UIColor *hTextColor; // @synthesize hTextColor=_hTextColor;
@property(retain, nonatomic) NSString *hText; // @synthesize hText=_hText;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (unsigned long long)accessibilityTraits;
- (id)sizeKey:(struct CGSize)arg1;
- (id)coreFormatRefKey:(struct CGSize)arg1;
- (id)attributedStrKey;
- (id)defultKey;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isNeedClean;
- (struct CGSize)fitsSize:(double)arg1;
- (double)lineHeight;
- (unsigned char)getAlignment;
- (unsigned char)getVrLineBreakMode;
- (void)cleanDrawItem;
- (void)updateDrawItem;
- (id)updateDrawString:(id)arg1;
- (id)createAttributeString;
- (struct CGAffineTransform)transformForCoreText;
- (void)drawWithContext:(struct CGContext *)arg1 isCancelled:(CDUnknownBlockType)arg2;
- (id)drawText;
- (void)updateTextColor:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)dealloc;
- (void)bindView:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resetVRProperty;
- (void)resetLProperty;
- (id)init;

@end
