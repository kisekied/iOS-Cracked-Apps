//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KGThemeButton, KGThemeImageView, KGThemeLabel, KGThemeView, NSArray, NSString, UIImageView;

@interface KGClickCellView : UIView
{
    CDUnknownBlockType _clickBlock;
    long long _rightViewType;
    NSString *_title;
    KGThemeLabel *_titleLabel;
    KGThemeLabel *_textLabel;
    KGThemeView *_sepLine;
    UIView *_tagView;
    double _rowH;
    NSArray *_tags;
    KGThemeButton *_clickBtn;
    KGThemeImageView *_arrowImage;
    NSString *_introStr;
    KGThemeLabel *_introLabel;
    KGThemeImageView *_coverImage;
    UIImageView *_error;
    NSString *_tipStr;
    double _tagX;
    struct CGSize _textSize;
}

@property(nonatomic) double tagX; // @synthesize tagX=_tagX;
@property(copy, nonatomic) NSString *tipStr; // @synthesize tipStr=_tipStr;
@property(nonatomic) __weak UIImageView *error; // @synthesize error=_error;
@property(nonatomic) struct CGSize textSize; // @synthesize textSize=_textSize;
@property(nonatomic) __weak KGThemeImageView *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) __weak KGThemeLabel *introLabel; // @synthesize introLabel=_introLabel;
@property(copy, nonatomic) NSString *introStr; // @synthesize introStr=_introStr;
@property(nonatomic) __weak KGThemeImageView *arrowImage; // @synthesize arrowImage=_arrowImage;
@property(nonatomic) __weak KGThemeButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) double rowH; // @synthesize rowH=_rowH;
@property(nonatomic) __weak UIView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) __weak KGThemeView *sepLine; // @synthesize sepLine=_sepLine;
@property(nonatomic) __weak KGThemeLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak KGThemeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long rightViewType; // @synthesize rightViewType=_rightViewType;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
- (void).cxx_destruct;
- (void)setCoverIconWithURL:(id)arg1;
- (void)setShowErrorView:(_Bool)arg1;
- (void)setShowArrowView:(_Bool)arg1;
- (void)setCoverIconWithImage:(id)arg1;
- (void)setIntroText:(id)arg1 withTextSize:(struct CGSize)arg2;
- (void)setRightTags:(id)arg1;
- (void)setShowRitht:(_Bool)arg1;
- (void)setRightPlachorText:(id)arg1;
- (void)setRightText:(id)arg1;
- (void)setShowSepLine:(_Bool)arg1;
- (void)btnClick;
- (void)refreshError;
- (void)createTag;
- (void)refreshIntro;
- (void)layoutSubviews;
- (void)createUI;
- (id)init;
- (id)initWithRightViewType:(long long)arg1 withTitleStr:(id)arg2;

@end
