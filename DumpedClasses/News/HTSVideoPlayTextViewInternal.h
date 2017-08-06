//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIColor;

@interface HTSVideoPlayTextViewInternal : UITextView
{
    _Bool _displayPlaceHolder;
    NSString *_placeholder;
    UIColor *_placeholderColor;
}

@property(nonatomic) _Bool displayPlaceHolder; // @synthesize displayPlaceHolder=_displayPlaceHolder;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setScrollable:(_Bool)arg1;
- (void)setText:(id)arg1;

@end
